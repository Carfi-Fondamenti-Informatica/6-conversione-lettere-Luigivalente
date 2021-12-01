include "lib.h"
char conversione(char carattere){
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
