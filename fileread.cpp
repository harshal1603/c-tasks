#include<iostream>
#include<fstream>
using namespace std;
int main(){
int cnt=0;
fstream myfile;string str;
myfile.open("file.txt",ios::in);
//myfile.write("helllooo");
if(!myfile){
cout<<"the file cannot be opened\n"<<endl;
}
else{
/*
while(myfile>>str){
cnt++;
cout<<str <<" ";
}
cout<<endl;
cout<<"number of words "<<cnt<<endl;
*/
while(getline(myfile,str)){
cnt++;
cout<<str<<""<<endl;
}
cout<<"number of lines "<<cnt<<endl;



}

return 0;
}
