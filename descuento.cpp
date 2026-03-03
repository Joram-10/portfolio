#include <iostream>
using namespace std;

int main() {
    float precio[5];
    float total =0;
    
    
    for(int i=0;i<5;i++) {
        cout<<"Ingrese el precio del producto "<<i+1<<": ";
        cin>>precio[i];
        total+=precio[i];
    }
    
    
    cout<<"Seleccione el tipo de cliente:"<<endl;
    cout<<"1. Nuevo (5% de descuento)"<<endl;
    cout<<"2. Regular (10% de descuento)"<<endl;
    cout<<"3. Afiliado (15% de descuento)"<<endl;
    cout<<"4. Premium (20% de descuento)"<<endl;
    
    int tipoCliente;
    cout<<"Ingrese el número correspondiente al tipo de cliente: ";
    cin>>tipoCliente;
    
    float descuento=0;
    
    
    switch (tipoCliente) {
        case 1:
            descuento = 0.05;
            break;
        case 2:
            descuento = 0.10;
            break;
        case 3:
            descuento = 0.15;
            break;
        case 4:
            descuento = 0.20;
            break;
        default:
            cout << "Opción de cliente no válida."<<endl;
            return 1;
    }
    
    float totalConDescuento = total * (1 - descuento);
    
    cout<<"El total con descuento es: "<<totalConDescuento<<endl;
    
    return 0;
}

