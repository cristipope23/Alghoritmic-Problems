#include <iostream>
#include<fstream>
#include<algorithm>
#include<numeric>
using namespace std;

ifstream fin("summax.in");
ofstream fout("summax.out");

int n,mat[11][11],v[100],max1=-1;


void Read()
{
    fin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>>mat[i][j];
}

bool valid(int k)
{
    for(int i=1;i<k;i++)
        if(v[i]==v[k])
            return false;
    return true;
}

int suma(int k)
{
    int s=0;
    for(int i=1;i<=k;i++)
        s+=mat[i][v[i]];
    return s;
}

void back(int k)
{
    for(int i=1;i<=n;i++)
    {
        v[k]=i;
        if(valid(k))
        {
            if(k==n)
            {
                if(suma(k)>max1)
                    max1=suma(k);
            }
            else
                back(k+1);
        }
    }
}

int main()
{
    Read();
    back(1);
    fout<<max1;
    return 0;
}
