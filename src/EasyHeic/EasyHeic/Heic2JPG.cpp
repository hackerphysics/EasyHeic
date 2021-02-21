#include "Heic2JPG.h"

void heic2jpg(std::string input_filename, std::string out_filename) {
	const uint8_t* data;
	int len;
	loadHeicImage(input_filename, data, len);
}