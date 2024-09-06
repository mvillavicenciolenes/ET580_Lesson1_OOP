// S. Trowbridge 2024
#include <iostream>

class id {
private:                                // private data members are not accessible outside of the class
    std::string name;
public:
    int num;                            // public data members are accessible outside of the class
};

int main() 
{
    std::cout << std::endl;  

    id student;
    //student.name = "John Smith";          // compiler error: name is a private data member
    student.num = 1111;

    //std::cout << student.name << "\n";    // compiler error: name is a private data member
    std::cout << student.num << "\n";

    std::cout << std::endl;
    return 0;
}