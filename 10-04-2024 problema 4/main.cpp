#include <iostream>

using namespace std;

int main()
{
    int v[1000];
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++) cin>>v[i];
    if(v[1]>v[3]) {
        v[2]=999;
        v[3]=999;
    } else {
    v[1]=999;
    v[2]=999;
    }
    for(i=1;i<=n;i++) {
        if(v[i]<10) cout<<v[i];
    }
    return 0;
}
