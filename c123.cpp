/*
 * Author:		bloodnighttw
 * URL:				https://zerojudge.tw/ShowProblem?problemid=c123
 * ID:				c123
 * Statue:		AC | 81 ms | 320 Kb
 * Note:			nothing
 */

#include <bits/stdc++.h>

using namespace std;

class Rail{

  private:
    int index_now = -1; // -1 mean empty
    int x =0;
    int stack_arr[1001];
    int* arr; //point to array address
  
  public:

    bool empty(){
      if(index_now == -1){
        return true;
      }
      else{
        return false;
      }
    }

    bool push(int args){
      index_now++; 
      if(index_now==1001){
        index_now--;
        return false;
      }
      stack_arr[index_now] = args;
      //cout <<"push ["<<index_now<<"]"<<stack_arr[index_now] << endl;
      return true;
    }

    int pop(){
      if(index_now < 0){
        return -1;
      }
      index_now --;
      //cout << "pop  ["<< index_now+1<<"]"<< stack_arr[index_now+1] << endl;
      return stack_arr[index_now + 1];
    }

    void clear(){
      x = 0 ;
      index_now = -1;
      arr = NULL; // ZeroJudge don't allow us to use 'free()' QAQ
    } // after calling , u should call 'reset(int* arr)' to avoid error(or exception)

    void reset(int* arr,int x){
      this->arr = arr;
      this->x = x;
    }

    bool emulator(){
      int num = 1;
      for(int i = 0 ; i < x ; i++ ){
         
        int a = pop();
        if(a != -1){
          //cout << a << "|" << i << endl;
          if(a == arr[i])
            continue;
          else 
            push(a);
        }

         for(int j = num; j <= x ; j++ ){
           if(j != arr[i]){
            push(j);
            num++;
           }
           else{ 
            num++;
            break;
           }
         }
         
      }
       
      return empty(); 
    }


};

int main(){
  
  int input = 0 ;
  Rail rail; 
  while ( cin >> input && input > 0 ) {
    int arr[input]; 
    while ( cin >> arr[0] && arr[0]) {
      for (int i = 1; i < input ; i++) {
        cin >> arr[i]; 
      }   
      rail.reset(arr, input);
      if(rail.emulator())
        cout << "Yes" << endl;
      else 
        cout << "No" << endl;
      rail.clear();
    }

  }

  return 0 ;
}
