#include <iostream>
#include <iomanip>
#include <cstdlib> // �ܼưѼ�
#include <ctime> // �ɶ��Ѽ� 
using namespace std;

int cosmos();   //���� 
int zero();   //�o���� 
int b=0,c=0,d=0,e=0,x=0;

int main(){
	srand(time(0));// �ɶ��ܼ�  
		cout<<"Faces of 4 dices:"<<endl;
        for(int r=1;r<=500;r++){	//�뤭�� 
	        for(int a=1;a<=4;a++){  //�|�ӻ�l 
	    	    x=1+rand()%5;
	    		cout<<setw(3)<<x;
			    if(a==1){  
	    	        b=x; //�@�� 
	    	        } 
	    	    if(a==2){ 
	    	        c=x; //�G��
	    	        } 
	    	    if(a==3){ 
	    	        d=x; //�T��
	    	        } 
	    	    if(a==4){ 
	    	        e=x;//�|�� 	        
	    	        } 
	        }
	       cosmos(); //���� 
	       zero(); //�o���� 
	      
			if(zero()!=0) 
			cout<<setw(7)<<"����= "<<zero()<<endl; //��\�l,2 2��2 1 1�� 
			else
			cout<<setw(7)<<"�L����"<<endl; //��3 1�Υ|�ӼƳ����@�ˮ� 
	   } 
	   cout<<"Finished executing";
	}
	
	int cosmos(){ //����(��j�p) 
	    int z=0; //�Ȧs�� 
     	if(b>c){ 
             z=b;
             b=c;
             c=z;
             } 
		if(b>d){
		     z=b;
             b=d;
             d=z;
         }
		if(b>e){ 
             z=b;
             b=e;
             e=z;
		} 
		if(c>d){ 
             z=c;
             c=d;
             d=z;
		} 
		if(c>e){ 
             z=c;
             c=e;
             e=z;
		} 
		if(d>e){ 
             z=d;
             d=e;
             e=z;
		} 
    }
	
	
	int zero(){ //�o����  
		if(b==c&&c==d&&d==e)
			return 100; //�\�l 
		else if(b==c&&d==e)
			return d+e; //2 2(���ۦP) 	
		else if(b==c&&c==d||c==d&&d==e)
			return 0; //3 1(�T�ӬۦP)  
		else if(b==c)
			return d+e; //2 1 1(��ӬۦP) 
		else if(c==d)
			return b+e; //2 1 1(��ӬۦP) 
		else if(d==e)
			return b+c; //2 1 1(��ӬۦP) 
		else
		     return 0; //�|�ӼƳ����@�ˮ� 
	} 
