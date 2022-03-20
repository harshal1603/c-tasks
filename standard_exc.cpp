#include<iostream>
#include<exception>
using namespace std;
int main(){

try{
int* myarray=new int[1999999999990000];  //bad_alloc exception


}
catch(exception &e){
cout<<"std exception"<<e.what()<<endl;
}



return 0;
}
