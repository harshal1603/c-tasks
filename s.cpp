#include<iostream>
using namespace std;

class student{
public:
int rollno;
void set(int w){
rollno=w;
}
	
void display1(){
cout<<"inside a"<<rollno<<endl;
}

};

class mark{
public:
int m1,m2,m3,m4,m5;
void set2(int a1,int a2,int a3,int a4,int a5){
m1=a1;
}
void display2(){
cout<<"inside b"<<endl;
}

};

class c : public student{
public:
void display3(){
cout<<"inside c"<<rollno<<endl;
}

};

int main(){
int w;
cin>>w;
student a1;
a1.set(w);
mark b1;
c c1;
a1.display1();
b1.display2();
c1.display3();


return 0;
}









