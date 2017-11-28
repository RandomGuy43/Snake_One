#pragma once

struct segment
{
	int x;
	int y;
	segment* next;
};

class snake
{
public:
	snake();
	~snake();

	segment* head;
	int direction;

	void eat();
	void move();
	void die();

};

