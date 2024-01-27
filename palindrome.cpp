#include<iostream>
using namespace std;
int main(){
  int n,c,r,s=0;
  cout<<"enter the num:";
  cin>>n;
  c=n;
  while(n<0){
  r=n%10;
  s=r*(n/10);
  n=n/10;

  }
  if(s==n){
    cout<<"palindrome";
  }
  else
  cout<<"not palindrome";

    return 0;
}