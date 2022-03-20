#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream fin,fout;
fin.open("file.txt");
fout.open("filee.txt",ios::app);
char ch;
string str;
while(!fin.eof()){
fin.get(ch);
fout<<ch;
}

/*while(fin>>str){
fin.get(ch);
fout<<ch;

}*/

/*while(getline(fin,str)){
fin.get(ch);
fout<<ch;

}*/

cout<<"copy done ! "<<endl;
fin.close();
fout.close();
return 0;
}
