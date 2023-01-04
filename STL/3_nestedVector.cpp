#include <bits/stdc++.h>
using namespace std;

void nestedVector(vector<pair<int,int>>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main(){

    vector<pair<int, int>> v;
    v= {{1,2},{36,36}};
    nestedVector(v);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    nestedVector(v);

    return 0;

}