#include <iostream>
#include <cstdlib>

#include "Image.h"

int main()
{
    std::cout<<"testing image\n";
    Image image(200, 200);
    image.clearScreen(255, 0, 0);
    image.save("red.png");
    return EXIT_SUCCESS;
}
