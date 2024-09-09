// S. Trowbridge 2024
#include <iostream>
using namespace std;

class id {
private:
    std::string name;
    int num;
public:
    // constructors                                 // constructor functions are automatically called to initialize object data when the object is created
    id(): name("noname"), num(0) {}                 // default constructor:             assigns default values when creating an object
    id(std::string n, int x): name(n), num(x) {}    // parameterized constructor:       assigns specified values when creating an object
    id(string n1):name(n1), num(-1) {}
    id(int num1):name("Default Name"), num(num1) {}


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
    id student_A("John Smith"); 
    id student_B(1234);

    std::cout  << student_1.getName() << " " << student_1.getNum() << "\n";
    std::cout  << student_2.getName() << " " << student_2.getNum() << "\n";
    std::cout  << student_A.getName() << " " << student_A.getNum() << "\n";
    std::cout  << student_B.getName() << " " << student_B.getNum() << "\n";


    std::cout << std::endl;
    return 0;
}