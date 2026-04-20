#include <iostream>
#include <vector>

class Foo{
    public:
        
        Foo();
        Foo(const Foo& s);  // il copy constructor e' un costruttore in cui il parametro formale e' una const reference ad un oggetto della stessa classe che stiamo definendo
                            // construttore per copia
        Foo(int a);
        ~Foo();
        void print();
        void set(int a);
    
    private:
        int* x;
};

Foo::Foo(){ // costruttore di default, se non esplicitamente definito non fara nulla
    x = new int;
    *x = 0;
    std::cout << "Chiamato costruttore di default" << std::endl;
}

Foo::Foo(const Foo& s){ // costruttore per copia copy-constructor
    x = new int;
    *x = *(s.x);
    std::cout << "Copy constructor" << std::endl;
}

Foo::Foo(int a){ // costruttore alternativo, NON di default
    x = new int;
    *x = a;
    std::cout << "Costruttore con parametro intero" << std::endl;
}

Foo::~Foo(){ // distruttore
    std::cout << "Distruttore di classe con x = " << *x << std::endl;
    delete x;
}

void Foo::print(){
    std::cout << *x <<std::endl;
}

void Foo::set(int a){
    *x = a;
}

void funzione(Foo& a){
    a.print();
}

Foo globale;

Foo mia_funzione(const Foo& a){
    return a;
}

int main(){
    std::cout << "Inizio del programma" << std::endl;
/*
    //{
    Foo myv1;
    myv1.set(12);
    // myv1.print();
    //} // oppure qua, se presenti

    Foo myv3[7];

    std::vector<Foo> v(13);

    Foo* pf = new Foo; // chiama il costruttore di classe
    // Foo* non_fare = (Foo*) malloc(sizeof(Foo));

    pf->set(100); // useremo -> perche' pf e' un puntatore
    pf->print();

    Foo myv1_copy(myv1);

    Foo myv4 = 666; // Il compilatore cerca un costruttore che permetta l'assegnazione
                    // abbiamo specificato questo costruttore a riga 46
                    // e' un ASSEGNAMENTO, NON una inizializzazione

    Foo myv5 = myv4; // Foo* y = new Foo(x); // copy constructor
                     // Foo y(x); Fooy y{x};
    
    std::cout << "Fine del programma" << std::endl;

    funzione(myv1_copy);

    delete pf; // chiama il distruttore di classe
*/

    Foo x = 12;
    Foo y = mia_funzione(x);
    
    std::cout << "Fine del programma" << std::endl;
    return 0;
} // i distruttori di default vengono chiamati esattamente qua'

// possibile domanda: cos'e' un oggetto in C++? ( Locazione di memoria avente un tipo )
//                    che differenza c'e' tra malloc e new?: malloc alloca un'area di memoria conoscendo solo il numero dei byte da allocare e torna un puntatore generico
//                                                           new w' tipata, specifico un tipo senza definire la dimensione ( no casting )
//                                                           new e' un operatore del linguaggio mentre la malloc e' una funzione di libreria
//                                                           new chiama i costruttori in modo automatico, malloc no
// IMPORTANTE: Quando io definisco la copia di un oggetto facendo la copia del puntatore, si dice che faccio una Shallow Copy ( copia superficiale )\
//             Quando io definisco che la clonazione di un oggetto prevede di clonare l'oggetto clonato ma non il puntatore, sto facendo una Deep Copy di un oggett
//             ( semantica per cui copiare un oggetto vuol dire "clonare" l'oggetto puntato dai puntatori su aree di memoria diverse )
// Shallow Copy and Deep Copy
// Il Copy Constructor permette di cambiare la semantica da Shallow a Deep