class Char {
    private:
        int life;
        int size[2];
        int position[2];
        int speed;
        int direction;

    public: 
        Char(int life, int size[2], int position[2], int speed, int direction);
        int getLife();
        int *getSize();
        int *getPosition();
        int getSpeed();
        int getDirection();
        void setLife(int life);
        void setSize(int size[2]);
        void setPosition(int position[2]);
        void setSpeed(int speed);
        void setDirection(int direction);
};