#pragma once

#include <string>

class LinuxParser {
    public:
        std::string getOS() const;
        float getCPUusage() const;
    
    private:
        std::string readOS(std::string OSpath) const;
        float ReadCPUusage(std::string CPUpath) const;
};

#include "LinuxParser.cc"