/********************************************************************************
* @author: Starry Sky
* @email: xiaoyuesun915@gmail.com
* @creationDate: 2024/10/26 下午3:58
* @version: 1.0
* @description: 
********************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k=1;
    cin>>n;
    while (n>k) {
        n=n-k;
        k++;
    }
    if(k%2==0) cout<<n<<"/"<<(k+1-n);
    else cout<<k+1-n<<"/"<<n;
    return 0;
}