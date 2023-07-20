#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a;
 vector<int> nums;
for(int i=0; i<a; i++){
    cin>>b;
    nums.push_back(b);
}
for(int i=0; i<a; i++){
string str=to_string(nums[i]);
int s=str[i]+str[i+1];
int r=str[i+1]+str[i];
if(r>s){
    swap(str[i],str[i+1]);
}

}

}