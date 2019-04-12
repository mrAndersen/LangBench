#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include <string>
#include <vector>
#include <random>
#include <fstream>

std::random_device dev;
std::mt19937 rng(dev());

std::string random_string() {

    std::string buf = "";
    std::vector allowed = {"a", "b", "c", "d", "e", "f", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};

    for (int i = 0; i < 20; ++i) {
        std::uniform_int_distribution<std::mt19937::result_type> dist6(0, allowed.size() - 1);
        auto rnd = dist6(rng);

        buf.append(allowed[rnd]);
    }

    return buf;
}

int main(int argc, char *argv[]) {
    int max = 1000000;

    std::ofstream file;
    file.open("set.txt");

    for (int i = 0; i < max; ++i) {
        file << random_string() << "\n";
        printf("\r%d/%d", i, max);
    }

    printf("\n");
}