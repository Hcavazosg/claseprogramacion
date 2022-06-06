#include <iostream>
#include <random>

using std::cout;
using std::endl;

constexpr int MIN = 1;
constexpr int MAX = 10;

constexpr int RAND_NUMS_TO_GENERATE = 1;

int main()
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(MIN, MAX);

    for (int n = 0; n < RAND_NUMS_TO_GENERATE; ++n) {
        cout << distr(eng) << "; ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}