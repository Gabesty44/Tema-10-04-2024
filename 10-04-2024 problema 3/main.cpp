#include <iostream>

using namespace std;

int main()
{
    int c1,c2,c3,n,i,x=0,y=0;
    cin>>n>>c1>>c2>>c3;
    for(i=1;i<=n;i++)
    {
        if(i%c1!=0 && i%c2!=0)
            x++;
        if(i%c1!=0 && i%c2!=0 && i%c3!=0)
            y++;
    }
    cout<<x<<" numere nu sunt divizibile nici cu "<<c1<<", nici cu "<<c2<<endl;
    cout<<y<<" numere nu sunt divizibile nici cu "<<c1<<", nici cu "<<c2<<", nici cu "<<c3;
    return 0;
}
