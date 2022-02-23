//demo code for operator overloading: +

#include<iostream>
using namespace std;

class Complex{

	int real,img;
	
	public:
		//default constructor
		Complex(){
		real=0;
		img=0;
				}

		//param constructor
		Complex(int x,int y){
		real=x;
		img=y;
		}

		//display func
		void display(){

		cout<<"real part: "<<real<<" imaginary part: "<<img<<endl;
		}

		//overload the operator
		/*
		Complex operator + (Complex obj){
		Complex temp;
		temp.real=real+obj.real;
		temp.img=img+obj.img;
		return temp;
		}
		*/

		//overload the operator
		Complex operator - (Complex obj){
		Complex temp;
		temp.real=real-obj.real;
		temp.img=img-obj.img;
		return temp;
		}

		//overload the operator
		Complex operator * (Complex obj){
		Complex temp;
		temp.real=real*obj.real;
		temp.img=img*obj.img;
		return temp;
		}

		//overload the operator
		Complex operator / (Complex obj){
		Complex temp;
		temp.real=real/obj.real;
		temp.img=img/obj.img;
		return temp;
		}

		//overload the operator
		Complex operator && (Complex obj){
		Complex temp;
		temp.real=real&&obj.real;
		temp.img=img&&obj.img;
		return temp;
		}

		//overload the operator
		Complex operator || (Complex obj){
		Complex temp;
		temp.real=real||obj.real;
		temp.img=img||obj.img;
		return temp;
		}

		//overload the operator
		int operator > (Complex obj){
		if(real>obj.real && img>obj.img){
		return 1;
		}
		else return 0;
		}

		//overload the operator
		void operator ! (){
		real=!real;
		img=!img;

		}

		//overload the operator declaration
		Complex operator - ();

		//overload the operator declaration
		Complex operator -- ();
		
		//overload the operator declaration
		Complex operator -- (int);
		
		

		//overload the operator declaration
		void operator ++ ();


		friend Complex operator + (Complex a,Complex b);

		};

		//friend function
		Complex operator + (Complex a,Complex b){
		Complex c;
		c.real=a.real+b.real;
		c.img=a.img+b.img;
		return c;

		}

		//unary operator overloading
		Complex Complex :: operator - (){
		Complex temp;
		temp.real=-real;
		temp.img=-img;
		return temp;
		}

		//unary operator overloading pre
		Complex Complex :: operator -- (){
		Complex temp;
		real--;
		img--;
		temp.real=real;
		temp.img=img;
		return temp;
		}

		//unary operator overloading post
		Complex Complex :: operator -- (int){
		Complex temp;
		temp.real=real--;
		temp.img=img--;
		return temp;
		}

		//unary operator overloading
		void Complex :: operator ++ (){
		real++;
		img++;
		}


int main(){
Complex c1(1,1),c2(10,50);
c1.display();
c2.display();

Complex c3;
c3=c1+c2;
c3.display();

c3=c1-c2;
c3.display();

c3=c1+c2-c3;
c3.display();

//logical operators

Complex l1(1,1),l2(1,0);

c3=l1&&l2;
c3.display();

c3=l1||l2;
c3.display();

-l1;
l1.display();

!l1;
l1.display();

Complex a(1,2);

cout<<"-"<<endl;
l1=-a;
l1.display();

cout<<"-"<<endl;
-a;
a.display();

cout<<"prefix --"<<endl;
l2=--a;
l2.display();

cout<<"postfix --"<<endl;
l2=a--;
l2.display();

cout<<"++"<<endl;
++a;
a.display();


int r;
r=l1>l2;
cout<<r;


return 0;
}






