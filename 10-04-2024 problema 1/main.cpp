#include <iostream>

using namespace std;

int main()
{
    int n,v[1001],i,c,suma=0;
    cin>>n>>c;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        suma+=v[i];
    }
    if((c%suma)==0)
        cout<<suma/c;
    else
        cout<<suma/c+1;
    return 0;
}
