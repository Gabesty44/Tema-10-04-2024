#include <iostream>

using namespace std;

int main()
{
    int i,n,m,p,k,cifre=0,cifre1,v[1001];
    cin>>n>>p>>k;
    m=n;
    while(m!=0)
    {
        cifre++;
        m/=10;
    }
    cifre1=cifre;
    while(n!=0)
    {
        v[cifre1]=n%10;
        n/=10;
        cifre1--;
    }
    for(i=p;i>=1;i--)
        cout<<v[i];
    for(i=p+1;i<=cifre-k;i++)
        cout<<v[i];
    for(i=cifre;i>cifre-k;i--)
        cout<<v[i];
    return 0;
}
