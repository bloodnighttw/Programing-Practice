#include <iostream>

using namespace std;


struct Pos{
  int x;
  int y;

  Pos(int a,int b){
    x = a;
    y = b;
  }

};

int char_count = 0;
Pos* char_pos[26] = {NULL};

int main(){

  int w ,h ,do_time;
  cin >> w >> h >> do_time;
  for(int i = 0 ; i < w ; i++){
    for(int j = 0 ; j < h ; j ++){
      char temp ;
      cin >> temp;
      if(temp != '0' ){
        //cout << i <<" " << j << endl;
        char_pos[(int)(temp - 'a')] = (new Pos(i,j));
        char_count++;
      }
    }
  }

  if(char_count <do_time){
    cout << "Mission fail."<<endl;
    return 0;
  }

  int has_found = 0;
  
  for(char i = 0 ;i <= 'z' - 'a' && has_found != do_time ; i++){
    if(char_pos[i] != NULL ){
      cout << char_pos[(int)i]->x << " " << char_pos[(int)i]->y << endl;
      has_found++;
    }
  }

}
