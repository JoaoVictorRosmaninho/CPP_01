#include <iostream>


std::string remove(std::string cmd, char ch) {
    std::string result;
    for (unsigned char index = 0; index < cmd.length(); index++) {
        if (cmd[index] != ch) {
            result += cmd[index];
        }
    }
    return (result);
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            std::string cmd = argv[i];
            for (unsigned char c = 0; c < cmd.length(); c++)  {
                cmd[c] = std::toupper(cmd[c]);
            }
            std::cout << remove(cmd, '"') << " ";
        }
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << '\n'; 

    return 0;
}