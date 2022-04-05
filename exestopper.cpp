#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;  // require c++17

int main(int argc, char** argv)
{
    std::cout << "Impersonated by exestopper." << std::endl;

    // print current working directory
    fs::path cwd = fs::current_path();
    std::cout << "  cwd: " << cwd << std::endl;

    // print command line arguments
    std::string args;
    for(int i = 1; i < argc; i++) {
        if(i > 1) args += " ";
        args += argv[i];
    }
    std::cout << "  args: " << "\"" << args << "\"" << std::endl;

    // pause
    std::cout << std::endl << "Press any key to continue..." << std::endl;
    std::cin.get();
}
