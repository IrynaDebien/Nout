#pragma once
#include "Mystring.h"
#include "Devices.h"

class Laptop {
private:
    Mystring laptop_name;
    Processor processor; // Composition
    RAM ram;
    GraphicsCard graphics_card;
    Mouse* mouse; // Aggregation
    Webcam* webcam;
    Printer* printer;

public:
    Laptop(const Mystring& name, const Processor& proc, const RAM& ram, const GraphicsCard& gpu, Mouse* mouse, Webcam* webcam, Printer* printer);
    void showInfo() const;
};
