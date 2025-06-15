// File: filelister.cpp
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

bool is_unsigned(std::string& line) {
    if (line.empty() || line.size() > 9) return false;
    for (unsigned int i = 0; i < line.size(); i++) {
        if (line[i] < '0' || line[i] > '9') return false;
    }
    return true;
}

int main() {
    std::vector<std::string> entries;
    std::string line = "EXIT";
    entries.push_back(line);

    std::ifstream infile;
    infile.open(".filelist.txt");
    if (!infile.is_open()) {
        std::cerr << "ERROR: Could not open filelist" << std::endl;
        return 1;
    }
    while (std::getline(infile, line)) entries.push_back(line);
    infile.close();

    std::cout << "----- Select a file -----" << std::endl << std::endl;
    for (unsigned int i = 0; i < entries.size(); i++) {
        if (i < 10) {
            std::cout << "  " << i << " - " << entries[i] << std::endl;
        }
        else if (i < 100) {
            std::cout << " " << i << " - " << entries[i] << std::endl;
        }
        else {
            std::cout << i << " - " << entries[i] << std::endl;
        }
    }
    std::cout << std::endl << "Enter file index: ";

    std::cin >> line;
    if (!is_unsigned(line)) {
        std::cerr << "ERROR: User input was too large or not an unsigned int" << std::endl;
        return 1;
    }
    unsigned int index = std::stoul(line);
    if (index == 0 || index >= entries.size()) {
        std::cout << "Exiting..." << std::endl;
        return 1;
    }
    std::cout << "File selected: " << entries[index] << std::endl;

    std::ofstream outfile;
    outfile.open(".filelist.txt");
    if (!outfile.is_open()) {
        std::cerr << "ERROR: Could not open filelist" << std::endl;
        return 1;
    }
    outfile << entries[index] << std::endl;
    outfile.close();
    return 0;
}
