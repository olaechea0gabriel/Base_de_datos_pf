#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdexcept>
#include <string>

class Time {
    public:
        explicit Time(int = 0, int = 0, int = 0);

        void setTime(int, int, int);
        void setHour(int);
        void setMinute(int);
        void setSecond(int);

        unsigned int getHour() const;
        unsigned int getMinute() const;
        unsigned int getSecond() const;

        std::string toUniversalString() const;
        std::string toStandardString() const;
    protected:
        unsigned int hour{0};
        unsigned int minute{0};
        unsigned int second{0};
};

class Reservacion : public Time {

    public:
        Reservacion(std::string cliente_, int hora_, int dia_, int invitados_, std::string estado_)
        : cliente{cliente_} , Time{hora_, 00, 00}, dia{dia_} , invitados{invitados_}, estado{estado_} {}

        void setCliente(std::string cliente_) 
    { 
        cliente = cliente_; 
    }

    std::string getCliente() const 
    { 
        return cliente; 
    }

    void setDia(int dia_) 
    { 
        dia = dia_; 
    }

    int getDia() const 
    { 
        return dia; 
    }

    void setInvitados(int invitados_) 
    { 
        invitados = invitados_; 
    }

    int getInvitados() const 
    { 
        return invitados; 
    }

    void setEstado(std::string estado_) 
    { 
        estado = estado_; 
    }

    std::string getEstado() const 
    { 
        return estado; 
    }

private:
    std::string cliente;
    int dia;
    int invitados;
    std::string estado;
};


Time::Time(int h, int m, int s) 
{
    setTime(h, m, s);
}

void Time::setTime(int h, int m, int s) 
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h) 
{
    if (h >= 0 && h < 24) {
        hour = h;
    } else {
        throw std::invalid_argument("la hora debe ser entre 0-23");
    }
}

void Time::setMinute(int m) 
{
    if (m >= 0 && m < 60) {
        minute = m;
    }
    else {
        throw std::invalid_argument("los minutos deben ser entre 0-59");
    }
}

void Time::setSecond(int s) 
{
    if (s >= 0 && s < 60) {
        second = s;
    } else {
        throw std::invalid_argument("los segundos deben ser entre 0-59");
    }
}

unsigned int Time::getHour() const 
{
    return hour;
}

unsigned int Time::getMinute() const 
{
    return minute;
}

unsigned int Time::getSecond() const 
{
    return second;
}

std::string Time::toUniversalString() const 
{
    std::ostringstream str;
    str << std::setfill('0') << std::setw(2) << hour << ":" << std::setw(2) << minute << ":" << std::setw(2) << second;
    return str.str();
}

std::string Time::toStandardString() const 
{
    std::ostringstream str;
    str << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << std::setfill('0') << std::setw(2) << minute << ":" << std::setw(2) << second << (hour < 12 ? " AM" : " PM");
    return str.str();
}