//  Programa que calcula el precio de una compra en un negocio
//  Santiago Cacho A01255853
//  03/11/24.

#include <iostream>
using namespace std;

int main() {
    int cantidadProductos;
    float precio, cantidad, subtotal = 0;
    
    // solicitar cantidad de producto
    cout << "Ingrese la cantidad de productos diferentes comprados: ";
    cin >> cantidadProductos;
    
    // loop para cada producto
    for (int i = 0; i < cantidadProductos; i++) {
        cout << "Ingrese el precio del producto " << i + 1 << ": ";
        cin >> precio;
        cout << "Ingrese la cantidad comprada del producto " << i + 1 << ": ";
        cin >> cantidad;
        
        // calcular subtotal
        subtotal += precio * cantidad;
    }
    
    // calcular iva y precio total
    float iva = subtotal * 0.19;
    float total = subtotal + iva;
    
    // imprimir resultados
    cout << "Subtotal de la compra: $" << subtotal << endl;
    cout << "IVA (19%): $" << iva << endl;
    cout << "Precio total: $" << total << endl;

    return 0;
}
