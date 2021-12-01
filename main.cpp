#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char carattere,conv;
    cin >> carattere;
    conv=conversione(carattere);
    if (conv!='0'){
        cout << conv <<endl;
    }else{
        cout << "errore" <<endl;
    }
}
