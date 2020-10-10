#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin>>word;

    for (int i=0; i<word[i]; i++){
        if(word[i]>='A' && word[i]<='Z'){
            word[i]+=32;
        }
    }

    cout<<word;

    return 0;
}
