#include<iostream>
using namespace std;

class a{
public:
void displaya(){
cout<<"class a\n";
}
int i;
};

class b{
public:
void displayb(){
cout<<"class b\n";
}
int j;
};

class c : public a{
public:
void displayc(){
cout<<"class c\n";
}
int k;

};

class d : public b{
public:
void displayd(){
cout<<"class d\n";
}
int l;

};

class e : public c,public d{
public:
void displaye(){
cout<<"class e\n";
}
int m;

};

class f : public e{
public:
void displayf(){
cout<<"class f\n";
}
int n;

};

int main(){
a a1;
b b1;
c c1;
d d1;
e e1;
f f1;
a1.displaya();
//b1.displaya();
//b1.displayc();
//b1.displayd();

e1.displaya();
//e1.displayb();
//e1.displayc();

//f1.displaya();
//f1.displayb();
//f1.displayc();
//f1.displaye();



return 0;
}

