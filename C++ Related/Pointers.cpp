//Introducing Pointers 
//Let's start with a code that wasn't a pointer and compare it to the output why is it important to have pointers(depending on the situation)

#include <iostream>

using namespace std;


int main() {

  
    int num1 = 11;
    int num2 = num1;

  //num1 variable is changed to 22
    num1 = 22;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

}


/*
Output
num1 = 22
num2 = 11
*/  

//Now let's try with pointers
#include <iostream>

using namespace std;


int main() {

    int* num1 = new int(11);
    int* num2 = num1;

    *num1 = 22;

    cout << "num1 = " << *num1 << endl;
    cout << "num2 = " << *num2 << endl;

}


/*
Output
num1 = 22
num2 = 22
*/

//In other word, without pointers switching variables will be independent.








