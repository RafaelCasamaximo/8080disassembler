#include <iostream>

#include "disassembler/disassembler.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
    
	if (argc != 2)
	{
		cerr << "Usage: " << argv[0] << " <ROM>\n";
		exit(EXIT_FAILURE);
	}

    Disassembler disassembler;
    if(!disassembler.loadROM(argv[1]))
    {
        cerr << "Failed to open: " << argv[1] << endl;
		exit(EXIT_FAILURE);
    }
    disassembler.disassemble();

    return 0;
}