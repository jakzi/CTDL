#pragma once
#include <winbgim.h> 
#include "GiaoDien.h"
#include "XuLy.h"

int main(int argc, char *argv[])
{
	initwindow(W+10, H+10);			
	setbkcolor(15);			
	cleardevice();
	khoitaoID();
	chayCT(); 
	while(!kbhit()){
		delay(1);
	}
	return 0;
}
