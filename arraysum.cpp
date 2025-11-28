#include<iostream>
using namespace std;
int main() {
    int sum=0;
    int arr[5]={3,4,5,6,7};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"";
    }
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<"sum of elements is :"<<sum;
    return 0;

}