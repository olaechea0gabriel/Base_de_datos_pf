#include <iostream>
#include <vector>

#include "Item.h"
#include "Ingredientes.h"

class Inventario 
{
    private:
        std::vector<Item*> items; // Vector que almacena items e ingredientes.

    public:

        // Metodo Add 

        void addItem(Item* item) 
        {
            items.push_back(item);
        }


        // Metodo Remove

        void removeItem(unsigned int ID) 
        {
            for ( int i = 0 ; i < items.size() ; ++i ) 
            {
                if (items[i] -> getIDitem() == ID) 
                {
                    delete items[i]; // Borra el item/ingredient
                    items.erase(items.begin() + i); // Remueve del vector
                    std::cout << "El item con ID " << ID << " ha sido removido del inventario." << std::endl;
                }
            }

            std::cout << "El item con ID " << ID << " no fue encontrado en el inventario." << std::endl;

        }


        // Metodo Display All
        
        void displayInventario() 
        {
            for (const auto& item : items) 
            {
                std::cout << "ID: " << item->getIDitem() << " - Name: " << item -> getNombre() << std::endl;
            }
        }


        // Metodo Buscar por ID

        Item* findItemxID(unsigned int ID) 
        {
            for (const auto& item : items) 
            {
                if (item -> getIDitem() == ID) 
                {
                    return item; // Devuelve un puntero al item encontrado
                }
            }

            return nullptr; // En caso no se encuentre el item buscado
        }

        // Metodo Buscar por Nombre

        std::vector<Item*> findItemxNombre(const std::string& Nombre)
        {
            std::vector<Item*> resultado;

            for (const auto& item : items)
            {
                if (item -> getNombre() == Nombre)
                {
                    resultado.push_back(item);
                }
            }
            return resultado;
        }


        // Metodo para el total de items

        int getTotalItems() 
        {
            return items.size();
        }


        // Destructor 
        ~Inventario() 
        {
            for (const auto& item : items) 
            {
                delete item;
            }
    }
};

