#include<iostream>
using namespace std;

class a{
public:
int i;
};

class b : virtual public a{
public:
int j;

};

class c : public virtual a{
public:
int k;

};

class d : public b,public c{
public:
int sum;

};

int main(){
d d1;
a a1;
b b1;
a1.k=0;
b1.i=0;
d1.i=10;
d1.j=20;
d1.k=30;
d1.sum=d1.i+d1.j+d1.k;
cout<<"sum="<<d1.sum<<endl;
return 0;
}

