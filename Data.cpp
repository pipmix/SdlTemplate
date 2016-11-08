#include "Data.h"

Data::Data()
{
}

bool Data::LoadImage(char * fn)
{
	g_surface = IMG_Load(fn);
	return false;
}
