#include <iostream>
using namespace std;

char conversione(char carattere){
    if((carattere >= 'a'&& carattere <='z') || (carattere >='A' && carattere <='Z')){
        if(carattere >= 'a' && carattere <= 'z'){
            carattere = carattere-32;
            return carattere;
        }else if(carattere>= 'A' && carattere <= 'Z'){
            carattere = carattere+32;
            return carattere;
        }else{
            return '0';
        }
    }
}

int main() {
    char carattere,conv;
    cin >> carattere;
    if((carattere >= 'a'&& carattere <='z') || (carattere >='A' && carattere <='Z')){
        conv=conversione(carattere);
        cout << conv <<endl;
    }else{
        cout << "errore" <<endl;
    }
}
