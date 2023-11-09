#include <iostream>
#include <vector>

class Plato 
{
	private:
    std::string nombre;
    float precio;
    
    public:
    Plato(std::string nombre, float precio) : nombre(nombre), precio(precio) {}
    get_plato()
};

class Orden : private 
{
	public:
    std::vector<Plato> platos;

    void agregarPlato(Plato plato) {
        platos.push_back(plato);
    }

    float calcularTotal() {
        float total = 0.0;
        for (const Plato& plato : platos) {
            total += plato.precio;
        }
        return total;
    }

    void mostrarOrden() {
        std::cout << "-------- Orden --------" << std::endl;
        for (const Plato& plato : platos) {
            std::cout << plato.nombre << " - $" << plato.precio << std::endl;
        }
        std::cout << "Total: $" << calcularTotal() << std::endl;
    }
};
