#include "fdt.h"

Fdt::Fdt (Vector &num, Vector &den)   : num_(num),
    den_(den), vectorXk_(num),  vectorYk_(den)
{
    vectorXk_.setValueInitial(0.0);
    vectorYk_.setValueInitial(0.0);
    factorInitial = den_.getPosValue(0);
}

Fdt::~Fdt() {
}


double Fdt::obtenerSalidaFdt(double xk_p) {
    double salida;
    // Comentarios que se deben borar para la corrección
    //    vectorYk_.shiftVector();
    //    vectorXk_.shiftVector();
    vectorXk_.setPosValue(0,xk_p);
    salida= (vectorXk_.productoEscalar(num_)- vectorYk_.productoEscalar(den_)) /factorInitial;
    vectorYk_.setPosValue(0,salida);
    return (salida) ;
}
