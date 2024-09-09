// S. Trowbridge 2024
#include <iostream>

class id {
private:
    std::string name;
    int num;
public:
    // member functions are declared within the class definition and depend upon a calling object to access data
    id(): name("noname"), num(0) {}                 
    id(std::string n, int x): name(n), num(x) {}

    std::string getName() { return name; }
    int getNum() { return num; }
    void setName(std::string n) { name = n; }
    void setNum(int x) { num = x; }

    void print2()                          
{
    std::cout  << getName() << " " << getNum() << "\n";   
}
};

// non-member functions are declared/defined outside of the class definition and require an object reference argument to access data
void print(id &object)                          
{
    std::cout  << object.getName() << " " << object.getNum() << "\n";   
}

int main() 
{
    std::cout << std::endl;  

    id student_1;
    id student_2("John Smith", 1111);

    std::cout << student_1.getName() << "\n";   // member function syntax ( callingObject.functionName() )

    print(student_1);                           // non-member function syntax ( functionName( callingObject) )
    print(student_2);
    std::cout << std::endl;  


    student_1.print2();                           
    student_2.print2();

    std::cout << std::endl;
    return 0;
}