#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open ("Duom.txt");

    int sk[100], k=0;
    while (fin>>sk[k]){
        k++;
    }

    fin.close();

    ofstream fout;
    fout.open("Result.txt");

    int  msk=sk[0], dsk=sk[0], dvt=0, mvt=0;

    for(int i=0; i<=k; i++){
            if (sk[i]<msk){
                msk=sk[i];
                mvt=i;
            }
            if (sk[i]>dsk){
                dsk=sk[i];
                dvt=i;
            }
    }
    sk[dvt]=msk;
    sk[mvt]=dsk;

    for (int j=0; j<k; j++)
        fout << sk[j] << " ";
    fout.close ();
    return 0;
}
