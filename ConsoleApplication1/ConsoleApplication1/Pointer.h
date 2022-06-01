#pragma once
class Pointer
{
public:
    Pointer(double x, double y, double z);
    Pointer(const Pointer& orig);
    virtual ~Pointer();
    double getX();
    double getY();
    double getZ();
    void writeOut();
private:
    double x, y, z;
};