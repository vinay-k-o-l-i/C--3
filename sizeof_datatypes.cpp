#include<iostream>
#include<string>
using namespace std;
int main(){

    int a;
    cout<<"ente the value for a:";
    cin>>a;
    cout<<"size of a:"<<sizeof(a)<<"in bites:";

    float b;
    cout<<"enter the value for b :";
    cin>>b;
    cout<<"size of b:"<<sizeof(b)<<"in bites:";

    char c;
    cout<<"enter the value  for c:";
    cin>>c;
    cout<<"size of c:"<<sizeof(c)<<"in bites:";
    
    double d;
    cout<<"enter the value for d:";
    cin>>d;
    cout<<"size of d:"<<sizeof(d)<<"in bites:";

    bool f;
    cout<<"enter the value for f :";
    cin>>f;
    cout<<"size of f:"<<sizeof(f)<<"in bites:";

    string g;
    cout<<"enter the value for g:";
    cin>>g;
    cout<<"size of g:"<<sizeof(g)<<"in bites:";

}
/*ente the value for a:2
size of a:4in bites:enter the value for b :3.2
size of b:4in bites:enter the value  for c:c
size of c:1in bites:enter the value for d:22
size of d:8in bites:enter the value for f :f
size of f:1in bites:enter the value for g:size of g:24in bites:*/
