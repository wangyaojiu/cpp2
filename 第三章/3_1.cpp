/*
Time:08/25
works:3_1 �����ĵ��� P66
Autor��wanghao
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
cout<<"5��8�η���:"<<power(5,8)<<endl;   //����������Ϊ���ʽ����������� 
//���ֳ���8�η��ͻ���ʾ������ 
return 0;
}
