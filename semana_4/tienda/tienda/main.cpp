//  clases tienda, producto y proveedor
//  Santiago Cacho Herrera A01255853
//  20/11/24

#include <iostream>
#include "tienda.h"
#include "producto.h"
#include "proveedor.h"

using namespace std;

int main() {
    // objeto de tienda
    Tienda tienda1("Walmart");
    cout<<"Objeto tienda creado:"<<endl;;
    tienda1.imprimir();
    cout<<endl;
    
    // objeto de producto
    Producto producto1("A1", "Coca-Cola", 50, 25.00);
    cout<<"Objeto producto creado:"<<endl;
    producto1.imprimir();
    cout<<endl;
    
    // objeto de proveedor
    Proveedor proveedor1("FEMSA", "Monterrey");
    cout<<"Objeto proveedor creado:"<<endl;
    proveedor1.imprimir();
    cout<<endl;
    
    // pruebas
    cout<<producto1.estaEnExistencia()<<endl;
    producto1.vender(50);
    cout<<producto1.estaEnExistencia()<<endl;
    producto1.abastecer(100);
    cout<<producto1.estaEnExistencia()<<endl;
    
    proveedor1.setCiudad("Paris");
    proveedor1.imprimir();
    cout<<endl;
    
    cout<<tienda1.getName()<<endl;
    cout<<producto1.getId()<<endl;
    
    return 0;
}
