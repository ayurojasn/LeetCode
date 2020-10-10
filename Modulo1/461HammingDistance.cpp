#include <bits/stdc++.h>
using namespace std;

int main(){

  int x,y,res, cont=0;
  cin>>x;
  cin>>y;
  res=x^y;

  while(res!=0){
    res&=(res-1);
    cont++;
  }

  cout<<cont;

  return 0; 
}
