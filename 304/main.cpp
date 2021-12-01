#include <bits/stdc++.h>
using namespace std;
ifstream fin("secvente.in");ofstream fout("secvente.out");
int n,v[1005],rez;
int main()
{
    fin>>n;
    for(int i=1;i<=n;i++)fin>>v[i];
    for(int i=1;i<=n;i++)
        if(v[i]>v[i+1])
            rez++;
    fout<<rez;
    return 0;
}
