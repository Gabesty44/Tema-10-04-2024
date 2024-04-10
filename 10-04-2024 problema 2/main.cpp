#include <iostream>

using namespace std;

int main()
{
    int k=0,statie,n,aglomeratie,i,urcat=0,coborat=0,u[1001],c[1001];
    bool aglomerat=false;
    cin>>n>>statie>>aglomeratie;
    for(i=1;i<=n;i++)
    {
        k++;
        cin>>u[i]>>c[i];
        urcat+=u[i];
        coborat+=c[i];
        if(k==statie && (urcat-coborat)>=aglomeratie)
            aglomerat=true;
    }
    cout<<"Au urcat "<<urcat<<" de persoane"<<endl;
    cout<<"Au coborat "<<coborat<<" de persoane"<<endl;
    cout<<"La finalul traseului au mai ramas "<<urcat-coborat<<" persoane"<<endl;
    if(aglomerat)
        cout<<"Autobuzul este aglomerat";
    else
        cout<<"Autobuzul nu este aglomerat";
    return 0;
}
