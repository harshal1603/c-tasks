#include<iostream>
using namespace std;
 class measure{
	public:
		int h;
		int w;
		int l;
		void setinput(int a,int b,int c){

			l=a;
			h=b;
			w=c;
			}

		float area(){
			return l*w;
			}

		float volume(measure m1,measure m2){
			return m1.h+m2.h;
			}
		

};



int main(){
 
measure m1;
measure m2;
measure m3;
int op;
int le,he,wi;
float a,v;
cout<<"enter length height and width"<<"\n";
cin>>le;
cin>>he;
cin>>wi;
m1.setinput(le,he,wi);
//a=m1.area();
//cout<<"area is "<<a<<"\n";
m1.setinput(le,he,wi);
//v=m1.volume();
//cout<<"volume is "<<v<<"\n";

cout<<"enter length height and width";
cin>>le;
cin>>he;
cin>>wi;

m2.setinput(le,he,wi);
//a=m2.area();
//cout<<"area is "<<a<<"\n";
m2.setinput(le,he,wi);
//v=m2.volume();
//cout<<"volume is "<<v<<"\n";
 int sa;
 m3.setinput(3,2,4);
 cout<<"Passed objects as arguement"<<m3.volume(m1,m2);

return 0;
}















