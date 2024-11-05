// S. Trowbridge 2024
#include <iostream>

class id {
private:                                        // private data members are not accessible outside of the class
    std::string name;
    int num;
public:
    // accessor functions                       // acessors are member functions that are used to read from private data members
    std::string getName() { 
        return name; 
        }
    int getNum() { 
        return num; 
        }

    // mutator functions                        // mutators are member functions that are used to write to private data members
    void setName(std::string n) { name = n; }
    void setNum(int x) { num = x; }
};

int main() 
{
    std::cout << std::endl;  

    id student;
    student.setName("John Smith");
    student.setNum(1111);

    std::cout << student.getName() << "\n";
    std::cout << student.getNum() << "\n";

    std::cout << std::endl;
    return 0;
}