#pragma once

namespace uiuc {
    class Cube {
    private:
        /* data */
        double length_;
    public:
        Cube(); // Custom default constructor, with no type!
        Cube(const Cube &obj); // Copy constructor
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);
    };
}
