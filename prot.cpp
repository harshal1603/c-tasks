#include<iostream>
using namespace std;

class abc{
public:
	void setprotmem(int i){
m_protmemb=i;
}
void protfun(){
cout<<m_protmemb<<endl;
}
protected:
int m_protmemb;
void protfunc(){
cout<<"access allowed\n";
}

};

class xyz : public abc{
public: void useprotfun(){
protfun();
}
};

int main(){
abc a;
xyz x;
a.m_protmemb;


return 0;
}
