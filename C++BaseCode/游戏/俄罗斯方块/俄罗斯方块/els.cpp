#include<graphics.h>
#include <conio.h>

#define Hight 25
#define Width 15
#define R_Width 5
#define Block_Size 25


void setup();


int main()
{
	setup();

	system("pause");
	return 0;
}


void setup()
{
	initgraph((Width+R_Width)*Block_Size,Hight*Block_Size);


	BeginBatchDraw();
}

void ShowMenu()
{
	cleardevice();
	setlinecolor(RED);
	line(Width*Block_Size,0,Width*Block_Size,Hight*Block_Size);


	FlushBatchDraw();
}