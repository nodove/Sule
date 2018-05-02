#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open ("Duom.txt");

    int sk[100], suma=0, k=0, t=0;
    while (fin>>sk[k]){
    suma=suma+sk[k];
        k++;
    }

    fin.close();

    for(int i=0; i<=k; i++)
            if (sk[i]==suma)
                t++;
    if (t>0)
        cout << "Yra";
    else
        cout << "Nera";


    return 0;
}
