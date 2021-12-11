#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char lista[10][20];
  char nome[20];
  int a=0;
  for (int i=0;i<10;i++){
    cin>>lista[i];
  }
  cin>>nome;
  
  if(res(list,nome,a)){
    cout<<a;
  }else{
    cout<<"non presente";
  }
  return 0;
}
  
