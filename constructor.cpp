//demo code for copy constructor

#include<iostream>
using namespace std;

class measure{
	public:
		int x,y;
		measure(){

		x=0;
		y=0;

			}
		measure(int a,int b){
		x=a;
		y=b;
			}
		measure(measure &cp){
		x=cp.x+5;
		y=cp.y+5;
		cout<<"inside copy constructor";
			}

};
int main(){
measure m1;
cout<<m1.x<<m1.y<<"\n";
measure m2(1,2);
cout<<m2.x<<m2.y<<"\n";
measure c(m2);
cout<<c.x<<c.y<<"\n";
}
