#include <bits/stdc++.h>

using namespace std;

int max_ = 1;
vector<int> v; //to record the input
map<int, int> m; //to store the inforation about the key
map<int, bool> hasChange; //to check if the number has been printed or not.

int main(){
  
  int time;
  cin >> time;
  
  for(int i = 0 ; i < time ; i++){
    
    int key; 
    cin >> key;
    v.push_back(key);
    if(m.find(key) != m.end()){
      
      int orignal_num = m[key]; 
      orignal_num ++;
      
      if(orignal_num > max_){
        
        max_ = orignal_num;
      
      }

      m[key] = orignal_num;

    }else{
      
      m[key] = 1;
    
    }

  }


  //show
  int doTime = 0;
  cout << m.size() << endl;

  if(max_ != 1)
    for(auto& a:v){
      if(m[a] == max_ && hasChange.find(a)==hasChange.end()){
        if(doTime)
          cout <<" " ;

        cout << a;
        hasChange[a] = true;
      }
      doTime++;
    }
  else {
    cout << "NO" ;
  }
  cout << endl;

  return 0 ;
}
