#include <windows.h>
#include "Mystring.h"
#include "Devices.h"
#include "Laptop.h"
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Processor processor("Intel i7");
    RAM ram("16GB DDR4");
    GraphicsCard graphics_card("NVIDIA RTX 3080");
    Mouse mouse("Logitech");
    Webcam webcam("Logitech HD");
    Printer printer("HP LaserJet");

    Laptop laptop("ASUS ROG", processor, ram, graphics_card, &mouse, &webcam, &printer);
    laptop.showInfo();

    return 0;
}
