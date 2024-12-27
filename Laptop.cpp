#include "Laptop.h"

Laptop::Laptop(const Mystring& name, const Processor& proc, const RAM& ram, const GraphicsCard& gpu, Mouse* mouse, Webcam* webcam, Printer* printer) :
    laptop_name(name),
    processor(proc),
    ram(ram),
    graphics_card(gpu),
    mouse(mouse),
    webcam(webcam),
    printer(printer) {
}

void Laptop::showInfo() const {
    cout << "Laptop: " << laptop_name << endl;
    cout << "Processor: " << processor.getProcessorSerialNumber() << endl;
    cout << "RAM: " << ram.getRAMType() << endl;
    cout << "Graphics Card: " << graphics_card.getGraphicsCardType() << endl;
    if (mouse != nullptr) {
        cout << "Mouse: " << mouse->getMouseType() << endl;
    }
    else {
        cout << "Mouse not connected" << endl;
    }
    if (webcam != nullptr) {
        cout << "Webcam: " << webcam->getWebcamType() << endl;
    }
    else {
        cout << "Webcam not connected" << endl;
    }
    if (printer != nullptr) {
        cout << "Printer: " << printer->getPrinterType() << endl;
    }
    else {
        cout << "Printer not connected" << endl;
    }
}
