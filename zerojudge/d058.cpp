#include "iostream"

using namespace std;

int sgn(int i){
  if(i == 0)
    return 0;
  else if(i > 0)
    return 1;
  else 
    return -1;
}

int main(){

  int a ;
  cin >> a;
  cout << sgn(a) << endl ;
  return 0;
}
