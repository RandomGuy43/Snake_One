#include "snake.h"

snake::snake()
{
	segment* seg1, *tail;
	head = new segment;
	seg1 = new segment;
	tail = new segment;
	head->next = seg1;
	seg1->next = tail;
	tail->next = 0;

	               //700 x 200. 30d x 20d, d = 25
	head->x = 16;
	head->y = 8;
	seg1->x = 17;
	seg1->y = 8;
	tail->x = 18;
	tail->y = 8;
}


snake::~snake()
{}

void move()
{
	segment* seg1, *tail, head;
	head = new segment;
	seg1 = new segment;
	tail = new segment;

	if (direction == "UP")
	{
		head-> = head->y - 25;
	}
	if (direction == "DOWN")
	{
		head->y = head->y + 25;
	}
	if (direction == "LEFT")
	{
		head->x = head->x - 25;
	}
	if (direction == "RIGHT")
	{
		head->x = head->x + 25;
	}

	tail->x = seg1->x;
	tail->y = seg1->y;

	seg1->x = head->x;
	seg1->y = head->y;



}
