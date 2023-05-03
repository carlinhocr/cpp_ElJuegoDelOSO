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
#include <iostream>
#include "ObjetoJuego.h"
#include "Puzzle.h"

Puzzle::Puzzle(std::string objeto1, std::string objeto2, 
            std::string accionResuelve, std::string descripcionNoResuelto, 
            std::string descripcionResuelto){
                _objeto1 = objeto1;
                _objeto2 = objeto2;
                _accionResuelve = accionResuelve;
                _descripcionNoResuelto = descripcionNoResuelto;
                _descripcionResuelto = descripcionResuelto;
                _resuelto = false;
            };

std::string Puzzle::mostrarDescripcion(){

};
std::string Puzzle::mostrarAccion(){

};
bool Puzzle::resolverPuzzle(){

};
std::string Puzzle::mostrarNombreObjeto1(){

};
std::string Puzzle::mostrarNombreObjeto2(){

};
bool Puzzle::statusSolved(){
    return _resuelto;
};
