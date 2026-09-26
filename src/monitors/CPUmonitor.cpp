#include "include/monitors/CPUmonitor.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

float CPUmonitor::getCPUusage() const {
    return 0.0f;
}

std::vector<double> CPUmonitor::readCPUusage(std::string CPUpath) const {
    std::string line, key;
    std::ifstream filestream(CPUpath);

    if(filestream.is_open()) {
        std::getline(filestream, line);

        std::istringstream linestream(line);


        
    }
       
}

double CPUmonitor::calcCPUusage() const {
    //we take cpu stats from /proc/stat as a vector
    std::vector<double> values = readCPUusage("/proc/stat");
    double user = values[0];        //normal processes executing in user moode
    double nice = values[1];        //nice processes executing in user mode
    double system = values[2];      //processes executing in kernel mode
    double idle = values[3];        //twiddling thumbs
    double iowait = values[4];      //waiting for I/O to complete
    double irq = values[5];         //servicing interrupts
    double softirq = values[6];     //servicing softirqs
    double steal = values[7];       //involuntary wait
    double guest = values[8];       //running a normal guest
    double guest_nice = values[9];  //runnign a niced guest
}

void CPUmonitor::setPrevious(std::vector<double> values) {

}
