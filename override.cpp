#include<iostream>
using namespace std;
class abc{
public:
void display(){
cout<<"this is parent class"<<endl;

}
};

class xyz : public abc{

public:
void display(){
	cout<<"this is child"<<endl;
}
};





int main(){

xyz x;
abc a;
x.display();

return 0;
}
