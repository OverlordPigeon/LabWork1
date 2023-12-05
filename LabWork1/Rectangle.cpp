#include <iostream>
#include "Rectangle.h"

using namespace std;


Rectangle::Rectangle(int x, int y, int x1, int y1)
{
	//changing points
	if (x > x1) { 
		this->x = x1; 
		this->x1 = x;
	}
	else {
		this->x = x;
		this->x1 = x1;
	}

	if (y > y1) {
		this->y = y1;
		this->y1 = y;
	}
	else {
		this->y = y;
		this->y1 = y1;
	}

}

int* Rectangle::get_coordinates()
{
	int* coord = new int[4];

	coord[0] = this->x;
	coord[1] = this->y;
	coord[2] = this->x1;
	coord[3] = this->y1;

	return coord;
}

void Rectangle::angles() {
	cout << "\n\nThe angles are: \n1.(" << x << ", " << y1 << ")---------- 2.(" << x1 << ", " << y1 << ")\n";
	cout << "    |                  |\n    |                  |\n    |                  |";
	cout << "\n3.(" << x << ", " << y << ") ---------- 4.(" << x1 << ", " << y << ")";
}

void Rectangle::move(int delx, int dely) {
	this->x += delx;
	this->x1 += delx;
	this->y += dely;
	this->y1 += dely;
}

void Rectangle::change_size(int delx, int dely) {
	this->x1 += delx;
	this->y1 += dely;
}

Rectangle& Rectangle :: operator++() {
	this->x++;
	this->y++;
	this->x1++;
	this->y1++;
	return *this;
}

Rectangle& Rectangle :: operator--() {
	this->x--;
	this->y--;
	this->x1--;
	this->y1--;
	return *this;
}

Rectangle& Rectangle::operator + (const Rectangle& rec2) {
	int xmin = this->x;
	int xmax = this->x1;
	int ymin = this->y;
	int ymax = this->y1;

	if (this->x > rec2.x) xmin = rec2.x;
	if (this->x1 < rec2.x1) xmax = rec2.x1;

	if (this->y > rec2.y) ymin = rec2.y;
	if (this->y1 < rec2.y1) ymax = rec2.y1;

	Rectangle sum(xmin, ymin, xmax, ymax);
	return sum;
}

Rectangle& Rectangle::operator += (const Rectangle& rec2) {
	int xmin = this->x;
	int xmax = this->x1;
	int ymin = this->y;
	int ymax = this->y1;

	if (this->x > rec2.x) xmin = rec2.x;
	if (this->x1 < rec2.x1) xmax = rec2.x1;

	if (this->y > rec2.y) ymin = rec2.y;
	if (this->y1 < rec2.y1) ymax = rec2.y1;

	this->x = xmin;
	this->y = ymin;
	this->x1 = xmax;
	this->y1 = ymax;

	return *this;
}

Rectangle& Rectangle::operator - (const Rectangle& rec0) {
	int xmin = this->x1;
	int xmax = this->x;
	int ymin = this->y1;
	int ymax = this->y;

	if (this->x < rec0.x) xmax = rec0.x;
	if (this->x1 > rec0.x1) xmin = rec0.x1;

	if (this->y < rec0.y) ymax = rec0.y;
	if (this->y1 > rec0.y1) ymin = rec0.y1;

	Rectangle intersect(xmax, ymax, xmin, ymin);
	return intersect;
}

Rectangle& Rectangle::operator -= (const Rectangle& rec0) {
	int xmin = this->x1;
	int xmax = this->x;
	int ymin = this->y1;
	int ymax = this->y;

	if (this->x < rec0.x) xmax = rec0.x;
	if (this->x1 > rec0.x1) xmin = rec0.x1;

	if (this->y < rec0.y) ymax = rec0.y;
	if (this->y1 > rec0.y1) ymin = rec0.y1;

	this->x = xmax;
	this->y = ymax;
	this->x1 = xmin;
	this->y1 = ymin;

	return *this;
}
