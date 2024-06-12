#include "../include/char.h"


Char::Char(int life, int size[2], int position[2], int speed, int direction) {
    this->life = life;
    this->size[0] = size[0];
    this->size[1] = size[1];
    this->position[0] = position[0];
    this->position[1] = position[1];
    this->speed = speed;
    this->direction = direction;
}

int Char::getLife() {
    return this->life;
}

int *Char::getSize() {
    return this->size;
}

int *Char::getPosition() {
    return this->position;
}

int Char::getSpeed() {
    return this->speed;
}

int Char::getDirection() {
    return this->direction;
}

void Char::setLife(int life) {
    this->life = life;
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

void Char::setDirection(int direction) {
    this->direction = direction;
}
