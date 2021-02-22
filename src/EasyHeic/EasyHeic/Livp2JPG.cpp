#include "Livp2JPG.h"

void extractLivp(std::string livpName, std::string targetFolder)
{
	elz::extractZip(livpName, targetFolder);
}
