#include "Xwing.h"
#include "Graphics.h"

void Xwing::boundry()
{
	const int right = x + width;
	const int bottom = y + height;
	if (x < 0)
	{
		x = 0;
	}
	else if (right >= Graphics::ScreenWidth - 1)
	{
		x = (Graphics::ScreenWidth - 1) - width;
	}

	if (y < 0)
	{
		y = 0;
	}
	else if (bottom >= Graphics::ScreenHeight - 1)
	{
		y = (Graphics::ScreenHeight - 1) - height;
	}
}
