#pragma once

#include <string>

class CPUmonitor {
    public:
        float getCPUusage() const;
    
    private:
        float ReadCPUusage(std::string CPUpath) const;
};