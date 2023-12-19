#include <iostream>
#include <string>
#include <fstream>
#include <unordered_map> 
#include <map>


int main(int argc, char* argv[]){
    std::ifstream infile(argv[1]);
    std::string line;
    int total =0;

    std::unordered_map<std::string, int> values;
    values.insert({"one",1});
    values.insert({"two",2});
    values.insert({"three",3});
    values.insert({"four",4});
    values.insert({"five",5});
    values.insert({"six",6});
    values.insert({"seven",7});
    values.insert({"eight",8});
    values.insert({"nine",9});

    int count =0;
    while(infile >> line){
        int front =0;
        int back = line.size()-1;
        std::string tmp3 = "";
        std::string tmp4 = "";
        std::string tmp5 = "";
        std::string frontNum = "";
        std::string backNum = "";
        if(front+3<line.size()){
            tmp3 = line.substr(front, 3);
        }
        if(front+4<line.size()){
            tmp4 = line.substr(front, 4);
        }
        if(front+5<line.size()){
            tmp5 = line.substr(front,5);
        }
        std::cout << "front"<< tmp3 << " " << tmp4 << " " << tmp5 << std::endl;
        while(!isdigit(line[front])){
            if(front+4 < line.size()){
                std::cout << "bro" << std::endl;
            }
            if(values.find(tmp4) != values.end()){
                std::cout << "should work" << std::endl;
            }
            if(front+4 < line.size() && values.find(tmp4) != values.end()){
                std::cout << "really should work" << std::endl;
            }
            if((front+3 < line.size() && values.find(tmp3) != values.end()) ||\
              (front+4 < line.size() && values.find(tmp4) != values.end()) || \
              (front+5 < line.size() && values.find(tmp5) != values.end())){
                std::cout << "HUHHH?" << std::endl;
              }
            if((front+3 < line.size() && values.find(tmp3) != values.end()) ||\
              (front+4 < line.size() && values.find(tmp4) != values.end()) || \
              (front+5 < line.size() && values.find(tmp5) != values.end())){
                if(values.find(tmp3) != values.end())
                    frontNum = tmp3;
                else if(values.find(tmp4) != values.end())
                    frontNum = tmp4;
                else if(values.find(tmp5) != values.end())
                    frontNum = tmp5;
                break;
            }
            front++;
            if(front+3<line.size()){
                tmp3 = line.substr(front, 3);
            }
            if(front+4<line.size()){
                tmp4 = line.substr(front, 4);
            }
            if(front+5<line.size()){
                tmp5 = line.substr(front,5);
            }
            if(values.find(tmp4) != values.end()){
                std::cout << "HOWW" << std::endl;
            }
            std::cout << "front" << tmp3 << " " << tmp4 << " " << tmp5 << std::endl;
        }
        if(back-3>=0){
            tmp3 = line.substr(back-2, 3);
        }
        if(back-4>=0){
            tmp4 = line.substr(back-3, 4);
        }
        if(back-5>=0){
            tmp5 = line.substr(back-4, 5);
        }
        std::cout << "back"<< tmp3 << " " << tmp4 << " " << tmp5 << std::endl;
        while(!isdigit(line[back])){
            if((back-3 >= 0 && values.find(tmp3) != values.end()) ||\
              (back-4 >=0 && values.find(tmp4) != values.end()) ||\
              (back-5 >=0 && values.find(tmp5) != values.end())){
                if(values.find(tmp3) != values.end())
                    backNum = tmp3;
                else if(values.find(tmp4) != values.end())
                    backNum = tmp4;
                else if(values.find(tmp5) != values.end())
                    backNum = tmp5;
                break;
            }
            back--;
            if(back-3>=0){
                tmp3 = line.substr(back-2, 3);
            }
            if(back-4>=0){
                tmp4 = line.substr(back-3, 4);
            }
            if(back-5>=0){
                tmp5 = line.substr(back-4, 5);
            }
            std::cout << "back" << tmp3 << " " << tmp4 << " " << tmp5 << std::endl;
        }

        if(isdigit(line[front])){
            total += (line[front]-'0')*10;
            std::cout << "front" << std::endl;
            std::cout << line[front] << std::endl;
        }
        else{
            std::cout << "front" << std::endl;
            std::cout << tmp3 << " " << tmp4 << " " << tmp5 << std::endl;
            if(values.find(tmp3) != values.end()){
                std::cout << tmp3 << std::endl;
                total += values[tmp3]*10;
            }
            else if(values.find(tmp4) != values.end()){
                std::cout << tmp4 << std::endl;
                total += values[tmp4]*10;
            }
            else if(values.find(tmp5) != values.end()){
                std::cout << tmp5 << std::endl;
                total += values[tmp5]*10;
            }
        }
        if(isdigit(line[back])){
            total += line[back]-'0';
            std::cout << "back" << std::endl;
            std::cout << line[back] << std::endl;
        }
        else{
            std::cout << "back" << std::endl;
            std::cout << tmp3 << " " << tmp4 << " " << tmp5 << std::endl;
            if(values.find(tmp3) != values.end()){
                std::cout << tmp3 << std::endl;
                total += values[tmp3];
            }
            else if(values.find(tmp4) != values.end()){
                std::cout << tmp4<< std::endl;
                total += values[tmp4];
            }
            else if(values.find(tmp5) != values.end()){
                std::cout << tmp5<< std::endl;
                total += values[tmp5];
            }
        }
        if(count==10){
            break;
        }
        count++;
    }
    std::cout << total << std::endl;


    return 1;
}