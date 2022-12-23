#include <iostream>
using namespace std;

template <typename T> T myMax(T a, T b){
    return (a>b) ? a : b;
}

int main()
{
    cout<<myMax<int>(5,10)<<endl;
    cout<<myMax<float>(5.45, 5.95)<<endl;
    cout<<myMax<char>('a','s')<<endl;
    cout<<myMax<string>("ab", "su")<<endl;
    

    return 0;
}