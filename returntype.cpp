#include<iostream>
using namespace std;
template<typename T,typename W>

auto add(T t,W w)->decltype(t+w){
cout<<"in the functions: "<<t+w<<endl;
return t+w;

}

int main(){
auto c=0;
c=add(1,'A');
c=add(3,5);
c=add(3,3.5);






return 0;
}
