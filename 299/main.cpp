#include <bits/stdc++.h>
using namespace std;
ifstream fin("sumesecv.in");ofstream fout("sumesecv.out");
int n,v[105],k;
struct indice
{
    int x,y;
}ind[105];
int suma(int i,int j)
{
    int s=0;
    for(int a=i;a<=j;a++)
        s+=v[a];
    return s;
}
int main()
{
    fin>>n;
    for(int i=1;i<=n;i++)
        fin>>v[i];
    fin>>k;
    for(int i=1;i<=k;i++)
    {
        fin>>ind[i].x>>ind[i].y;
        fout<<suma(ind[i].x,ind[i].y)<<" ";
    }
    return 0;
}
