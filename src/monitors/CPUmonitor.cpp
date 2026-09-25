float LinuxParser::getCPUusage() const {
    return ReadCPUusage("/proc/stat");
}

float LinuxParser::ReadCPUusage(std::string CPUpath) const {
    std::string line, key;
    std::ifstream filestream(CPUpath);

    if(filestream.is_open()) {
        
}
