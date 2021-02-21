#pragma once

#include "libheif/heif.h"
#include <string>

using namespace std;

void loadHeicImage(string input_filename, const uint8_t* data, int& len);