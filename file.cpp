#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream myfile;
myfile.open("file.txt",ios::in);
//myfile.write("helllooo");
if(!myfile){
cout<<"the file cannot be opened\n"<<endl;
}
cout<<myfile.good()<<endl;
return 0;
}
