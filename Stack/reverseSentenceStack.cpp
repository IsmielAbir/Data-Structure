#include<bits/stdc++.h>
#include"Stack.h"

using namespace std;

void reveseSentence (string chk){

    Stack <string> st;

    for(int i =0; i<chk.length(); i++){
        string word = "";
        while(i<chk.length() && chk[i]!= ' '){
            word+=chk[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout << st.Top() << " " ;
        st.pop();
    }

}

int main(){

    string s = "Hi! I am AB";
    reveseSentence(s);


    return 0;
}