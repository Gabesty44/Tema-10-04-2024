#include <iostream>

using namespace std;

int main()
{
    int i,n,sectiune,punctaj,p1,p2,s1=0,s2=0,maxim1=0,maxim2=0,k1=0,k2=0;
    cout<<"Introduceti numarul de concurenti: ";
    cin>>n;
    bool punctajNenul=true;
    for(i=1;i<=n;i++)
    {
        punctaj=0;
        cout<<"La ce sectiune s-a inscris concurentul "<<i<<"? ";
        cin>>sectiune;
        cout<<"Ce punctaj a obtinut la prima problema? Dar la a doua? ";
        cin>>p1>>p2;
        punctaj+=p1+p2;
        if(punctaj==0)
            punctajNenul=false;
        if(sectiune==1)
        {
            s1++;
            if(punctaj>=maxim1)
            {
                maxim1=punctaj;
                k1++;
            }
            else
                k1=1;
        }
        else
        {
            s2++;
            if(punctaj>=maxim2)
            {
                maxim2=punctaj;
                k2++;
            }
            else
                k2=1;
        }
    }
    if(punctajNenul)
        cout<<"DA"<<endl;
    else
        cout<< "NU"<<endl;
    cout<<1<<" "<<s1<<endl<<2<<" "<<s2<<endl;
    cout<<1<<" "<<maxim1<<" "<<k1<<endl<<2<<" "<<maxim2<<" "<<k2;
    return 0;
}
