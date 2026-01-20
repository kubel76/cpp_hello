#include<iostream>
#include<string>

int main() {
    int age = 25;
    double height = 1.72;
    char gender = 'M';
    bool isStudent = true;
    std::string name = "Peter";

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " meters" << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Is Student: " << isStudent << std::endl;

    return 0;
}