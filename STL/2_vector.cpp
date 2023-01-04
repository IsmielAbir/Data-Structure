#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        v.push_back(a);
        
    }
    printVector(v);
    return 0;
}