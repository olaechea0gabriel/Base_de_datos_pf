#include <iostream>
#include <string>

class Mesa {
private:
    int numeroMesa;
    int asientos;

public:
    Mesa(int numeroMesa, int asientos)
        : numeroMesa{numeroMesa}, asientos{asientos} {}

    int getNumeroMesa() const {
        return numeroMesa;
    }

    int getAsientos() const {
        return asientos;
    }

    void mostrar() const {
        std::cout << "Mesa numero: " << numeroMesa << std::endl;
        std::cout << "Asientos: " << asientos << std::endl;
    }
};