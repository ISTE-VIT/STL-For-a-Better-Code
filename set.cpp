#include<iostream>
#include<set>
using namespace std;
int main(){
    set <int> arr;
    arr.insert(1);
    arr.insert(1);arr.insert(2);arr.insert(3);arr.insert(2);arr.insert(4);
    set <int>:: iterator it;
    for(it = arr.begin(); it != arr.end(); ++it){
        cout<<*it<<" | ";
    }
}