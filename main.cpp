#include <iostream>
#include <iomanip>      // para el formateo de la salida
#include "fdt.h"

using namespace std;

int main() {
    double plantaNum[]={0,0.09508,-0.09045};
    double plantaDen[]={1,-1.851,0.86074};
    Vector num(plantaNum,3);
    Vector den(plantaDen,3);

    Fdt planta(num,den);

    double yk=0;
    double xk=1;

    cout<<std::fixed;
    for (int i= 0 ; i <20; i++)    {
        yk=planta.obtenerSalidaFdt(xk);
        cout<<setw(4)<<i<< setprecision(1)<< setw(5)<< xk<< setprecision(6)<< setw(12)<<yk<<endl;
    }
}
