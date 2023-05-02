#include <iostream>
#include "ObjetoJuego.h"

ObjetoJuego::ObjetoJuego(std::string nombre, std::string descripcion, bool removable){
    _nombre = nombre;
    _descripcion = descripcion;
    _removable = removable;
}

std::string ObjetoJuego::mostrarDescripcion(){
    return _descripcion;
}

std::string ObjetoJuego::mostrarNombre(){
    return _nombre;
}

bool ObjetoJuego::isRemovable(){
    return _removable;
}
