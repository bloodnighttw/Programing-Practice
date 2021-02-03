#include "iostream"

using namespace std;

string str_arr[] = {"Pen","Pineapple","Apple","Pineapple pen"};

void next_index(int& index){
  index = (index+1)%4;
}

int main(){

  bool loop = true;
  int index = 0 , count = 1 , do_time_limit;
  cin >> do_time_limit ;

  for(int i = 0 ; loop ; i++ ){
    
    for(int j = 0 ; j < 4 && loop ; j++){
      for(int k = 0 ; k <= i ; k++,count++){
        if(count == do_time_limit){
          loop = false;
          cout << str_arr[index]<<endl;
          break;
        }
      }
      next_index(index);
    }

  }

}
