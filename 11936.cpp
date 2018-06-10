#include<iostream>
using namespace std;
int main ()
{
    int n,a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
         if(a+b<=c||b+c<=a||c+a<=b)
       {

           cout<<"Wrong!!"<<endl;
       }
       else{
           cout<<"OK"<<endl;
       }
       }


}
