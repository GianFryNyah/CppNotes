#include <iostream> // è una libreria standard, lo si capisce dai < >
#include <vector>

void satan(int& x){ // passaggio per copia O per reference ( per reference in questo caso )
    int y;
    x = 666;
}

void foo(int v[]){
    v[2] = 666;
}

int main(void){
    int a{0}; // con controllo narrowing tipo
    int& c=a; // l'oggetto a c va assegnato subito ed i tipi devono essere perfettamente uguali
    c = 8; // a = 8;
    satan(a);
    {
        int a; // hiding
        std::cin >> a;
        std::cout << "Hello World " << a << std::endl;
    }
    std::cout << "Hello World " << a << std::endl;
    // cout è un identificatore che ha senso all'interno di uno namespace ' std '
    // ciò permette di limitare conflitti per via delle denominazioni dei vari identificatori

    //int v[10]; // in C possiamo scrivere così
    int* v1 = new int [10]; // array allocato alla C++ maniera
    std::vector<int> v2(100); // presente all'interno della standard library
    v2[3] = 12; // valido ma sconsigliabile
    v2.at(4) = 12; // raccomandabile, impedisce l'accesso a locazioni non valide
    std::cout<<v2[3]<<" "<<v2.at(4)<<std::endl;
    v2.resize(50);
    v2.push_back(23); // aggiunge il 23 come 51-esimo elemento dell'array

    int v[] = {1, 2, 3, 4, 5, 6, 7};
    foo(v);
    std::cout<<v[2]<<std::endl;
    return 0;
}
// test

/* g++ test.cpp --std=c++14
 Oggetto --> Area di memoria a cui è assegnato un tipo
 Variabile --> Oggetto a cui è attribuito un identificatore
 C++ è un linguaggio "strongly typed"

 file system --> rappresentazione GERARCHICA di file e cartelle ( tree representation )

 Comandi utili per terminale:
    pwd
    ls --> stampa a video su terminale il contenuto della cartella dove si è "posizionati"
    man "seguiti dal comando" --> lista delle possibili opzioni e relativa descrizione
    man ls
    ls -lt --> informazioni più dettagliate sul contenuto
    ls -a --> rileva anche file nascosti

    cd /home ; cd .. ; cd NOME_CARTELLA

    Dichiarare: introdurre un nome
    Definire: allocare spazio per il valore dei nomi dichiarati

    Ripassa concetti di: right-value e left-value
*/