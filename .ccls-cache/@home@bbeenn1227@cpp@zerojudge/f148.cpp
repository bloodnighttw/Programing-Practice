#include <iostream>

using namespace std;

/* TODO-LIST 
 * 1.Free Array Pointer
 *  (because I used the key world "new")
 * 2.Fix the bug what i think wrong.
 * 3.Make Code more better. 
 * */

struct Pos{
  int x;
  int y;

  Pos(int a,int b){
    x = a;
    y = b;
  }

};

Pos pos(-1,-1);

int char_count = 0;
Pos* char_pos[128] = {&pos};

int main(){
  int w ,h ,do_time;
  cin >> w >> h >> do_time;
  for(int i = 0 ; i < w ; i++){
    for(int j = 0 ; j < h ; j ++){
      string temp ;
      cin >> temp;
      if(temp != "0" ){
        cout << i <<" " << j << endl;
        char_pos[temp[0]] = (new Pos(i,j));
        char_count++;
      }
    }
  }

  if(char_count <do_time){
    cout << "Mission fail."<<endl;
    return 0;
  }

  int has_found = 0;
  
  for(char i = 'a' ;i <= 'z' ; i++){
    if(char_pos[i]->x != -1){
      cout << char_pos[i]->x << " " << char_pos[i]->y << endl;
    }
  }

}
