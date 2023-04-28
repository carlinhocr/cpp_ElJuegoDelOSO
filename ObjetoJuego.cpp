/*
class ObjetoJuego(object):
    def __init__(self,nombre,descripcion,removable):
        self.nombre = nombre
        self.descripcion = descripcion
        self.removable = removable

    def mostrarDescripcion(self):
        return self.descripcion

    def mostrarNombre(self):
        return self.nombre

    def isRemovable(self):
        return self.removable
        */
#include <iostream>
#include "ObjetoJuego.h"

ObjetoJuego::ObjetoJuego(std::string nombre="SinNombre", std::string descripcion="Sin Descripcion", bool removable=false){
    std::string _nombre = nombre;
    std::string _descripcion = descripcion;
    bool _removable = removable;
}

std::string ObjetoJuego::mostrarDescripcion(){
    return _descripcion
}

std::string ObjetoJuego::mostrarNombre(){
    return _nombre
}

bool ObjetoJuego::isRemovable(){
    return _removable
}
