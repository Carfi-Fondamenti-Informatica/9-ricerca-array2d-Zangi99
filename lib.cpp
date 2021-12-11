#include "lib.h"
#include <cstring>

bool cerca(char lista[10][20], char nome[1][10], int &pos){
    for (int i=0; i<10; i++){
        if(strcmp(lista[i],nome[0])==0){
            pos=i;
            return true;
        }
    }return false;
}

