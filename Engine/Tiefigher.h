#pragma once

class Tiefighter
{
	public:
		void boundry(int tx, int ty, int twidth, int theight);
		void Isdestroyed(int xwing, int ywing, int wingwidth, int wingheight);
		int x;
		int y;
		int vx;
		int vy;
		static constexpr int width = 74;
		static constexpr int height = 77;
		bool Collision = false;


};
