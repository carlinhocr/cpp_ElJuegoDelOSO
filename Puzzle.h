/*

class Puzzle(object):

    def __init__(self, objeto1, objeto2, accionResuelve, descripcionNoResuelto, descripcionResuelto):
        self.objeto1 = objeto1
        self.objeto2 = objeto2
        self.accionResuelve = accionResuelve
        self.resuelto = False
        self.descripcionNoResuelto = descripcionNoResuelto
        self.descripcionResuelto = descripcionResuelto

    def mostrarDescripcion(self):
        if self.resuelto:
            descripcion = self.descripcionResuelto
        else:
            descripcion = self.descripcionNoResuelto
        return descripcion

    def mostrarAccion(self):
        return self.accionResuelve

    def resolverPuzzle(self):
        self.resuelto=True
        return self.descripcionResuelto

    def mostrarNombreObjeto1(self):
        return self.objeto1.mostrarNombre()

    def mostrarNombreObjeto2(self):
        return self.objeto2.mostrarNombre()

    def statusSolved(self):
        return self.resuelto

    */

#ifndef Puzzle_h
#define Puzzle_h
#include <iostream>
#include "ObjetoJuego.h"

class Puzzle {
// Objeto 1 y Objeto 2 no son strings sino que son de la clase objetos
// Probarlo!!!!
    public:
            Puzzle(std::string objeto1, std::string objeto2, 
            std::string accionResuelve, std::string descripcionNoResuelto, 
            std::string descripcionResuelto);
            std::string mostrarDescripcion();
            std::string mostrarAccion();
            bool resolverPuzzle();
            std::string mostrarNombreObjeto1();
            std::string mostrarNombreObjeto2();
            bool statusSolved();
    private:
            std::string _objeto1;
            std::string _objeto2;
            std::string _accionResuelve;
            std::string _descripcionNoResuelto;
            std::string _descripcionResuelto;
            bool _resuelto;
}

#endif