/*
*Time:08/25
*Autor:wanghao
*works:3_6 ������Ϸ P71
*Dev-c++ v5.11 
*/
#include<iostream>
#include<cstdlib> 
using namespace std;
int rolldice(){
	int a=1+rand()%6;     //��������� 
	int b=1+rand()%6;
	int sum=a+b;
	cout<<"���ӵ�����Ϊ"<<a<<" + "<<b<<" = "<<sum<<endl;
	return sum;
}
enum moshi {WIN,FALSE,PLAYING};
int main(){
	int mypoint,sum;
	moshi status;   
	unsigned seed;  //����rand���������� 
	cout<<"********************************��  Ϸ  ��  ��****************************************"<<endl;
	cout<<""<<endl;
	cout<<"*ÿ��Ͷ���������ӣ�������Ϊ7��11ʤ�� Ϊ2,3,12��ʧ��"<<endl;
	cout<<""<<endl;
	cout<<"*�������ڶ��֣���һ�ֵ�������Ϊ��һ�ֵĵ���"<<endl;
	cout<<""<<endl;
	cout<<"*�������Ϻ͵��ڵ�һ�ֵ����ͣ���ʤ�����ڴ�֮ǰ��������Ϊ7����ʧ��"<<endl;
	cout<<""<<endl;
	cout<<"������һ�����֣�������������������ʼ���Ͷ������"<<endl;
	cin>>seed;
	srand(seed);  
	sum=rolldice();
    switch(sum){
    	case 7:
    	case 11:
		status=WIN;   //���������Ϊ7&11 ʤ�� 
		break;
	    case 2:
	    case 3:
	    case 12:
	    status=FALSE;    //�����Ϊ2&3&12  ʧ�� 
	    break;
	    default:
	    	status=PLAYING;  
			mypoint=sum;            
	    	cout<<"������һ����Ϸ"<<mypoint<<endl;
			break;
		}
		while(status==PLAYING){    //������һ�� 
			sum=rolldice();
			if (sum==mypoint)
			status=WIN;
			else if(sum==7)
			status=FALSE; 
		}
		
		if(status==WIN)
		
			cout<<"****��ϲ��Ӯ��o(*������*)��****"<<endl;
		
		else
			cout<<"��Ȼ���ˣ�����ҲҪ�ٽ�������|��O��|��ף�����~"<<endl;
			return 0;
		}
