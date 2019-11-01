#include <SDL.h>

#include "Entity.h"
#include "Graphics.h"
#include "Rope.h"
#include <iostream>

namespace rope_constants {
	int NODES = 10;
}

Rope::Rope(Player *attached, Entity* swingingBlock) {
	this->attached = attached;
	this->swingingBlock = swingingBlock;
};

void Rope::update() {

}

Entity* Rope::getSwingingBlock() const {
	return swingingBlock;
}

void Rope::draw(Graphics& graphics) {
	SDL_SetRenderDrawColor(graphics.getRenderer(), 255, 255, 255, 255);
	graphics.drawLine(attached->getX() + attached->getWidth(), attached->getY(), swingingBlock->getX(), swingingBlock->getY() + swingingBlock->getHeight());
	SDL_SetRenderDrawColor(graphics.getRenderer(), 0, 0, 0, 0);
}

//
//void Rope::initiliaze(int x, int y) {
//
//	for(int i = 0; i < rope_constants::NODES; i++) {
//		RopeNode node;
//		node.positionX = x + i * 2;
//		node.positionY = y;
//		node.oldPositionX = node.positionX;
//		node.oldPositionY = node.positionY;
//		node.velocityX = 0;
//		node.velocityY = 0;
//		node.mass = i;
//
//		this->segments.push_back(node);
//	}
//}
//
//void Rope::draw(Graphics& graphics) {
//	for(size_t i = 0; i < segments.size()-1; i++) {
//		RopeNode nodeOne = segments.at(i);
//		RopeNode nodeTwo = segments.at(i+1);
//
//		int x1 = nodeOne.positionX;
//		int y1 = nodeOne.positionY;
//		int x2 = nodeTwo.positionX;
//		int y2 = nodeTwo.positionY;
//
//		cout << "ma" << x1 << endl;
//		SDL_SetRenderDrawColor(graphics.getRenderer(), 255, 255, 255, 255);
//
//		graphics.drawLine(x1, y1, x2, y2);
//		SDL_SetRenderDrawColor(graphics.getRenderer(), 0, 0, 0, 0);
//
//	}