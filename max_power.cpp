#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int j=0;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]-'0'==1) break;
        j++;
    }
    cout<<j<<endl;
    return 0;
}