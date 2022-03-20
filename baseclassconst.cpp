#include<iostream>
using namespace std;

class base1{
protected:
int i;
public:
base1(int x){
i=x;
cout<<"parametrised constructor base"<<endl;
}
~base1(){
cout<<"default destructor base"<<endl;
}
	
};

class base2{
protected:
int k;
public:
base2(int x){
k=x;
cout<<"parametrised constructor base"<<endl;
}
~base2(){
cout<<"default destructor base"<<endl;
}
	
};

class derived: public base1,public base2{
int j;
public:
	
	derived(int x,int y,int z) : base1(y),base2(z){
		j=x;
		cout<<"parmaetrised derived"<<endl;
		}
	~derived(){
	cout<<"destructor derived"<<endl;
}
	void show(){
	cout<<i<<""<<j<<""<<k<<endl;
		}

	
};




int main(){
derived ob(3,4,5);
ob.show();



return 0;
}

