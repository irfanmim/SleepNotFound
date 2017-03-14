#ifndef POINT_H
#define POINT_H

class Point{
	public:
		Point(int x, int y);
		Point(const Point& P);
		void PrintPoint();
		int GetX() const;
		int GetY() const;
		void SetX(int x);
		void SetY(int y);
	private:
		int x;
		int y;
};

#endif