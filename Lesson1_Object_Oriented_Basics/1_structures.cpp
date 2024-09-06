// S. Trowbridge 2024
#include <iostream>

struct id {                             // define a template for a complex variable (an object) which contains two variables (data members)
    std::string name;                   // name is a data member of the struct id
    int num;                            // num is a data member of the struct id
};

int main() 
{
    std::cout << std::endl;  

    // primitive variables (int, char, bool, float)
    int i;                              // declare (allocate memory and a name for) a variable of type int
    int j;                              // declare (allocate memory and a name for) a variable of type int

    i = 5;                              // assign value to i
    j = 6;                              // assign value to j

    std::cout << i << "\n";             // print the value of a primitive variable of type int
    std::cout << j << "\n\n";           // print the value of a primitive variable of type int    

    // complex variables (objects)

    id student_1;                       // declare (allocate memory and a name for) variable of type id
    student_1.name = "John Smith";      // assign value to name inside student_1
    student_1.num = 1111;               // assign value to num inside student_1

    id student_2;                       // declare (allocate memory and a name for) variable of type id
    student_2.name = "Jane Doe";        // assign value to name inside student_2
    student_2.num = 2222;               // assign value to num inside student_2

    std::cout << student_1.name << " " << student_1.num << "\n";    // read and print the data members of student_1
    std::cout << student_2.name << " " << student_2.num << "\n";    // read and print the data members of student_2

    std::cout << std::endl;
    return 0;
}
