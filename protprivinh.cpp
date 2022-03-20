#include<iostream>
using namespace std;

class a{
private:
int x=1;
public:
int y;
void set(int w){
y=w;
}
	//int y=2;
void display1(){
cout<<"inside a"<<x<<y<<z<<endl;
}
protected :
int z=3;
};

class b : public a{
public:
void display2(){
cout<<"inside b"<<y<<z<<endl;
}

};

class c : public b{
public:
void display3(){
cout<<"inside c"<<y<<z<<endl;
}

};

int main(){
int w;
cin>>w;
a a1;
a1.set(w);
b b1;
c c1;
a1.display1();
b1.display2();
c1.display3();


return 0;
}









