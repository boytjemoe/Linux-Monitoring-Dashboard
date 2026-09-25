#include "LinuxParser.h"

int main() {
    LinuxParser parser;
    std::string osName = parser.getOS();
    std::cout << "Operating System: " << osName << std::endl;
    return 0;
}