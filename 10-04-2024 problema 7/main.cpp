#include <iostream>

using namespace std;

int main()
{

    int n,x;
    cin>>n;
    while(n) {
        if(n%10==9) {
            x=x10+8;
            n/=10;
        } else {
        x=x10+n%10+1;
        n/=10;
        }
    }
    while(x) {
    n=n*10+x%10;
    x/=10;
    }
    cout<<n;
    return 0;
}
