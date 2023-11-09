#include <iostream>
#include <string>
#include <vector>
#include "Ingredientes.h"

class ItemMenu
{
	private:
		std::string nombre;
		std::string descripcion;
		double precio;
		std::vector<Ingrediente> ingredientes;

	public:
		ItemMenu (std::string ItemNombre, std::string ItemDescripcion, double ItemPrecio)
			: nombre {ItemNombre} , descripcion {ItemDescripcion}, precio {ItemPrecio} {}
		
		// Getters

		std::string getNombre () const { return nombre; }

		std::string getDescripcion () const { return descripcion; }

		double getPrecio () const { return precio; }


		// Setters

		void setNombre (std::string ItemNombre)
		{
			nombre = ItemNombre;
		}
		
		void setDescripcion (std::string ItemDescripcion)
		{
			descripcion = ItemDescripcion;
		}

		void setPrecio (double ItemPrecio)
		{
			precio = ItemPrecio;
		}

		// Metodo para añadir ingredientes a la lista
		
    	void addIngredient(const Ingrediente &ingrediente)
    	{
        	ingredientes.push_back(ingrediente);
    	}

    	const std::vector<Ingrediente> &getIngredientes() const
    	{
        	return ingredientes;
    	}

		// Método para imprimir información de la clase

		void print ()
		{
			std::cout << nombre << "." << std::endl;
			std::cout << "Descripción: " << descripcion << std::endl;
			std::cout << "Precio: $ " << precio << "." << std::endl;

			for ( int i = 0 ; i < ingredientes.size() ; i++ )
			{
				std::cout << ingredientes[i].getNombre() << " , " ;
			}
		}

		// Destructor
		~ItemMenu ()
		{
			std::cout << "El item " << nombre << " fue eliminado." << std::endl;
		}

};
