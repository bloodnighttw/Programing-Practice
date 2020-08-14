#include "iostream"

using namespace std;

int main(){
  int max = 0 ;
  for(short a = 0 ; a < 3 ; a++ ){
    int input;
    cin >> input ;
    if(input > max)
      max = input;
  }

  cout << max << endl ; 

  return 0;
}
