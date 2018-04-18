#include <iostream>
#include <fstream>
using namespace std;

int main()

{
   ifstream fin;
   fin.open ("duom.txt");
   int m[10], k=0, t=0;
   while (fin>>m[k])
    k++;
   fin.close();
   for (int a=0; a,k-1; a++)
    for (int i=t+1; i<k; i++)
        if (sk[i]<sk[t])
        t=i;
    int ks=sk[0];
    sk[0]=sk[t];
    sk[t]=ks;

                    }
    return 0;
}
