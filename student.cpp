#include<iostream>
#include<string>
using namespace std;

class student{

public:
	int rollno;
	char name[10];

void setdata1(int r,char n[10]){
rollno=r;
for(int j=0;j<10;j++){
name[j]=n[j];
}
}

};

class mark{

public:
	int m1,m2,m3,m4,m5;
	void set(){
		cout<<"Enter marks"<<endl;
		cin>>m1>>m2>>m3>>m4>>m5;
		}
	
};

class result : public mark,public student{
public:
	int total=0;
	int percentage=0;;
	void t(){
	//cout<<rollno;
	cout<<"d"<<m1<<m2<<endl;
	total=m1+m2+m3+m4+m5;
	//cout<<total;
	
	}
	void p(){
	percentage=(total/500)*100;
		}

};

int main(){
int r;
int a1=0,a2=0,a3=0,a4=0,a5=0;
char n[10];
student s1;

//result r1;
cout<<"Enter name and roll no"<<endl;
cin>>n;
cin>>r;

s1.setdata1(r,n);
result r1;
r1.set();

r1.t();
r1.p();
cout<<"Percentage="<<r1.percentage<<"Total marks="<<r1.total<<endl;

return 0;
}
