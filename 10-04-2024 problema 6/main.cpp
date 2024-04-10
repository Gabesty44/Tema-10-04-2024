#include <iostream>

using namespace std;

int main()
{
    int n,i,v[1001],v1[1001],j,maxim,maxim2,pozMaxim,pozMaxim2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        v1[i]=v[i];
    }
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(v1[i]<v1[j])
                swap(v1[i],v1[j]);
    maxim=v1[1];
    maxim2=v1[2];
   // cout<<maxim<<" "<<maxim2;
    for(i=1;i<=n;i++)
    {
        if(maxim==v[i])
            pozMaxim=i;
        if(maxim2==v[i])
            pozMaxim2=i;
    }
    cout<<"Telefonul dorit de Andrei se afla pe pozitia "<<pozMaxim<<endl;
    cout<<"Telefonul primit de Andrei se afla pe pozitia "<<pozMaxim2;
    return 0;
}
