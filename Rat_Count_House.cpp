// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int r;
    int unit;
    int n;
    cin>>r;
    cin>>unit;
    cin>>n;
    if(n==0){
        cout<<-1;
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int totalfood=r*unit;
    int i=0;
    int foodcount=0;
    while(i<n){
        if(foodcount<totalfood){
        foodcount+=arr[i];
        i++;
        }else{
            break;
        }
    }
    if(i<=n){
        cout<<i;
    }
    if(i==n&&foodcount<totalfood){
        cout<<0;
    }
    return 0;
}