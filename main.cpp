#include <iostream>
#include <cstdio>
#include "ObjetoJuego.h"
#include <cstdio>

int main(){
    ObjetoJuego juego = ObjetoJuego("espada_laser","gran objeto",true);
    std::cout << juego.mostrarNombre();
    std::cout << juego.mostrarDescripcion();
    std::cout << juego.isRemovable();
};