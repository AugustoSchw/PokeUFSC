#pragma once    // Evita duplicamento

class Char {
    private:
        int size[2];
        int position[2];
        int speed;
        int directionx;
        int directiony;
        // Vai ser adicionado um ponteiro que servira como a lista de pokemon

    public: 
        Char(int size[2], int position[2], int speed, int directionx, int directiony);
        int *getSize();
        int *getPosition();
        int getSpeed();
        int getDirectionx();
        int getDirectiony();
        void setSize(int size[2]);
        void setPosition(int position[2]);
        void setSpeed(int speed);
};