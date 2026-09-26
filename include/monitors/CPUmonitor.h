#pragma once

#include <string>
#include <vector>

class CPUmonitor {
    public:
        float getCPUusage() const;
    
    private:
        std::vector<double> readCPUusage(std::string CPUpath) const;
        double calcCPUusage() const;
        void setPrevious(std::vector<double> values);
};