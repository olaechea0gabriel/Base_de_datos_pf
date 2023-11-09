#ifndef INGREDIENTES_H
#define INGREDIENTES_H

#include <iostream>
#include <vector>

#include "Item.h"
#include "Fecha.h"

class Ingrediente : public Item
{
    protected:
        std::string medida;
        Fecha caducidad;

    public:
        Ingrediente ( std::string Nombre, unsigned int ID, int Cantidad, std::string Proveedor, int DiaI, int MesI, int AñoI, std::string Medida, int DiaC, int MesC, int AñoC )
        : Item (Nombre, ID, Cantidad, Proveedor, DiaI, MesI, AñoI), medida(Medida), caducidad(DiaC, MesC, AñoC) {}

        // Metodos Set

        void setMedida (std::string Medida)
        {
            medida = Medida;
        }

        void setFechaDeCaducidad (int DiaC, int MesC, int AñoC)
        {
            caducidad.setFecha(DiaC, MesC, AñoC);
        }


        // Métodos Get

        
        std::string getMedida () const {return medida;}

        Fecha getFechadeIngreso() { return caducidad; }



        // Métodos Delete

        ~Ingrediente()
        {
            std::cout << "Se ha eliminado el ingrediente : " << getNombre() << std::endl;
        }
};

#endif
