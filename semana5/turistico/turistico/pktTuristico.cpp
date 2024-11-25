#include "pktTuristico.h"

// constructor por default
PaqueteTuristico::PaqueteTuristico() {
    destino = "";
    precio = 0.0;
    capacidad = 0;
    cantReservas = 0;
}

// constructor parametrizado
PaqueteTuristico::PaqueteTuristico(string destino, double precio, int capacidad) : destino(destino), precio(precio), capacidad(capacidad){}

// getters
string PaqueteTuristico::getDestino() {
    return destino;
}

double PaqueteTuristico::getPrecio() {
    return precio;
}

int PaqueteTuristico::getCapacidad() {
    return capacidad;
}

int PaqueteTuristico::getCantReservas() {
    return cantReservas;
}

// setters
void PaqueteTuristico::setDestino(string destino) {
    this->destino = destino;
}

void PaqueteTuristico::setPrecio(double precio) {
    this->precio = precio;
}

bool PaqueteTuristico::reservar(int cantViajeros) {
    if (cantViajeros <= 0) {
        cout<<"Cantidad de viajeros no valida"<<endl;
    }
    if (cantViajeros < capacidad) {
        this->capacidad -= cantViajeros;
        this->cantReservas += cantViajeros;
        return true;
    } else {
        return false;
    }
}

void PaqueteTuristico::incCapacidad(int aumento) {
    this->capacidad += aumento;
}

int PaqueteTuristico::obtDisponibilidad() {
    return capacidad;
}

void PaqueteTuristico::imprimir() {
    cout<<"Destino: "<<destino<<endl;
    cout<<"Precio por persona: $"<<precio<<" USD"<<endl;
    cout<<"Disponibilidad: "<<capacidad<<" personas"<<endl;
    cout<<endl;
}

bool PaqueteTuristico::esDestino(string destino) {
    return this->destino == destino;
}

PaqueteTuristico::~PaqueteTuristico() {}


