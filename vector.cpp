#include<iostream>
#include<vector> 
using namespace std;
int main(){
    vector <int> arr;
    for (int i=0; i<5; ++i){
        arr.push_back(i*i);
    }
    cout<<"Printing using index : ";
    for (int i=0; i<5; ++i){
        cout<<arr[i]<<" | ";
    }
    cout<<endl;
    cout<<"Printing using at() : ";
    for (int i=0; i<5; ++i){
        cout<<arr.at(i)<<" | ";
    }
    cout<<endl;
    cout<<"usiing the size() method : ";
    for (int i=0; i<arr.size(); ++i){
        cout<<arr.at(i)<<" | ";
    }
    cout<<endl;
    cout<<"accessing elements using iterator : ";
    vector <int>:: iterator it;
    for(it = arr.begin(); it!= arr.end(); ++it){
        cout<<*it<<" | ";
    }



}