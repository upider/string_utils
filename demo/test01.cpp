#include <iostream>
#include "string_utils.hpp"

int main(int argc, char *argv[])
{
    std::string s = " k/l/u ";
    auto res = StringUtils().trim(s);
    std::cout << "Source String = " << s << std::endl;

    std::cout << "===============================" << std::endl;

    std::cout << "StringUtils Trim Test result = " << res << std::endl;

    std::cout << "===============================" << std::endl;

    std::vector<std::string> v;
    StringUtils().split(s, "/", &v);
    std::cout << "StringUtils split Test result = " << std::endl;
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "===============================" << std::endl;

    res = StringUtils().replace(s, " ", "---");
    std::cout << "StringUtils repalce Test result = " << res << std::endl;

    std::cout << "===============================" << std::endl;

    res = StringUtils().replace_all(s, " ", "+");
    std::cout << "StringUtils repalce_all Test result = " << res << std::endl;

    std::cout << "===============================" << std::endl;

    size_t h = StringUtils().hash_string(s);
    std::cout << "StringUtils hash_string Test result = " << h << std::endl;
    return 0;
}
