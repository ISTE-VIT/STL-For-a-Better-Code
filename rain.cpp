#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr(n),main(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        main[i] = arr[i];
    }
    int ans = 0;
    for(int i=1;i<n-1;i++){
        sort(arr.begin(),arr.begin()+i,greater<int>());
        int left_max = arr[0];
        sort(arr.begin()+i+1,arr.end());
        int right_max = arr[n-1];
        int minimum = min(left_max,right_max);
        int height = minimum - main[i];
        if(height>0){
            ans += height;
        }
        arr = main;
        
    }
    cout<<ans;
}