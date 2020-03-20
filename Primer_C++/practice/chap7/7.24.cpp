#include <iostream>
#include <string>
#include <vector>

class Screen{
    public:
        using pos = std::string::size_type;
        Screen() = default;
        Screen(pos ht, pos wd):
                height(ht), width(wd), contents(ht*wd, ' '){}
        Screen(pos ht, pos wd, char c):
                height(ht), width(wd), contents(ht*wd,c){}
        char get() const {
            return contents[cursor];
        }
        inline char get(pos ht, pos wd) const;
        Screen &move(pos r, pos c);
    private:
        pos height;
        pos width;
        pos cursor;
        std::string contents;
};

// The function name is confusing. After reading the code, it looks more like 'move cursor'
inline Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const{
    pos row = r * width;
    return contents[row + c];
}

class Window{
    public:
        std::vector<Screen> Screens{Screen(24, 80, ' ')};
};

int main(){
    std::string test(10, 'c');
    std::cout << test << std::endl;
    return 0;
}