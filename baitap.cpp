#include<bits/stdc++.h>
using namespace std;
int a[1000005], n;
main(){
    int t,i; cin >> t;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        for(i=0;i<n;i++) cout << a[i] << " ";
        cout << endl;
    }
}
