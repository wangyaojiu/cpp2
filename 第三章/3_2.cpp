/***********************
AUTOR:WANGHAO
TIME:08/25
WORKS:3_2 P67 ����8λ������ת��Ϊʮ����
�ж϶����ƴ����� 
************************/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;


double power(double x,int y);  //���� 3_1 

int main(){
//int a;
int k,j;
char s[100];	
int value=0;
cout<<"������һ����λ��������"<<endl;
/*cin>>a;

for(k=0,j=strlen(s);k<j;k++)
if(s[k]<48||49<s[k])break;   //�ж��Ƿ�Ϊ������ 
if(k<j)
k=0;
else
cout<<"����һ����������"<<endl;  
return 0;                    //������Ĳ��Ƕ���������� 
if(k==0){

*/	for (int i=7;i>=0;i--){
		char ch;
		cin>>ch;
		if(ch=='1')
		value+=static_cast<int>(power(2,i));
		
	}
	cout<<"ʮ��������"<<value<<endl;
	return 0;
}

//else
//return 0;}
double power(double x,int y){


  double val=1.0;
  while (y--)
	  val*=x;
  return val;


}
