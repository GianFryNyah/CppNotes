#include <iostream>
#include <vector>

int Max(std::vector<int> myVector, int n){
    if(n == 1){return myVector.at(n-1);}
    // come primo valore di holder avremo dunque myVector[0], cioe' 4 per l'esempio sotto

    int holder = Max(myVector, n-1);
    // la valutazione del 'contenuto' di holder rimane in sospeso
    // le restanti righe di codice sotto verranno eseguite per ogni chiamata ricorsiva fatta, cioe' per n volte

    if(holder > myVector.at(n-1)){return holder;}
    else return myVector.at(n-1);
    // dopo aver valutato il "primo" holder, arrivati a n = 1 e holder = 4, siamo usciti dalla prima "ricorsione"
    // uscendo, n e' tornato a essere myVector.size() cioe' in questo esempio 10
    // holder > myVector.at(10-1) cioe' 4 > 7
    // tornera' 7, in ogni caso questo valore RITORNATO inizializza holder perche' come si nota, era stato chiamato n volte
    // infatti holder = Max(myVector, n-1) significa che holder e' stato inizializzato tante volte
    // se il "primo" holder era 4, il "secondo" sara' quindi 7 ; si noti che stavolta n si riduce, siamo dentro la 'seconda' "ricorsione"
    // holder > myVector.at(9-1) cioe' 7 > 3
    // torneta' 7
    // se il "primo" holder era 4 ed il "secondo" era 7, il "terzo" sara' 7
    // e si continua cosi' finche' si esauriranno le n chiamate
    // infatti nonostante abbia accennato ad una 'prima' e 'seconda' ricorsione, in verita' questo secondo passaggio si tratta di
    // "smaltire" le ultime due righe di codice chiamate n volte ma "non svolte" finche' non riuscivamo a dare un primo valore ad holder
}

int main(){
    std::vector<int> myVector = {4, 1, 8, 6, 0, 9, 5, 2, 3, 7};
    int size = myVector.size();
    std::cout << Max(myVector, size) << std::endl;
    return 0;
}
