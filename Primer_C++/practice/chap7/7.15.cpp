#include <string>
#include <iostream>

class Person{
    private:
        std::string name;
        std::string address;
    public:
        Person():name("Unknown"), address("Unknown"){}
        Person(std::string const &name, std::string const &address):
                name(name), address(address){}
        std::string getName() const{ return name; }
        std::string getAddress() const{ return address; }
        std::string read(std::istream &is){
            std::cout << "Input name: " ;
            while (!(is >> name)){
               std::cout << std::endl << "Invalid name, please try again: ";
            }
            std::cout << "Input address: " ;
            while (!(is >> address)){
               std::cout << std::endl << "Invalid address, please try again: ";
            }
        }
        void print(std::ostream &os) const {
            os << "name: " << this->name
                << " ,address: " << this->address << std::endl;
        }
};