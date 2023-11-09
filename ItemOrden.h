#include "ItemMenu.h"

class ItemOrden
{
	private:
		ItemMenu pedido;
		std::string especificaciones;

	public:
		ItemOrden(ItemMenu &Pedido, std::string &Especificaciones)
		: pedido (Pedido), especificaciones (Especificaciones) {}
		

		// Metodos Set

		void setPedido (ItemMenu &Pedido) 
		{
			pedido = Pedido;
		}

		void setEspecificaciones (std::string &Especificaciones) 
		{
			especificaciones = Especificaciones;
		}


		// Metodos Get

		const ItemMenu &getPedido () const 
		{ return pedido; }

		std::string getEspecificaciones () const
		{ return especificaciones; }
		

		// Metodo print

		void printItemOrden()
		{
			std::cout << pedido.getNombre() << ":" << std::endl;
			std::cout << especificaciones << std::endl;
		}

		
};