#include<iostream>
#include<utility>
using namespace std;
int main()
{
    //pair
    pair<int,char> p;
    p=make_pair(1,'a');
    pair<int,char> p1(2,'b');
    cout<<p.first << "  "<< p.second <<endl;
    cout<<p1.first << "  "<< p1.second <<endl;
    return 0;
    
    
}