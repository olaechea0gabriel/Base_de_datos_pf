#ifndef MENU_H
#define MENU_H

#include <string>
#include <list>
#include <iostream>

using namespace std;

class Menu {
private:
    string nombre;
    list<string> ingredientes;
    double precio;
    list<string> platos;
    bool disponibilidad;

public:
    Menu();

    // Métodos Get
    string get_nombre() const;
    list<string> get_ingredientes() const;
    double get_precio() const;
    list<string> get_platos() const;
    bool get_disponibilidad() const;

    // Métodos Set
    void set_nombre(const string& nombre);
    void set_ingredientes(const list<string>& ingredientes);
    void set_precio(double precio);
    void set_platos(const list<string>& platos);
    void set_disponibilidad(bool disponibilidad);

    // Métodos Print
    void print_menu_info() const;

    // Método Delete
    void delete_menu();
};

Menu::Menu() {
    this->nombre = "";
    this->ingredientes = list<string>();
    this->precio = 0.0;
    this->platos = list<string>();
    this->disponibilidad = false;
}

// Métodos Get
string Menu::get_nombre() const {
    return nombre;
}
list<string> Menu::get_ingredientes() const {
    return ingredientes;
}
double Menu::get_precio() const {
    return precio;
}
list<string> Menu::get_platos() const {
    return platos;
}
bool Menu::get_disponibilidad() const {
    return disponibilidad;
}

// Métodos Set
void Menu::set_nombre(const string& nombre) {
    this->nombre = nombre;
}
void Menu::set_ingredientes(const list<string>& ingredientes) {
    this->ingredientes = ingredientes;
}
void Menu::set_precio(double precio) {
    this->precio = precio;
}
void Menu::set_platos(const list<string>& platos) {
    this->platos = platos;
}
void Menu::set_disponibilidad(bool disponibilidad) {
    this->disponibilidad = disponibilidad;
}

// Métodos Print
void Menu::print_menu_info() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Ingredientes: ";
    for (const string& ingrediente : ingredientes) {
        cout << ingrediente << ", ";
    }
    cout << endl;
    cout << "Precio: " << precio << endl;
    cout << "Disponibilidad: " << (disponibilidad ? "Disponible" : "No disponible") << endl;
}

// Método Delete
void Menu::delete_menu() {
    this->nombre = "";
    this->ingredientes.clear();
    this->precio = 0.0;
    this->platos.clear();
    this->disponibilidad = false;
}

#endif
