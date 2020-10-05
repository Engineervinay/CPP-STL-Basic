#include<bits/stdc++.h>

using namespace std;
int main()
{
    //set can be any type of data use iterator while traversing, 
    //all elements of the set are unique set removes duplicate and sorts them 
     
    set<int> s;
    int a[]={1,3,4,5,56,43,34};
    //inseriting element into set for demo
    for(int i=0;i<7;i++)
    {
        s.insert(a[i]);
    }
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;

    }


    //find :if elemnt not found it returns last element
    if(s.find(56)==s.end())
    {
        cout<<"element not found "<<endl;

    }
    else
    {
        cout<<"element found"<<endl;
    }
    
    
    
    return 0;
    
    
}