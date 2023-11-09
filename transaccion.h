#ifndef TRANSACCION_H
#define TRANSACCION_H
using namespace std;

#include <iostream>
#include <string>

// Constructor de Transaccion
class Transaccion {
private:
    string numero_factura_recibo;
    string fecha_hora;
    double subtotal;
    string metodo_pago;
    int id_producto_servicio;
    int id_empleado;
    string tipo_de_impuesto;
    double impuesto;
    string tipo_de_descuento;
    double descuento;
    double monto_total;

public:
    Transaccion();

    // Métodos Get
    string get_numero_factura() const;
    string get_fecha_hora() const;
    double get_subtotal() const;
    string get_metodo_pago() const;
    int get_id_producto_servicio() const;
    int get_id_empleado() const;
    string get_tipo_de_impuesto() const;
    double get_impuesto() const;
    string get_tipo_de_descuento() const;
    double get_descuento() const;
    double get_monto_total() const;

    // Métodos Set
    void set_numero_factura(const string& numero);
    void set_fecha_hora(const string& fecha_y_hora);
    void set_subtotal(double sub_total);
    void set_metodo_pago(const string& metodo);
    void set_id_producto_servicio(int id);
    void set_id_empleado(int empleado);
    void set_tipo_de_impuesto(const string& tipo_de_impuesto);
    void set_impuesto(double cantidad_impuesto);
    void set_tipo_de_descuento(const string& tipo_de_descuento);
    void set_descuento(double cantidad_descuento);

    // Métodos Print
    void print_transaccion_info() const;

    // Métodos Delete
    void delete_transaccion();

    // Método Adicional
    void recalcular_monto_total();
};

Transaccion::Transaccion() {
    this->numero_factura_recibo = "";
    this->fecha_hora = "";
    this->subtotal = 0.0;
    this->metodo_pago = "";
    this->id_producto_servicio = 0;
    this->id_empleado = 0;
    this->tipo_de_impuesto = "";
    this->impuesto = 0.0;
    this->tipo_de_descuento = "";
    this->descuento = 0.0;
    this->monto_total = 0.0;
}

// Métodos Get
string Transaccion::get_numero_factura() const {
    return numero_factura_recibo;
}

string Transaccion::get_fecha_hora() const {
    return fecha_hora;
}

double Transaccion::get_subtotal() const {
    return subtotal;
}

string Transaccion::get_metodo_pago() const {
    return metodo_pago;
}

int Transaccion::get_id_producto_servicio() const {
    return id_producto_servicio;
}

int Transaccion::get_id_empleado() const {
    return id_empleado;
}

string Transaccion::get_tipo_de_impuesto() const {
    return tipo_de_impuesto;
}

double Transaccion::get_impuesto() const {
    return impuesto;
}

string Transaccion::get_tipo_de_descuento() const {
    return tipo_de_descuento;
}

double Transaccion::get_descuento() const {
    return descuento;
}

double Transaccion::get_monto_total() const {
    return monto_total;
}

// Métodos Set
void Transaccion::set_numero_factura(const string& numero) {
    this->numero_factura_recibo = numero;
}

void Transaccion::set_fecha_hora(const string& fecha_y_hora) {
    this->fecha_hora = fecha_y_hora;
}

void Transaccion::set_subtotal(double sub_total) {
    this->subtotal = sub_total;
    recalcular_monto_total();
}

void Transaccion::set_metodo_pago(const string& metodo) {
    this->metodo_pago = metodo;
}

void Transaccion::set_id_producto_servicio(int id) {
    this->id_producto_servicio = id;
}

void Transaccion::set_id_empleado(int empleado) {
    this->id_empleado = empleado;
}

void Transaccion::set_tipo_de_impuesto(const string& tipo_de_impuesto) {
    this->tipo_de_impuesto = tipo_de_impuesto;
}

void Transaccion::set_impuesto(double cantidad_impuesto) {
    this->impuesto = cantidad_impuesto;
    recalcular_monto_total();
}

void Transaccion::set_tipo_de_descuento(const string& tipo_de_descuento) {
    this->tipo_de_descuento = tipo_de_descuento;
}

void Transaccion::set_descuento(double cantidad_descuento) {
    this->descuento = cantidad_descuento;
    recalcular_monto_total();
}

// Métodos Print
void Transaccion::print_transaccion_info() const {
    cout << "Número de Factura o Recibo: " << numero_factura_recibo << endl;
    cout << "Fecha y Hora de la Transacción: " << fecha_hora << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Método de Pago: " << metodo_pago << endl;
    cout << "ID de Producto o Servicio: " << id_producto_servicio << endl;
    cout << "ID de Empleado: " << id_empleado << endl;
    cout << "Tipo de impuesto: " << tipo_de_impuesto << endl;
    cout << "Impuesto: " << impuesto << endl;
    cout << "Tipo de descuento: " << tipo_de_descuento << endl;
    cout << "Descuento: " << descuento << endl;
    cout << "El monto total es: " << monto_total << endl;
}

// Métodos Delete
void Transaccion::delete_transaccion() {
    this->numero_factura_recibo = "";
    this->fecha_hora = "";
    this->subtotal = 0.0;
    this->metodo_pago = "";
    this->id_producto_servicio = 0;
    this->id_empleado = 0;
    this->tipo_de_impuesto = "";
    this->impuesto = 0.0;
    this->tipo_de_descuento = "";
    this->descuento = 0.0;
    this->monto_total = 0.0;
}

// Método Adicional
void Transaccion::recalcular_monto_total() {
    this->monto_total = this->subtotal + (this->subtotal * (this->impuesto / 100));
    this->monto_total = this->monto_total - (this->monto_total * (this->descuento / 100));
}

#endif
