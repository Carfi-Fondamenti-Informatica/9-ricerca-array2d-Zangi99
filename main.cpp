#include <iostream>
#include <cstring>
using namespace std;

bool cerca(char lista[10][20], char nome[1][20], int &pos){
  
  for(int i=0; i<10; i++){
    if(strcmp(lista[1], nome[0],)==0){
      pos=i;
      return true;}
  }
  return false;
}

   


int main(){
  int pos;
  char A[10][20], B[1][20];
  for (int i=0; i<10; i++){
    cin>>A[i];
  }
  
  cin>>B[0];
  
  if(cerca(A, B, pos)){
    cout<<pos<<endl;
  }
  else{
  cout<<"Non presente"<<endl;
  }
  
  return 0;
}
