#pragma once

#include <cstdint>
#include <random>

const unsigned int VIDEO_HEIGHT = 32;
const unsigned int VIDEO_WIDTH = 64;


class Chip8
{
public:

	Chip8(); 
	void Cycle();
	void LoadROM(char const* filename);

	uint8_t keypad[16]; 
	uint32_t video[VIDEO_WIDTH * VIDEO_HEIGHT]{};

private:
	uint8_t memory[4096]{};
	uint8_t registers[16]{};
	uint16_t index{};
	uint16_t pc{};
	uint8_t delayTimer{};
	uint8_t soundTimer{};
	uint16_t stack[16]{};
	uint8_t sp{};
	uint16_t opcode{};

	std::default_random_engine randGen;
	//std::uniform_int_distribution<uint8_t> randByte;
};


