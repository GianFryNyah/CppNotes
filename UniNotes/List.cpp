#include <iostream>

// Esercizio DA FARE: int stampa_posizione(int pos) const; su public - stampa l'elemento che si trova in posizione pos - sia ITERATIVO che RICORSIVO - se la posizione non c'e', stampa "Non Esiste"

class List{
    public:
        List();
        List(const List& s);
        ~List();


        void prepend(int x);
        void append(int x);

        void print() const; // const cosi' inserito specifica che questo metodo NON modifica lo stato della classe

        bool presente(int x) const; // controllo se esiste o non esiste un valore x dentro un oggetto di List
        int stampa_posizione(int pos) const; // stampa l'elemento che si trova in posizione pos se esiste
    private:
        struct Cella{
            int data;
            Cella* next;
        };

        Cella* head; // Lo stato dell'oggetto lista sara' un puntatore alla testa della lista

        void print_rec(Cella* pc) const;
        void append_rec(Cella*& l, int x);
        bool presente_rec(Cella* pc, int x) const;
        int stampa_posizione_rec(Cella* pc, int pos, int tmp) const;
};

List::List(){
    head = nullptr;
    std::cout << "Costruttore di default chiamato" << std::endl;
}

List::~List(){
    while(head != nullptr){
        Cella* temp = head;
        head = head->next;
        delete temp;
    }
    std::cout << "Chiamata al Distruttore di classe List" << std::endl;
}

List::List(const List& s){
    // head = s.head; e' una shallow copy, scelta default di C++: Cosa brutta e cattiva, di solito!!!
    head = nullptr;
    Cella* pc = s.head; // puntatore puntante alla testa della Lista s
    Cella* nc = nullptr;

    while(pc != nullptr){ // finche non avremo finito di scorrere la Lista s fai...
        if(head == nullptr){ // se la testa non aveva un puntatore valido, il primo valore di pc e' il puntatore alla testa di s che daremo a head
            head = new Cella;
            head->data = pc->data; // assegnamo anche i corrispettivi valori puntati dal puntatore della cella in testa alla lista
            nc = head;
        }
        else{
            // per tutte le altre celle, head NON deve essere modificato
            nc->next = new Cella; // nc e' head o la cella precedente, nc->next sara' una nuova Cella
            nc = nc->next;        // adesso ad nc assegnamo la "nuova Cella" menzionata sopra, nc->next
                                  // Cioe', nc e' la cella successiva, pari a nc->next della cella precedente
            nc->data = pc->data;  // Assegnamo i relativi valori puntati
        }
        pc = pc->next; // a pc viene assegnato il puntatore puntante alla cella successiva della lista s
    }
    if(nc != nullptr){
        nc->next = nullptr; // questo passaggio si svolge per evidare segmentatio fault in caso di liste vuote
    }
    std::cout << "Copy constructor chiamato" << std::endl;
}

void List::print() const{
/*  Cella* pc = head;
    while (pc!=nullptr){
        std::cout << pc->data << ' ';
        pc = pc->next; // avanzamento alla prossima cella
    }
    std::cout << ' ' << std::endl;*/
// Metodo Iterativo

    print_rec(head); // tecnica della funzione "cappello", print_rec(Cella* pc) e' un metodo privato
    std::cout << ' ' << std::endl;
// Metodo Ricorsivo
}

void List::print_rec(Cella* pc) const{
    if(pc!=nullptr){ // caso base
        std::cout << pc->data << ' ';
        print_rec(pc->next); // iterazione, prima o poi avremo pc == nullptr
    }
}

void List::prepend(int x){
    Cella* nuova = new Cella;
    nuova->data = x;
    nuova->next = head; // "sv"
    head = nuova;
}

void List::append(int x){ // append deve aggiungere un nuovo elemento in coda
    // deve scorrere tutta la lista, arrivare all'ultima cella della lista ( next == nullptr ) ed agganciarvi la NUOVA CELLA che conterra' x
/*
    if(head == nullptr){
        head = new Cella;
        head->next = nullptr;
        head->data = x;
    }
    else{
        Cella* nuova = head;
        while((nuova->next) != nullptr){
            nuova = nuova->next;
        }
        (nuova->next) = new Cella; // " nuova->next " e' il PROSSIMO elemento che aggiungiamo, nuova e' l'ultima cella ma NON nullptr, che e' "puntato" da nuova->next e che stiamo popolando con la cella da appendere, e nuova->next->next puntera' a nullptr
        (nuova->next)->data = x;
        (nuova->next)->next = nullptr;
    }
*/ // Metodo Iterativo

    append_rec(head, x);
    // Metodo Ricorsivo
}

void List::append_rec(Cella*& pc, int x){ // Cella*& pc usa anche la reference perche' il puntatore Cella pc dev'essere usato con un altro alias, altrimenti copieremmo il puntatore
    if(pc!=nullptr){
        append_rec(pc->next, x);
    }
    else{
        pc = new Cella;
        pc->data = x;
        pc->next = nullptr;
    }
}

bool List::presente(int x) const {
    /*
    bool flag = false;
    Cella* pc = head;
    while(pc != nullptr && !flag){
        flag = (pc->data == x);
        pc = pc->next;
    }
    return flag;
    */
   return presente_rec(head, x);
}

bool List::presente_rec(Cella* pc, int x) const {
    if(pc==nullptr){return false;}
    return (pc->data == x) || (presente_rec(pc->next, x));
}

void stampaX2(const List& l){ // invocazione del copy constructor definito da noi ( se non definito, shallow copy e' default )
    l.print();
    l.print();
}

int List::stampa_posizione(int pos) const{
    /*
    if(pos < 0){
        std::cout << "Non puoi indicare valori negativi!" << std::endl;
        return 0;
    }
    Cella* tmp = head;
    int cnt = 0;
    while(cnt!=pos && tmp!=nullptr){
        tmp = tmp->next;
        cnt++;
    }
    if(tmp == nullptr){
        std::cout << "La cella indice " << pos << " non esiste!" << std::endl;
        return 0;
    }
    return (tmp->data);
    */
   return stampa_posizione_rec(head, pos, 0);
}

int List::stampa_posizione_rec(Cella* pc, int pos, int tmp) const{
    if(pos < 0){
        std::cout << "Non puoi indicare valori negativi!" << std::endl;
        return 0;
    }
    if(pc==nullptr){
        std::cout << "La cella indice " << pos << " non esiste!" << std::endl;
        return 0;
    }
    if(pos == tmp){
        return pc->data;
    }
    return stampa_posizione_rec(pc->next, pos, tmp+1);
}

int main(){
    List l; // istanza della classe List, creiamo un oggetto l

    for(int i = 10; i >= 0; i--){
        l.prepend(i);
    }

    List l1 = l; // chiamata al copy constructor
    l1.prepend(-1); l1.append(11);
    l1.print();

    int x = 9;
    int y = 11;

    if(l1.presente(x)){
        std::cout << x << " e' contenuto nella Lista l1" << std::endl;
    }
    else{
        std::cout << x << " NON e' contenuto nella Lista l1" << std::endl;
    }

    stampaX2(l); // qua viene chiamato il copy constructor
    std::cout << "La cella di indice " << y << " contiene il valore " << l1.stampa_posizione(y) << std::endl;

    return 0;
}