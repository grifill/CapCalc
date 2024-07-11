#include <stdio.h>
#include "version.h"

#include <iostream>
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>


int main(int argc, char *argv[]) {
    printf("Hello World\n");

    std::istringstream ini(R"(
    [Badgers]
    weight = 10
    color = Badger are grey and black.
    )");

    boost::property_tree::ptree bar;
    boost::property_tree::ini_parser::read_ini(ini, bar);

    std::cout << bar.get<std::string>("Badgers.weight") << std::endl;
    std::cout << bar.get<std::string>("Badgers.color") << std::endl;

    return 0;
}
