#include <iostream>
#include "ObjetoJuego.h"

int main(){
    ObjetoJuego juego = ObjetoJuego("espada_laser","gran objeto",true);
    std::cout << "Nombre: " << juego.mostrarNombre() << "\n";
    std::cout << "Descripcion: " << juego.mostrarDescripcion() << "\n";
    std::cout << "Removable: " << (juego.isRemovable()  ? "True":"False") << "\n";
    // std::cout << "Removable: " << juego.isRemovable() << "\n";
};