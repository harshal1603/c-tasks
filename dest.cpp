#include<iostream>
using namespace std;

class base{
protected:
int i,j;
public:
base(){
cout<<"default constructor base"<<endl;
}
~base(){
cout<<"default destructor base"<<endl;
}
	


};

class derived : public base{
int k;
public:
	derived(){
		cout<<"default constructor derived"<<endl;
		}
	~derived(){
		cout<<"default destructor derived"<<endl;
		}
	derived(int x){
		cout<<"parmaetrised derived"<<endl;
		}
	

	
};




int main(){
base b;
derived ob1;

derived ob2(3);

//ob2.showj();



return 0;
}

