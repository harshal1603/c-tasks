#include<iostream>
using namespace std;

class divide{
private:
	int *x;
	int *y;
public:
divide(){
x=new int();
y=new int();
cout<<"enter two numbers:";
cin>>*x>>*y;
try{
if(*y==0){
throw *x;
}
}


catch(int){
delete x;
delete y;
cout<<"second number cannot be zero!"<<endl;
throw;

}
}
~divide(){
cout<<"x";
try{
delete x;delete y;
}
catch(...){
cout<<"error while deallocating memory"<<endl;
}
}
float division(){

return (float)*x / *y;
}

};

int main(){
try{
divide d;
float res=d.division();
cout<<"result of division is: "<<res<<endl;
}

catch(...){
cout<<"unknown exception"<<endl;
}


return 0;
}

