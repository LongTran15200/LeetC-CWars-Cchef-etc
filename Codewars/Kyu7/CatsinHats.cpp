#include <cmath>

class Kata
{
public:
    std::string height(int n)
    {
      double catHeight = 2000000;
      double totalHeight = 0;
      
      for (int i = 0; i < n; i++) {
        totalHeight += catHeight / 2.5;
        catHeight /= 2.5;
      }
      
      std::string result = std::to_string(round((totalHeight + 2000000) * 1000) / 1000);
      return result.substr(0, result.length() - 3);
    }
};
