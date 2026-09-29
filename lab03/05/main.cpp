#include <iostream>
#include <map>
#include <string>
#include <vector>

typedef std::map<std::string, std::vector<int>> Journal;
typedef unsigned long long Money;

double average(const std::vector<int>& marks) {
    int sum = 0;
    for (int m : marks) sum += m;
    return static_cast<double>(sum) / marks.size();
}

int main() {
    Journal journal = {{"Anna", {5, 4, 5}}, {"Oleg", {3, 4, 4, 5}}};

    for (auto it = journal.begin(); it != journal.end(); ++it)
        std::cout << it->first << ": " << average(it->second) << "\n";

    int sum = 7, count = 2;
    std::cout << "sum / count = " << sum / count
              << ", static_cast<double>(sum) / count = " << static_cast<double>(sum) / count << "\n";

    double price = 199.99;
    int rubles = static_cast<int>(price);
    std::cout << "rubles = " << rubles << "\n";

    Money salary = 150000;
    decltype(salary) bonus = salary / 10;
    std::cout << "bonus = " << bonus << ", sizeof(bonus) = " << sizeof(bonus) << "\n";

    std::vector<int> v = {1, 2, 3};
    decltype(v.size()) n = v.size();
    std::cout << "n = " << n << "\n";

    int arr[] = {10, 20, 30, 40, 50};
    std::cout << "sizeof(arr) = " << sizeof(arr)
              << ", elements = " << sizeof(arr) / sizeof(arr[0]) << "\n";
    std::cout << "sizeof(char) = " << sizeof(char) << ", sizeof(int) = " << sizeof(int)
              << ", sizeof(double) = " << sizeof(double) << ", sizeof(long) = " << sizeof(long) << "\n";
    return 0;
}
