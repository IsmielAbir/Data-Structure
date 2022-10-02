#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string s1;


    cin>>s>>s1;

    //sub-string
    
    cout<<s.substr(2,5)<<endl;

     //find from frist
    
    cout<<s.find('a')<<endl;
    
    //find from last
    cout<<s.rfind('b')<<endl;


    //front function
    cout<<s.front()<<endl;


    //back function
    cout<<s.back()<<endl;
    
    //insertion
    s.insert(1, "sh");
    cout<<s<<endl;


    //delete/erase
    s.erase(2,2);
    cout<<s<<endl;
    
    //push_back function
    s.push_back('h');
    cout<<s<<endl;


    //pop_back function
    s.pop_back();
    cout<<s<<endl;


    //append function
    s.append(s1);
    cout<<s<<endl;
    
    //swap
    swap(s,s1);
    cout<<s<<" "<<s1<<endl;
    

    return 0;
}