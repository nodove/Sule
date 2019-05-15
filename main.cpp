#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    int grybautsk, kart, barav, raudon, lep, bsum=0, rsum=0, lsum=0,grybsum;
    char vard[15];
    ifstream fin;
    fin.open("U2.txt");
    fin >> grybautsk;
    for (int i=0; i<grybautsk; i++){
        fin>> vard >> kart;
        bsum=0;
        rsum=0;
        lsum=0;
        for (int a=0; a<kart; a++){
            fin >> barav >> raudon >> lep;
            bsum=bsum+barav;
            rsum=rsum+raudon;
            lsum=lsum+lep;
            grybsum=bsum+rsum+lsum;
        }
        cout <<setw(15)<<left<< vard <<" "<< bsum <<" "<< rsum <<" "<< lsum <<" Suma:"<< grybsum << endl;
    }
    return 0;
}
