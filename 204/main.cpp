#include <iostream>
#include<fstream>
using namespace std;

ifstream fin("siruri.in");
ofstream fout("siruri.out");

int n,p,v[20];

void afisare()
{
    for(int i=1;i<=p;i++)
        fout<<v[i]<<" ";
    fout<<"\n";
}

bool valid(int k)
{
    for(int i=1;i<k;i++)
        if(v[i]==v[k])
            return false;
    for(int i=1;i<k;i++)
        if(abs(v[i]-v[i+1])>2)
            return false;
    return true;
}

void back(int k)
{
    if(k>p)
    {
        afisare();
        return;
    }
    for(int i=v[k-1]+1;i<=n;i++)
    {
        v[k]=i;
        if(valid(k))
            back(k+1);
    }
}

int main()
{
    fin>>n>>p;
    v[0]=0;
    back(1);
    return 0;
}
