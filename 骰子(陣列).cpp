#include <iostream>
#include <iomanip>
#include <cstdlib> // �ܼưѼ�
#include <ctime> // �ɶ��Ѽ� 
using namespace std;

int cosmos();   //���� 
int zero();   //�o���� 
int x[5];

int main(){
	srand(time(0));// �ɶ��ܼ� 
        for(int b=1;b<=500;b++){	//��b�� 
	        for(int a=1;a<=4;a++){  //�|�ӻ�l 
	    	    x[a]=1+rand()%6;
	    		cout<<setw(3)<<x[a];
	        }
	       cosmos(); //���� 
	       zero(); //�o���� 
			if(zero()!=0){
				if(zero()==100)
					cout<<setw(5)<<"���l"<<endl; //��\�l�� 
				else
					cout<<setw(7)<<"����= "<<zero()<<endl; //��2 2��2 1 1��		
			} 
			else
		    	cout<<setw(7)<<"�L����"<<endl; //��3 1�Υ|�ӼƳ����@�ˮ� 
	   }}
	
	int cosmos(){ //����(��j�p) 
	   x[0]=0; //�Ȧs��
	   for(int a=1;a<=3;a++){
	   	  for(int b=a+1;b<=4;b++){
	   	  	if(x[a]>x[b]){ 
             x[0]=x[a];
             x[a]=x[b];
             x[b]=x[0];
             }}}}
	
	int zero(){ //�o����  
		if(x[1]==x[4])
			return 100; //�\�l 
		else if(x[1]==x[2]&&x[3]==x[4])
			return x[3]+x[4]; //2 2(���ۦP) 	
		else if(x[1]==x[3] || x[2]==x[4])
			return 0; //3 1(�T�ӬۦP)  
		else if(x[1]==x[2])
			return x[3]+x[4]; //2 1 1(��ӬۦP) 
		else if(x[2]==x[3])
			return x[1]+x[4]; //2 1 1(��ӬۦP) 
		else if(x[3]==x[4])
			return x[1]+x[2]; //2 1 1(��ӬۦP) 
		else
		     return 0; //�|�ӼƳ����@�ˮ� 
	} 
