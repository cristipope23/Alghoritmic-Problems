#include <bits/stdc++.h>

using namespace std;
int n,sol=1,k;
int main()
{
    cin>>n>>k;
    int x,nr=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2!=0)
            nr++;
        if(nr>k){
            sol++;
            nr=1;
        }
    }
    cout<<sol;
    return 0;
}
