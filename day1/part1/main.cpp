#include <iostream>
#include <string>
#include <fstream>


int main(int argc, char* argv[]){
    std::ifstream infile(argv[1]);
    std::string line;
    int total =0; 
    while(infile >> line){
        int front =0;
        int back = line.size()-1;
        while(!isdigit(line[front])){
            front++;
        }
        std::cout << line[front] << std::endl;
        while(!isdigit(line[back])){
            back--;
        }

        std::cout << ((line[front]-'0')*10) + (line[back]-'0') << std::endl;
        total += ((line[front]-'0')*10) + (line[back]-'0');

    }
    std::cout << total << std::endl;


    return 1;
}