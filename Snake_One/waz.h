#pragma once
struct segment
{
	int x;
	int y;
	segment* nastepny;
};
class waz
{
public:
	segment* head;
	int direction;

	void eat();
	void move();
	void die();
	//void waz();

	waz();

	~waz();
};

