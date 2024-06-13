#include "../include/Char.h"



Char::Char(int size[2], int position[2], int speed, int directionx, int directiony, sf::Sprite sprite) {
    this->size[0] = size[0];
    this->size[1] = size[1];
    this->position[0] = position[0];
    this->position[1] = position[1];
    this->speed = speed;
    this->directionx = directionx;
    this->directiony = directiony;
    this->sprite = sprite;
}


int *Char::getSize() {
    return this->size; //oi
}

int *Char::getPosition() {
    return this->position;
}

int Char::getSpeed() {
    return this->speed;
}

int Char::getDirectionx() {
    return this->directionx;
}

int Char::getDirectiony() {
    return this->directiony;
}


void Char::setSize(int size[2]) {
    this->size[0] = size[0];
    this->size[1] = size[1];
}

void Char::setPosition(int position[2]) {
    this->position[0] = position[0];
    this->position[1] = position[1];
}

void Char::setSpeed(int speed) {
    this->speed = speed;
}
