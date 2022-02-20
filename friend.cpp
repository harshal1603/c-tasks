//friend function code
#include<iostream>
#include<ctime>
//#include<cstdlib>
#include<unistd.h>
using namespace std;
//first class
class class1;       //forward declaration

//second class
class class2{
	private: 
		int x2,y2,z2;
	public:
	void set(int a,int b,int c){
		x2=a;
		y2=b;
		z2=c;
		}
	//friend function member of another function
	friend void add(class1 a,class2 c);




};
class class1{
	private:
		int x1,y1,z1;
	public:
		void set(int a,int b,int c){
			x1=a;
			y1=b;
			z1=c;
			}
		
		friend void test(class1 t);
		friend void add(class1 a,class2 c); 



};

//friend function definition
void test(class1 t){
cout<<"friend function\n";
cout<<t.x1;
}

//friend function declaration
void add(class1 a,class2 c)
{
cout<<"\nfriend function of class2 member function of class1\n";
cout<<a.x1+c.x2<<"\n";


		}
	


int main(){
class1 a;
class2 b;
a.set(1,2,3);
b.set(4,5,6);
test(a);
add(a,b);

return 0;
}
