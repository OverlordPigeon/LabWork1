#pragma once

using namespace std;

class Rectangle {
public:

	Rectangle(int x, int y, int x1, int y1);

	  int* get_coordinates();

	  void angles();
	  void move(int delx, int dely);
	  void change_size(int x, int y);

	  Rectangle& operator++();
	  Rectangle& operator--();
	  Rectangle& operator +(const Rectangle& rec2);
	  Rectangle& operator +=(const Rectangle& rec2);
	  Rectangle& operator -(const Rectangle& rec0);
	  Rectangle& operator -=(const Rectangle& rec0);

private:
	int x, y, x1, y1;
};
