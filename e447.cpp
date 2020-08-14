#include <bits/stdc++.h>

using namespace std;


queue<int> q;

int main(){
  while(!cin.eof()){
    int action ;
    cin >> action;
    switch(action){
      
      case 1:
        int num;
        cin >> num ;
        q.push(num);
        break;

      case 2:
        if(q.empty())
          cout << -1 << endl;
        else
          cout << q.front() << endl;
        break;
      
      case 3:
        if(!q.empty())
          q.pop();
        break;
    
    }
  }

  return 0 ;
}
