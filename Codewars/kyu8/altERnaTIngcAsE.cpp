#include <string>
#include <cstddef>

std::string toAlternatingCase(const std::string& str) {
    std::string result = str;

    for (size_t i = 0; i < result.length(); i++) {
        if (std::islower(result[i]))
            result[i] = std::toupper(result[i]);
        else if (std::isupper(result[i]))
            result[i] = std::tolower(result[i]);
    }

    return result;
}
