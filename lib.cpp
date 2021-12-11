#include "lib.h"
#include <string.h>

bool res(char lista[10][20], char nome[20], int &i){
  for (i=0;i<10;i++){
    if((strcmp(lista[i],nome))==0){
      return true;
    }
  }
  return false;
}

