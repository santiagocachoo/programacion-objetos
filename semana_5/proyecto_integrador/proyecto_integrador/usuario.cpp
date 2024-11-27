#include "usuario.h"

// constructor default
Usuario::Usuario() {
    id = 0;
    nombre = "";
    historial = {};
}

// constructor parametrizado
Usuario::Usuario(int id, string nombre) : id(id), nombre(nombre) {}


// getters
int Usuario::getId() {
    return id;
}

string Usuario::getNombre() {
    return nombre;
}

vector<int> Usuario::getHistorial() {
    return historial;
}

// metodos para gestionar historial de prestamos
void Usuario::agregarPrestamo(int libroId) {
    historial.push_back(libroId);
}

void Usuario::eliminarPrestamo(int libroId) {
    for (auto i = historial.begin(); i != historial.end(); ++i) {
        if (*i == libroId) {
            historial.erase(i);
            break;
        }
    }
}

// imprimir
void Usuario::imprimir() {
    cout<<"ID: "<<id<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Historial de prestamos: ";
    if (historial.empty()) {
        cout<<"No tiene prestamos registrados"<<endl;
    } else {
        for (int libroId : historial) {
            cout<<libroId<<" ";
        }
        cout<<endl;
    }
}

// destructor
Usuario::~Usuario() {}


