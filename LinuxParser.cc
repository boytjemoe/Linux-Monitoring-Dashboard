#include "LinuxParser.h"

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>

std::string LinuxParser::getOS() const {
    return readOS("/etc/os-release");
}

std::string LinuxParser::readOS(std::string OSpath) const {
    
    std::string line, key, value;
    std::ifstream filestream(OSpath);

    if(filestream.is_open()) {
        //keep getting lines from the filestream
        while(std::getline(filestream, line)) {
            //each line we replace the = and " with ' ' to ensure easy parsing, we also replace ' ' with _ to ensure we dont parse inside names
            std::replace(line.begin(), line.end(), ' ', '_');
            std::replace(line.begin(), line.end(), '=', ' ');
            std::replace(line.begin(), line.end(), '"', ' ');

            std::istringstream linestream(line);

            while(linestream >> key >> value) {
                //we found the OS name we want to display
                if(key == "PRETTY_NAME") {
                    //before we return the value we restore the '_' to ' ' to ensure we display the initial correct name
                    std::replace(value.begin(), value.end(), '_', ' ');
                    return value;
                }
            }
        }
    }
    //we havent found it so we return the empty string
    return "";
}

float LinuxParser::getCPUusage() const {
    return ReadCPUusage("/proc/stat");
}

float LinuxParser::ReadCPUusage(std::string CPUpath) const {
    std::string line, key;
    std::ifstream filestream(CPUpath);

    if(filestream.is_open()) {
        
}