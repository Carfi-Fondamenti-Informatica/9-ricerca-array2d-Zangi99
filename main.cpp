#include <iostream>
#include "lib.h"
using namespace std;

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
