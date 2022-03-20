#include<iostream>
#include<exception>
using namespace std;
class myexception : public exception{
public:
const char * what() const throw(){
return "attempt to divide by zero\n";
}


};

int main(){
try{
int x,y;
cout<<"enter two numbers"<<endl;
cin>>x>>y;
if(y==0){
myexception z;
throw z;
}
else
cout<<"x / y ="<<x/y<<endl;
}
catch(exception &e){
cout<<e.what();
}


return 0;
}
