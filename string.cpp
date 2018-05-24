#include <iostream>
#include <stdexcept>

int main()
{
    std::cout << "Basic functionality:\n";
    std::string     long_string( "Where is the end?" );
    std::string     short_string( "Ha" );


    short_string.reserve(long_string.size());
    short_string.resize(long_string.size());
    strncpy((char *)short_string.data(), long_string.data(), long_string.size());

    std::cout << short_string << std::endl;

    return 0;

}
