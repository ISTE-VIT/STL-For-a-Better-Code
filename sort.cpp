#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[] = {10,45,37,23,80};
    sort(arr,arr+5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" | ";
    }
    cout<<endl;
    sort(arr,arr+5,greater<int>());
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" | ";
    }
}