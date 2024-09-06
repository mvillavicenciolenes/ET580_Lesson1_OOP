// S. Trowbridge 2024
#include <iostream>

class id {
private:
    std::string name;
    int num;
public:
    // constructors                                 // constructor functions are automatically called to initialize object data when the object is created
    id(): name("noname"), num(0) {}                 // default constructor:             assigns default values when creating an object
    id(std::string n, int x): name(n), num(x) {}    // parameterized constructor:       assigns specified values when creating an object

    std::string getName() { return name; }
    int getNum() { return num; }
    void setName(std::string n) { name = n; }
    void setNum(int x) { num = x; }
};

int main() 
{
    std::cout << std::endl;  

    id student_1;                                   // instantiate (create) an object and call the default constructor (use default values)
    id student_2("John Smith", 1111);               // instantiate (create) an object using a parameterized constructor (specify values)

    std::cout  << student_1.getName() << " " << student_1.getNum() << "\n";
    std::cout  << student_2.getName() << " " << student_2.getNum() << "\n";

    std::cout << std::endl;
    return 0;
}