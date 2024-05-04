#include <iostream>
#include <vector>
#include <string>
using namespace std;


int quarter_of(int month){
  if(1<=month<4){
    return 1;
    cout<<"1";
  }else if(4<=month<7){
    return 2;
    cout<<"2";
  }else if(7<=month<10){
    return 3;
    cout<<"3";
  }else{
    return 4;
  }
  
}

int main()
{
    quarter_of(5);
}