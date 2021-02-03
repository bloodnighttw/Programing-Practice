#include "iostream"
#define fori(i,b,c) for(int i=(b);i<(c);i++)

using namespace std;

int main(){
  int do_time ;
  cin >> do_time;
  fori(i,0,do_time){
    
    bool has_not_do_sth = true,print = false;
    int range_start,range_end,num;
    
    cin >> range_start >> range_end >> num;
    
    fori(j,range_start + 1,range_end){
      
      if(j % num != 0){
        
        if(print){
          cout << " ";
        }

        has_not_do_sth = false;
        print  = true;
        
        cout << j;

      }

    }
    
    if(has_not_do_sth){
      cout << "No free parking spaces." ;
    }

    cout << endl;
  }

}
