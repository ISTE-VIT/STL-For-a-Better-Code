#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map <char,int> arr;
    string s = "ISTE-VIT";
    map <char,int>::iterator it;
    for(int i=0; i<s.length(); ++i){
        arr[s[i]]++;
    }
    for (it = arr.begin(); it != arr.end(); it++){
        cout<<"The character '"<<it->first<<"' has occurred "<<it->second<<" times";
        cout<<endl;
    }
}