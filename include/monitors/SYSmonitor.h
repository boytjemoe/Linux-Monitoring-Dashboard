#pragma once

#include <string>

class LinuxParser {
    public:
        std::string getOS() const;
    
    private:
        std::string readOS(std::string OSpath) const;
};
