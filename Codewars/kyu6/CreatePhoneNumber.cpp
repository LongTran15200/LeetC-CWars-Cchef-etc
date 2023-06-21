#include <string>

std::string createPhoneNumber(const int arr[10]) {
    std::string phoneNumber = "(";
    for (int i = 0; i < 3; i++) {
        phoneNumber += std::to_string(arr[i]);
    }
    phoneNumber += ") ";

    for (int i = 3; i < 6; i++) {
        phoneNumber += std::to_string(arr[i]);
    }
    phoneNumber += "-";

    for (int i = 6; i < 10; i++) {
        phoneNumber += std::to_string(arr[i]);
    }

    return phoneNumber;
}//returning formatted phoneNumber in steps.



/*System sample test
using arr = int [10];

Describe(CreatePhoneNumber) {
    It(BasicTests) {
        Assert::That(createPhoneNumber(arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}), Equals("(123) 456-7890"));
        Assert::That(createPhoneNumber(arr{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}), Equals("(111) 111-1111"));
        Assert::That(createPhoneNumber(arr{1, 2, 3, 4, 5, 6, 8, 8, 0, 0}), Equals("(123) 456-8800"));
        Assert::That(createPhoneNumber(arr{0, 2, 3, 0, 5, 6, 0, 8, 9, 0}), Equals("(023) 056-0890"));
        Assert::That(createPhoneNumber(arr{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}), Equals("(000) 000-0000"));
    }
};
*/
