#include <vector>

double calcAverage(const std::vector<int>& values){
      double sum = 0.0;
    int count = 0;

    for (const double& values : values) {
        sum += values;
        count++;
    }

    if (count == 0) {
        return 0.0;  // To handle the case of an empty list
    }

    return sum / count;
}
