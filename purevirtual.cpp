#include<iostream>
using namespace std;

class shape{
protected:
float x;
public:
void getdata(){
cin>>x;
}
virtual float calcarea()=0;
};

class square : public shape{
public:
float calcarea(){
return x*x;
}

};

class circle : public shape{
public:
float calcarea(){
return 3.14*x*x;
}

};

int main(){
square s;
circle c;
cout<<"enter length to calulate area of square"<<endl;
s.getdata();
cout<<"area of square "<<s.calcarea()<<endl;
cout<<"enter radius to calulate area of circle"<<endl;
c.getdata();
cout<<"area of circle "<<c.calcarea()<<endl;



return 0;
}
