#include <string>

enum Color {
    RED = 0,
    BLUE,
    GREEN,
    WHITE,
    BLACK
};

class Good {
public:
    Good(std::string Name, int Price, int Num, Color color) :
        name(Name), price(Price), num(Num), color(color) {}

    std::string name;
    int price;
    int look;
    int Shop;
    int num;
    Color color;
};
class Bag : public Good {
public:
    Bag(std::string Name, int Price, int Num, Color color, int Size)
        : Good(Name, Price, Num, color), size(Size) {}

    int size; 
};

class Hat : public Good{
    public:
        Hat(std::string Name, int Price, int Num, Color color, int Size)
        : Good(Name, Price, Num, color), size(Size) {}
        // 帽子的尺寸
        int size;
};

class Phone : public Good{
public:
    Phone(std::string Name, int Price, int Num, Color color, int Size, std::string cpu, std::string os)
        : Good(Name, Price, Num, color), size(Size), CPU(cpu), OS(os) {}
    
    // 这个手机的尺寸
    int size; 
    // 这个手机的CPU
    std::string CPU;
    // 这个手机使用的OS
    std::string OS;
};