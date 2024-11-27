// programa de prueba para clase paquete turistico
// Santiago Cacho Herrera A01255853
// 25/11724

#include <iostream>
#include "pktTuristico.h"

int main() {
    PaqueteTuristico pktParis;
    pktParis.setDestino("Paris");
    pktParis.incCapacidad(10);
    pktParis.setPrecio(1500.00);
    
    PaqueteTuristico pktIndia("India", 2900.00, 40);
    
    pktParis.imprimir();
    pktIndia.imprimir();
    
    pktIndia.reservar(15);
    int precioTotal = pktIndia.getCantReservas() * pktIndia.getPrecio();
    cout<<"Precio total : $"<<precioTotal<<" USD"<<endl;
    cout<<endl;
    
    pktIndia.reservar(0);
    cout<<"No fue posible realizar la reserva"<<endl;
    cout<<endl;
    
    pktParis.reservar(15);
    cout<<"No fue posible realizar la reserva"<<endl;
    cout<<endl;
    
    pktParis.incCapacidad(10);
    cout<<"La capacidad del vuelo a Paris es ahora: "<<pktParis.getCapacidad()<<" personas"<<endl;
    cout<<endl;
    
    pktParis.imprimir();
    pktIndia.imprimir();

    return 0;
}
