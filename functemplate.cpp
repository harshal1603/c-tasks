#include<iostream>
using namespace std;
template <class R,class T,class U>

R sum(T *n1,U *n2){
R *temp;
temp=n1+n2;
return temp;
}

int main(){
int a=10,b=20;
double x=2.2,y=2.5;
double r;
r=sum(a,x);
cout<<"result: "<<r;



return 0;
}
