#include<iostream>
using namespace std;
int main(){
 int arr[3][3]={1,2,3,4,5,6,7,8,9};
 int sum=0;
 for(int i=1;i<=4;i++){
    for(int j=1;j<=2;j++){
        sum+=arr[i][j];
    }
 }
 cout<<sum;

    return 0;
}