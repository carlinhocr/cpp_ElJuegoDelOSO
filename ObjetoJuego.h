#ifndef ObjetoJuego_h
#define ObjetoJuego_h
#include <iostream>

class ObjetoJuego {
public:
        ObjetoJuego(std::string nombre, std::string descripcion, bool removable);
        std::string mostrarDescripcion();
        std::string mostrarNombre();    
        bool isRemovable();
private:
        std::string _nombre;
        std::string _descripcion;
        bool _removable;


};
#endif