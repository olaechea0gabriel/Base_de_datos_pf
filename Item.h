#include <iostream>
#include <string>

#include "Fecha.h"

class Item
{
    private:
    std::string nombre;
    unsigned int IDitem;
    int cantidad;
    std::string proveedor;
    Fecha ingreso;
    
    public:
        Item (std::string Nombre, unsigned int ID, int Cantidad, std::string Proveedor, int DiaI, int MesI, int AñoI)
        : nombre (Nombre), IDitem (ID), cantidad (Cantidad), proveedor (Proveedor), ingreso (DiaI, MesI, AñoI) {}

        // Metodos Set

        void setItem (std::string Nombre)
        {
            nombre = Nombre;
        }

        void setIDitem (unsigned int ID)
        {
            IDitem = ID;
        }

        void setCantidad (int Cantidad)
        {
            cantidad = Cantidad;
        }

        void setProveedor (std::string Proveedor)
        {
            proveedor = Proveedor;
        }

        void setFechaDeIngreso (int DiaI, int MesI, int AñoI)
        {
            ingreso.setFecha(DiaI, MesI, AñoI);
        }


        // Métodos Get

        std::string getNombre () const {return nombre;}

        unsigned int getIDitem () const {return IDitem;}

        int getCantidad () const {return cantidad;}

        std::string getProveedor () const {return proveedor;}

        Fecha getFechadeIngreso() { ingreso.print(); }


        // Metodos Add

        void addCantidad(int CantidadAdded)
        {
            cantidad = cantidad + CantidadAdded;
        }


        // Metodos Substract

        void substractCantidad (int CantidadSubs)
        {
            cantidad = cantidad - CantidadSubs;
        }


        // Métodos Delete

        ~Item()
        {
            std::cout << "Se esta eliminando el item: " << nombre << " (numero ID " << IDitem << " )." << std::endl;
        }
};

