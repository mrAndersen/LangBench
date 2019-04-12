#include <fstream>
#include <vector>
#include <chrono>

#define START_TIMER std::chrono::high_resolution_clock::now()
#define END_TIMER_MS std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start).count()

int main() {
    std::ifstream file("../set.txt");
    std::string buf = {};
    std::vector<std::string> array = {};

    while (std::getline(file, buf)) {
        if (!buf.empty()) {
            array.push_back(buf);
        }
    }

    auto start = START_TIMER;
    int i = 0;

    for (auto &string:array) {
        if (string.find("abcde") != std::string::npos) {
            i++;
        }
    }

    auto end = END_TIMER_MS;
    printf("C++ in %dms - %d\n", end, i);
}