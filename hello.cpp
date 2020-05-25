/*#include <iostream>

int main() {
    int age = 23;    
    std::cout << "Hello world! " << "I am Tae'lur and I am " << age << " years old" << "\n";
    return 0;
}*/

/*
g++ filename.cpp - to compile and translates the code 
into a program the machine can understand and creates a machine
code file called a.out.
./a.out - executable file; loaded to computer memory and the 
computer's CPU (Central Processing Unit) executes the program
one instruction at a time

g++ hello.cpp -o hello - if you want to give the executable file a unique name
The compiler will then translate the C++ program hello.cpp and create a machine
code file called name

./hello - run the executable 
*/

// single line comment
/* multi line comment */

/*
g++ filename.cpp - to compile
./a.out - to execute and run the code 

ORRRR

g++ filename.cpp -o executable - to compile and name your executable
./filename without extension - to run the code 
*/
/*int main() {

  int score = 0;

  // Change score here:
  
  score = 1234 * 99;
  
  std::cout << score << "\n";


}*/
/*
A variable is simply a name that represents a 
particular piece of your computer’s memory that has been 
set aside for you to store, retrieve, and use data.
int - whole numbers
double - floats (decimals)
char - individual characters
string- sequence of characters encapsulate by single- or double-quotes
bool - true and false 

Every variable has a type, 
which represents the kind of information you can store inside of it. 
It tells your compiler how much memory to set aside for the variable, a
nd it defines what you can do with the variable.

"Every variable in C++ must be declared before it can be used!"

Variable declaration:
Define the type and name

#include <iostream>

int main() {
  define type of data the tip variable will hold
  int tip = 0;
  
  ## output for user
  std::cout << "Enter tip amount: ";

  ## input to store as value in variable
  std::cin >> tip;
  
  std::cout << "You paid " << tip << " dollars.\n";
  
}


*/
#include <iostream>
#include <string.h>


int main() {
    std::string name;
    std::string occupation;
    int age;

    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "What is your occupation? ";
    std::cin >> occupation;
    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "Thank you!\n";

    std::cout << "Hello, my name is " << "and I am " << age << " years old\n" << "I work as a " << occupation << ".\n";
}













