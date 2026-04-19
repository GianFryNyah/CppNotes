#include <iostream>

struct Student{
    // CAMPI della struct
    float avg;
    int age;
    std::string name;
    // METODI della struct
    void stampa(){
    std::cout << name << " is a student" << std::endl;
    }
};

struct Point{
    private: // non accessibile dall'Utente
        double x;
        double y;
    public: // visibile ed accessibile dall'Utente
        void setx(double nx);
        void sety(double ny);
        void setm(double nm);
        void setAlfa(double na);
        void print(){
            std::cout << "Point is at coordinates " << Point::x << " - " << Point::y << std::endl;
        }
};

void Point::setx(double nx){
    x = nx;
}
void Point::sety(double ny){
    y = ny;
}

void Point::setm(double nm){
    //
}
void Point::setAlfa(double na){
    //
}

// La scelta di default in merito alla visibilita' sulle struct e' " Public "
// Nelle classi invece e' " Private "
// cio' e' stato fatto per rispettare la retrocompatibilita' con C
// Class --> Parte " privata "
//       --> Parte " pubblica "
// Concetto di "incapsulamento"
// esiste una keyword " protected ", da interpretare come private

class Name{
    //Name(); // costruttore di default sempre presente
    //~Name(); // distruttore
    public:
        void print(){
            std::cout << name << std::endl;
        }
        // <-- metodi pubblici + eventuali variabili pubbliche (di solito non si fa)
    private:
        std::string name;
        void foo(){
            // ...              <---- INLINE ( dichiari e definisci )
        }

        void foo2(); //          <--- OUTLINE ( prima dichiari, POI definisci )

        // <-- metodi privati + stato della classe
};

void Name::foo2(){
    // ...              <-- definizione del metodo pubblico dichiarato su Name
}

int main(){
    Student Giovanni = {8.5, 24, "Giovanni"};
    std::cout << Giovanni.name << " is " << Giovanni.age << " years old" << std::endl;
    Giovanni.stampa();
    Student generic;
    generic.avg = 9.5;
    std::cout << "Best student average score is " << generic.avg << std::endl;

    // Codifica della struct nascosta, solo i metodi sono accessibili
    Point a;
    a.setx(12);
    a.sety(33);
    a.print();

    Name x;
    Name* y = new Name;
    // Name x; // costruttore di default, c'e' sempre ed e' 'vuoto'
    // ogni volta che un oggetto muore, viene quindi chiamato il distruttore di default se un altro non e' presente
    // ed ad ogni creazione di un oggetto, se non presente un esplicitamente scritto verra' comunque chiamato un costruttore di default
    // per oggetti dinamici, new invochera' il costruttore e delete il distruttore
    return 0;
}