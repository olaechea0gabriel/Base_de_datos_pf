#include <string>

class Trabajador 
{

public:
  Trabajador(std::string nombre_, std::string apellido_, std::string cargo_, int id_, double salario_, double tarifa_, double horas_)
  : nombre{nombre_} , apellido{apellido_}, cargo{cargo_} , ID {id_}, tarifa {tarifa_} 
  {
    if (horas_ > 0)
      horas = horas_;

    if (salario_ > 0)
      salario = salario_;
  }

  void setNombre(std::string nombre_) 
  { 
    nombre = nombre_; 
  }

  std::string getNombre() const 
  { 
    return nombre; 
  }

  void setApellido(std::string apellido_) 
  { 
    apellido = apellido_; 
  }

  std::string getApellido() const 
  { 
    return apellido; 
  }

  void setCargo(std::string cargo_) 
  { 
    cargo = cargo_; 
  }

  std::string getCargo() const 
  { 
    return cargo; 
  }

  int getID() const 
  { 
    return ID; 
  }

  int getSalario() const 
  {
    return salario; 
  }

private:
  std::string nombre;
  std::string apellido;
  int ID;
  std::string cargo;
  double salario{0};
  double tarifa;
  double horas;

};