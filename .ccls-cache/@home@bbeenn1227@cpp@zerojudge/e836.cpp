#include <bits/stdc++.h>

using namespace std;

int max = 1;
vector<int> v;
map<int, int> m;

int main(){
  int time;
  cin >> time;
  for(int i = 0 ; i < time ; i++){
  int key; cin >> key;
  if(m.count(key)>0){
    
    int orignal_num = m[key]; 
    orignal_num ++;
    
    if(orignal_num > max){
      max = orignal_num;
      v.clear();
      v.push_back(orignal_num)
    }

  }else{

  }

  }
  return 0 ;
}
