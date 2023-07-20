#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
stack<char>st;
          for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if(c=='(' || c=='{' || c=='['  ){
        st.push(c);
        }
        else{
            if(st.empty()){
            cout<<"false";
        }
          
        char top=st.top();
        if((c=='(' && top!=')')||(c=='{' && top!='}') ||(c=='[' && top!=']')) {
            cout<<" false";
        }
        st.pop();
       
        }

    }
    cout<<"true";
    }




