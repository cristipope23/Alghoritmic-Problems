#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
ifstream fin("sumsec.in");ofstream fout("sumsec.out");
int n,v[maxn];
bool prim(int n)
{
    if(n<2)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    fin>>n;
    int st,dr;
    for(int i=1;i<=n;i++)
        fin>>v[i];
    for(int i=1;i<=n;i++)
        if(prim(v[i])){
            st=i;break;
        }
    for(int i=n;i>=1;i--)
        if(prim(v[i])){
            dr=i;break;
        }
    long long s=0;
    for(int i=st;i<=dr;i++)
        s+=v[i];
    fout<<s;
    return 0;
}
