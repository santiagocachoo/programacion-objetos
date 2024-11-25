// clases tienda, producto y proveedor
// Santiago Cacho Herrera A01255853
// 20/11/24

#include <iostream>
#include "tienda.h"
#include "producto.h"
#include "proveedor.h"
#include <vector>

using namespace std;

int main() {
    // objeto de proveedor
    Proveedor proveedor1("FEMSA", "Monterrey");
    
    // objeto de producto
    Producto producto1("A1", "Coca-Cola", 50, 25.00, proveedor1);
    
    // objeto de tienda
    Tienda tienda1("Walmart");
    
    producto1.setCiudadProveedor("Paris");
    //producto1.imprimir();
    cout<<endl;
    
    vector<Producto> productos;
        
    Proveedor proveedor2("PepsiCo", "CDMX");
    
    Producto producto2("A2", "Pepsi", 50, 20.00, proveedor2);
    Producto producto3("A3", "Sprite", 50, 25.00, proveedor1);
    Producto producto4("A4", "7Up", 50, 20.00, proveedor2);
    
    productos.push_back(producto1);
    productos.push_back(producto2);
    productos.push_back(producto3);
    productos.push_back(producto4);

    tienda1.adicionarProducto(producto1);
    tienda1.adicionarProducto(producto2);
    tienda1.adicionarProducto(producto3);
    tienda1.adicionarProducto(producto4);
    
    cout<<"La cantidad de productos es: "<<tienda1.getCant()<<endl;
    
    tienda1.imprimir();
    
    for (int i=0; i<tienda1.getCant();i++){
        cout<<"Proveeedor: "<<tienda1.getProveedorProducto(i)<<endl;
    }
    
    for (int i=0; i<tienda1.getCant();i++){
        tienda1.getProducto(i).abastecer(5);
    }
    
    
    
    /*
    for(Producto p:productos) {
        p.abastecer(5);
    }
    
    double precio = -1;
    for(Producto p:productos) {
        if (p.getId() == "A2") {
            precio = p.vender(2);
            break;
        }
    }
    if (precio==-1) cout<<"No hay en existencia"<<endl;
        else cout<<"El precio es: "<<precio<<endl;
     */
    
    return 0;
}
