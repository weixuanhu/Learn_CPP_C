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
        char get(pos ht, pos wd) const;
        Screen &move(pos r, pos c);
        Screen &set(char c);
        Screen &set(pos r, pos c, char c);
        Screen &display(std::ostream &os){
            do_display(os);
            return *this;
        }
        const Screen &display(std::ostream &os) const {
            do_display(os);
            return *this; 
        }
    private:
        pos height;
        pos width;
        pos cursor;
        std::string contents;
        void do_display(std::ostream &os){
            os << contents;
        }
};

// The function name is confusing. After reading the code, it looks more like 'move cursor'
inline Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline char Screen::get(pos r, pos c) const{
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos c, char c){
    pos row = r * width;
    contents[row+c] = c; 
    return *this;
}
class Window{
    public:
        std::vector<Screen> Screens{Screen(24, 80, ' ')};
};

int main(){
    Screen myScreen(5, 3);
    const Screen blank(5, 3);
    myScreen.set('#').display(std::cout);
    blank.display(std::cout);
    return 0;
}