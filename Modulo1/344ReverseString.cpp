#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> s;
    char s1;

    for(int i=0;i<6;i++){
          cin>>s1;
          s.push_back(s1);
    }

    char *start, *endi;
    start = *s;

    for(int i=0;i<s.size();i++)
      cout<<s[i];


    return 0;
}
