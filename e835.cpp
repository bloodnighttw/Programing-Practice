#include <bits/stdc++.h>


using namespace std;

void show(int a,int b,int c){
  if(c == 0){
    b --;
    if(a !=2)
      c = 25;
    else{
      c = 50 ; 
    }
  }
  cout << a << " " << b << " " << c << endl;
}

int main(){

  int n;
  cin >> n;

  if(n <= 2500){
  
    int b = n / 25 + 1;
    int c = n % 25  ;
    show(1,b,c);
    return 0;
  
  }else if(n <= 7500){
    
    n -= 2500 ;

    int b = n / 50 + 1;
    int c = n % 50  ;
    show(2,b,c);

    return 0;
  
  }else{

    n -= 7500;

    int b = n / 25 + 1;
    int c = n % 25;
    show(3,b,c);
    
    return 0;
  }

  return 0 ;
}
