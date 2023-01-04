#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, int> p;
    p=make_pair(10,12);
    //or
    p={10,25};
    //or
    pair<int, string>c;
    c=make_pair(12, "abs");
    cout<<c.first<<" "<<c.second<<endl;

    int n;
    cin>>n;
    while(n--){
        pair<int, int>g;
        cin>>g.first>>g.second;
        cout<<g.second<<" "<<g.first<<endl;
    }

    return 0;
}