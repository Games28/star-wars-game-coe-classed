#include "Tiefigher.h"
#include "Xwing.h"
#include "Graphics.h"

void Tiefighter::boundry(int tx, int ty, int twidth, int theight)
{
	const int right = tx + twidth;
	const int bottom = ty + theight;
	if (tx >= 0)
	{
		tx = 0;
	}
	else if (right >= Graphics::ScreenWidth - 1)
	{
		tx = (Graphics::ScreenWidth - 1) - twidth;
	}

	if (ty >= 0)
	{
		ty = 0;
	}
	else if (bottom >= Graphics::ScreenHeight - 1)
	{
		ty = (Graphics::ScreenHeight - 1) - theight;
	}
}

void Tiefighter::Isdestroyed(int xwing, int ywing, int wingwidth, int wingheight)
{
	const int xwingright = xwing + wingwidth;
	const int xwingbottom = ywing + wingheight;
	const int tieright = x + width;
	const int tiebottom = y + height;

	if (xwingright >= x &&
		xwingbottom >= y &&
		tieright >= xwing &&
		tiebottom >= ywing)
	{
		Collision = true;
	}

	//if (xwingright >= x &&
	//	tieright >= xwing &&
	//	xwingbottom >= y &&
	//	tiebottom >= ywing)
	//{
	//	Collision = true;
	//}
}
