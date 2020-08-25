/*
Time:08/25
works:3_1 函数的调用 P66
Autor：wanghao
dev-cpp 5.11 
*/ 

#include<iostream>
using namespace std;

double power(double x,int y){

  double val=1.0;
  while(y--)
	  val*=x;
  return val;
}





int main(){
cout<<"5的8次方是:"<<power(5,8)<<endl;   //函数调用作为表达式出现在语句中 
//发现超过8次方就会显示不出来 
return 0;
}
