#include "waz.h"

waz::waz()
{
	segment* seg1, *tail;
	head = new segment;
	seg1 = new segment;
	tail = new segment;
	head->nastepny = seg1;
	seg1->nastepny = tail;
	tail->nastepny = 0;
	head->x = 20;
	head->y = 10;
	seg1->x = 21;
	seg1->y = 10;
	tail->x = 22;
	tail->y = 10;
};


waz::~waz()
{
}
