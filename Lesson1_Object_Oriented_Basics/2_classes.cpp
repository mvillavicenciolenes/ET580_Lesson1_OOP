// S. Trowbridge 2024
#include <iostream>
#include <string>  // Include this to use std::string

class id {
public:  // classes require a public access modifier for data members to be accessible outside of the class    
    std::string name;                   
    int num;                            
};

class id2 {
public:  // Add public access specifier if you want to access these members outside the class
    std::string name;
    std::string address;
    std::string city;
    std::string state;
    int zip;
    std::string studentId;
};

int main() 
{
    std::cout << std::endl;  

    id student_1;                       
    student_1.name = "John Smith";      
    student_1.num = 1111;               

    id student_2;                       
    student_2.name = "Jane Doe";        
    student_2.num = 2222;    

    id2 student_3;
    student_3.name = "Richard Dickson";
    student_3.address = "1234 Elm St";     // Random address
    student_3.city = "Springfield";        // Random city
    student_3.state = "IL";                // Random state
    student_3.zip = 62704;                 // Random zip code
    student_3.studentId = "S12345678";     // Random student ID
    
    // Print student_1 and student_2 information
    std::cout << student_1.name << " " << student_1.num << "\n";    
    std::cout << student_2.name << " " << student_2.num << "\n";    

    // Print student_3 information
    std::cout << student_3.name << ", " << student_3.address << ", " 
              << student_3.city << ", " << student_3.state << ", " 
              << student_3.zip << ", " << student_3.studentId << "\n";

    std::cout << std::endl;
    return 0;
}
