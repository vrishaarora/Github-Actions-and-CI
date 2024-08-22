#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle(): width(0), height(0) {};
        Rectangle(int w,int h);

        int getWidth(){return width;}
        int getHeight(){return height;}
        void set_width(int w);
        void set_height(int h);
        int area();
        int perimeter();
};

#endif // RECTANGLE_HPP
