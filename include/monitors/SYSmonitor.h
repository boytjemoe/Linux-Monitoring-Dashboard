#pragma once

#include <string>

class SYSmonitor {
    public:
        std::string getOS() const;
    
    private:
        std::string readOS(std::string OSpath) const;
};
