#include <iostream>
#include "ObjetoJuego.h"

int main(){
    ObjetoJuego juego = ObjetoJuego("espada_laser","gran objeto",true);
    std::cout << juego.mostrarNombre();
    std::cout << juego.mostrarDescripcion();
    std::cout << juego.isRemovable();
}