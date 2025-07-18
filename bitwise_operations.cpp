/* vinay_133*/
#include<iostream>
using namespace std;  
int main(){
    int a,b;
    cout<<"enter the value for a:";
    cin>>a;
    cout<<"enter the value for b:";
    cin>>b;
    int bitwise_and=a&b;
    cout<<"and"<<bitwise_and<<endl;
    int bitwise_or=a|b;
    cout<<"or"<<bitwise_or<<endl;
    int bitwise_xor=a^b;
    cout<<"xor"<<bitwise_xor<<endl;
    int bitwise_not=~a;
    cout<<"not"<<bitwise_not<<endl;
    int lift_shift=a<<2;
    cout<<"lift_shif"<<lift_shift<<endl;
    int write_shift=a>>1;
    cout<<"write_shift"<<write_shift<<endl;
    return 0;

}
/*enter the value for a:4
enter the value for b:7
and4
or7
xor3
not-5
lift_shif16
write_shift2*?
