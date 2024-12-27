#pragma once
#include <iostream>
#include <cstring>
#include "Mystring.h"
using namespace std;

class Printer {
private:
    Mystring printer_type;
public:
    Printer(const Mystring& type_printer);
    Mystring getPrinterType() const;
};

class Webcam {
private:
    Mystring webcam_type;
public:
    Webcam(const Mystring& type_webcam);
    Mystring getWebcamType() const;
};

class Mouse {
private:
    Mystring mouse_type;
public:
    Mouse(const Mystring& type_mouse);
    Mystring getMouseType() const;
};

class GraphicsCard {
private:
    Mystring graphics_card_type;
public:
    GraphicsCard(const Mystring& type_graphics_card);
    Mystring getGraphicsCardType() const;
};

class RAM {
private:
    Mystring ram_type;
public:
    RAM(const Mystring& type_ram);
    Mystring getRAMType() const;
};

class Processor {
private:
    Mystring processor_serial_number;
public:
    Processor(const Mystring& serial_number);
    Mystring getProcessorSerialNumber() const;
};
