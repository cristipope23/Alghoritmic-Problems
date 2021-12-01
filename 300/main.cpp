#include <bits/stdc++.h>
using namespace std;
ifstream fin("sumainsecv.in");ofstream fout("sumainsecv.out");
int n,S,v[105];
int main()
{
    fin>>n>>S;
    for(int i=1;i<=n;i++)
        fin>>v[i];
    for(int i=1;i<=n;i++)
    {
        if(v[i]==S)
        {
            fout<<i<<" "<<i;
            return 0;
        }
    }
    int st,dr,s=0,Start,End;
    for(int i=1;i<=n;i++)
    {
        st=dr=i;
        s=v[i];
        for(int j=i+1;j<=n;j++)
        {
            s+=v[j];
            dr=j;
            if(s>S){
                s-=v[j-1];
                dr--;
                break;
            }
            else if(s==S)
            {
                fout<<st<<" "<<dr;
                return 0;
            }

        }
    }
    fout<<"0 0";
    return 0;
}
