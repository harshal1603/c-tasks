#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
class student{
int rollno;char name[25]; float marks;

void getdata(){
cout<<"enter rollno and name"<<endl;
cin>>rollno>>name;
cout<<"marks"<<endl;
cin>>marks;
}

public: 
student stu[20];
void addrecord(int i){
fstream f; 
f.open("s2.txt",ios::app);
stu[i].getdata();
f.write((char*)&stu,sizeof(stu));

f.close();
}

void display(int count){
fstream f;
int i=0;
f.open("s2.txt",ios::in|ios::binary);
f.read((char*)&stu,sizeof(stu));
while(i<count){
cout<<" roll no "<<stu[i].rollno<<" name "<<stu[i].name<<" marks: "<<stu[i].marks<<endl;
i++;
}
f.close();




}

};

int main(){
fstream myfile;
student s[20];
char ch;
char buf;
int c=0;
char str;
int j=0;
int index=0;
int count=0;
//myfile.open("studentrecord.txt",ios::in);
do{
s[c].addrecord(c);
cout<<"want to add more?(y/n)"<<endl;
c++;
index++;
//cin>>buf;
//ch=getchar();
cin>>ch;
}
while(ch=='y' || ch=='Y');
cout<<"updated!!!"<<endl;

cout<<c;

s.display(index);

return 0;
}
