#include "Heic2JPG.h"
#include "toojpeg.h"
#include <iostream>
#include <fstream>

// output file
std::ofstream myFile;

// write a single byte compressed by tooJpeg
void myOutput(unsigned char byte)
{
	myFile << byte;
}

void heic2jpg(std::string input_filename, std::string out_filename) {
	myFile = std::ofstream(out_filename, std::ios_base::out | std::ios_base::binary);
	const uint8_t* data;
	int len;
	loadHeicImage(input_filename, data, len);
	auto ok = TooJpeg::writeJpeg(myOutput, data, width, height, true, 100, false, input_filename.c_str());
}