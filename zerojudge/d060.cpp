#include "iostream"

using namespace std;

int main(){
  
  int now_time;
  cin >> now_time;

  cout << ( 25 - now_time + 60 ) % 60 << endl ;

  return 0;
}
