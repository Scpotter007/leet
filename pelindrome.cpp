#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
        string str;
        string chk;
        string temp;
        for(char c:s){
        str+=tolower(c);
        }
        int n= str.size();
        for(int i=0; i<n; i++){
            if((str[i]>='a' && str[i]<='z')&&(str[i]>='0' && str[i]<='9')){
                chk+=str[i];
            }
        }
        temp=chk;
        reverse(chk.begin(), chk.end());
        cout<<chk<<endl<<temp<<endl;
}
