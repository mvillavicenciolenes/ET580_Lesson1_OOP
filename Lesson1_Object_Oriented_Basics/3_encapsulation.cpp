#include <iostream>
#include <string>

class id {
private:
    std::string name;  // Private data member, not accessible directly from outside the class

public:
    int num;  // Public data member, accessible directly from outside the class

    // Public Setter method for 'name'
    void setName(const std::string& newName) {
        name = newName;
    }

    // Public Getter method for 'name'
    std::string getName() const {
        return name;
    }

    // Public Setter method for 'num'
    void setNum(int newNum) {
        num = newNum;
    }

    // Public Getter method for 'num'
    int getNum() const {
        return num;
    }
};

int main() 
{
    std::cout << std::endl;  

    id student;

    // Using setter methods to set values for private and public members
    student.setName("John Smith");  // Setting the private member 'name' using the public setter method
    student.setNum(1111);           // Setting the public member 'num' using the public setter method

    // Using getter methods to access values for private and public members
    std::cout << "Name: " << student.getName() << "\n";  // Accessing the private member 'name' using the public getter method
    std::cout << "Number: " << student.getNum() << "\n"; // Accessing the public member 'num' using the public getter method

    std::cout << std::endl;
    return 0;
}