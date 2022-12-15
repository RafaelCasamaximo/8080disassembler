# Intel 8080 Disassembler

I really like emulators, but they're complicated to implement. And I feel like I could learn something from better understanding the data flow of an old system. Because of this, I do not plan to implement it any further.

## How to compile it?
You'll need to clone the repo and cd into it:
``git clone https://github.com/RafaelCasamaximo/8080disassembler``
``cd 8080disassembler``
After that, create a build folder and cd into it:
``mkdir build``
``cd build``
Run the cmake command to generate the Makefile:
``cmake ..``
Compile the code 
``make`` 
That will generate a executable file ``8080disassembler``

## Usage
``./8080disassembler <ROM>``
If you'd like it's possible to use the space invaders ROM:
``./8080disassembler ../spaceInvaders/invaders.concatenated``
The output will be printed into the terminal. However, if you want to save into a file, you can run:
``./8080disassembler ../spaceInvaders/invaders.concatenated >> output.txt``
