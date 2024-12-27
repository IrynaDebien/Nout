#include "Devices.h"

// Printer
Printer::Printer(const Mystring& type_printer) : printer_type(type_printer) {}

Mystring Printer::getPrinterType() const {
    return printer_type;
}

// Webcam
Webcam::Webcam(const Mystring& type_webcam) : webcam_type(type_webcam) {}

Mystring Webcam::getWebcamType() const {
    return webcam_type;
}

// Mouse
Mouse::Mouse(const Mystring& type_mouse) : mouse_type(type_mouse) {}

Mystring Mouse::getMouseType() const {
    return mouse_type;
}

// GraphicsCard
GraphicsCard::GraphicsCard(const Mystring& type_graphics_card) : graphics_card_type(type_graphics_card) {}

Mystring GraphicsCard::getGraphicsCardType() const {
    return graphics_card_type;
}

// RAM
RAM::RAM(const Mystring& type_ram) : ram_type(type_ram) {}

Mystring RAM::getRAMType() const {
    return ram_type;
}

// Processor
Processor::Processor(const Mystring& serial_number) : processor_serial_number(serial_number) {}

Mystring Processor::getProcessorSerialNumber() const {
    return processor_serial_number;
}
