#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <vector>

class Fecha 
{
    private:
        int dia;
        int mes;
        int año;

        std::vector <int> diasxmes {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
    public:
        Fecha(int Dia, int Mes, int Año)
        : dia(Dia), mes(Mes), año(Año) {}

        int getDia() const 
        {
            return dia;
        }

        int getMes() const
        {
            return mes;
        }

        int getAño() const
        {
            return año;
        }

        void setFecha(int Dia, int Mes, int Año)
        {
            
            if (Mes >= 1 && Mes <= 12)
            {
                mes = Mes;

            }
            else
            {
                throw std::invalid_argument ("El mes esta fuera de rango.");
            }

            if (Dia >= 1 && Dia <= diasxmes[mes])
            {
                dia = Dia;
            }
            else
            {
                throw std::invalid_argument ("El día esta fuera de rango.");
            }

            if (Año >= 1900 && Año <= 2100)
            {
                año = Año;
            }
            else
            {
                throw std::invalid_argument ("El año esta fuera de rango.");
            }
        }

        void print() const
        {
            std::cout << dia << " / " << mes << " / " << año << std::endl;
        }

};

#endif 
