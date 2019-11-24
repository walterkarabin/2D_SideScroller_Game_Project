#pragma once

#include "Player.h"


class Player;
class Rope {
public:

	Rope(Player* attached, Entity *swingingBlock);

	void initiliaze(int x, int y);

	void update();

	void draw(Graphics& graphics);

	Entity* getSwingingBlock() const;


private:
	Player* attached;

	double vectorX;

	double vectorY;

	double length;

	double initAngle;

	double angularFreq;

	double time;

	int ropeStart;

	Entity* swingingBlock;

};
