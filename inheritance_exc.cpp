#include<iostream>
using namespace std;
class base{};
class derived:public base{};
int main()
{
try{
derived d;
throw d;
}

catch(derived d){
cout<<"derived object caught"<<endl;
}

catch(base b){
cout<<"base object caught"<<endl;
}






return 0;
}
