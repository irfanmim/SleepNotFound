#ifndef POINT_H
#define POINT_H

class Point{
	public:
		Point(int x, int y);
		Point(const Point& P);
		void printPoint();
		int getX() const;
		int getY() const;
		void setX(int x);
		void setY(int y);
		void add(int x,int y);
	private:
		int x;
		int y;
};

#endif