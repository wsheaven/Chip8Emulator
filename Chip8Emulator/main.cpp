#include "Chip8.h"
#include "Display.h"
#include <iostream>
#include "secrets.h"



int main(int argc, char* args[])
{

    int videoScale = 10;

    Display display("Test Window", VIDEO_WIDTH * videoScale, VIDEO_HEIGHT * videoScale, VIDEO_WIDTH, VIDEO_HEIGHT);

    Chip8 chip8; 
    chip8.LoadROM(ibmLogoRomLocation);

    int videoPitch = sizeof(chip8.video[0]) * VIDEO_WIDTH; 

    bool running = true; 

    while (running)
    {
        chip8.Cycle(); 

        display.Update(chip8.video, videoPitch); 
    }

    return 0;
}

