#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int>M;

    M[2]=3;
    M[3]=9;
    M.insert(make_pair(1,4));
    cout<<"Key | Value"<<endl;
    for(auto i:M){
        cout<<i.first<<" | "<<i.second<<endl;
    }

    

    return 0;
}