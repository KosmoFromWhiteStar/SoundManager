#include "./Headers/Header.h"


	
int main(int argv, char* argc[])
{
	DevIniz inz;
	Device dev(inz.Get_Defoult_Device());
	dev.set(0.2f);
	
	return 0;
}