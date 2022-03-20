#include<iostream>
using namespace std;

class base{
protected:
int i,j;
public:
base(){
cout<<"default constructor base";
}
	void set(int a,int b){
	i=a;
	j=b;
}	

void show(){
	cout<<i<<""<<j<<endl;
	}
};

class derived : public base{
int k;
public:
	derived(){
		cout<<"default constructor derived"<<endl;
		}
	derived(int x){
		cout<<"parmaetrised derived";
		}

	void showk(){
	cout<<i*j<<endl;
		}
	//show();
};




int main(){
derived ob1;

ob1(3);

//ob2.showj();



return 0;
}

