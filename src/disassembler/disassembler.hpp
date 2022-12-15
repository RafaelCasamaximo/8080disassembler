#pragma once

class Disassembler
{
    public:
    Disassembler();
    ~Disassembler();
    bool loadROM(char const* romPath);
    void disassemble();

    private:
    unsigned char* romBuffer;
    int size;
    int pc = 0;
    int disassembleOP();

};