#include<iostream>
using namespace std;

class student{
int marks;
//char name;
public:
	student(){
	cout<<"default student contructor"<<endl;	
		}
	//int rollno;
	student(int x){
	//rollno=20;
	marks=x;
}
int getdata(){
cout<<"inside base class"<<endl;
return marks;
}

};

class derived : public student{
public:
derived(){
cout<<"inside derived"<<endl;
}
void dummy(){
cout<<"inside derived";

}
};


int main(){
student d[3]={55,66,77};
derived m;
student *ptr=&d[0];
derived *ptr1=&m;
for(int i=0;i<3;i++){
cout<<ptr->getdata()<<endl;
ptr++;
}
cout<<ptr1->getdata()<<endl;

return 0;
}

