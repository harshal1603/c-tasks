//demo for shallow copy in default constructor
#include<iostream>
using namespace std;
class demo{
int d1,d2,*p;

public:
	demo(){ //default constructor
	p=new int;	
		}
	void setval(int i,int j,int k){
	d1=i;
	d2=j;
	*p=k;
		}

	void display(){
		cout<<"d1: "<<d1;
		cout<<"d2: "<<d2;
		cout<<"p: "<<*p;		

		}


};

int main(){
demo d;
d.setval(10,20,30);
d.display();

demo d3;
d3=d;
d3.display();
d.setval(100,200,300);
d.display();
d3.display();

return 0;
}
