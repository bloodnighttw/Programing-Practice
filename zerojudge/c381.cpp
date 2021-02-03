#include <iostream>
#include <sstream>

using namespace std;

int main(){
  

  while(true){
    int n , m;
    cin >> n >> m;

    string result= "";

    if(n == 0 && m == 0){
      break;
    }
    
    for(int i = 0 ; i < n ; i++){
      string temp ;
      cin >> temp;
      result += temp;
    }

    //cout << endl << dict << endl;

    for(int i = 0 ; i < m ; i++){
      int temp;
      cin >> temp;
      cout << result[temp-1];
    }
   
    result.clear();
    cout << endl;
  }



}

