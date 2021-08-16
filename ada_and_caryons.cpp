#include <iostream>
#include <string>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int u=0, d=0;
        for(int i=0; i<s.size();){
            if(s[i]=='U') u++;
            else d++;
            char ch = s[i];
            while(s[i]==ch) i++;
        }
        cout<<min(u,d)<<endl;
    }
}