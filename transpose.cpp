#include<iostream>
using namespace std;
int main(){
 int arr[2][3]={1,2,3,4,5,6};
 
 for(int j=0;j<=3;j++){
    for(int i=0;i<=2;i++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
 }
    return 0;
}