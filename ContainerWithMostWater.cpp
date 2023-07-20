#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    vector<int> height;
    
    for (int i = 0; i < a; i++) {
        cin >> b;
        height.push_back(b);
    }

    int r = 0;
    int i=0,j=a-1;
    for (int i = 0; i < a; i++) {
       int h=min(height[i],height[j]);
       int b=j-i;
       int area=b*h;
       r=max(area,r);
    if(height[i]<height[j]){
        i++;
    }
    else{
        j--;
    }
    }
    
    cout << r;
}
