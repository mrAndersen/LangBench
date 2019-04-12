#include <fstream>
#include <vector>

int main() {
    std::ifstream file("./set.txt");
    std::string buf = {};
    std::vector array = {};

    while (std::getline(file, buf)) {
        if (!buf.empty()){
            array.push_back(buf);
        }
    }


}