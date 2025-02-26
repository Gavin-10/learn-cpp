
#include "house.h"

void House::ListParts() const {
    std::cout << description << std::endl;
    std::cout << color << std::endl;
    std::cout << "Rooms: " << numRooms << std::endl;
    std::cout << "Windows: " << numWindows << std::endl;
    std::cout << "Garage? " << garage << std::endl;
    if(garage) {
        std::cout << "parking spaces: " << numCars << std::endl;
    }
    std::cout << "Garden? " << garden << std::endl;
}