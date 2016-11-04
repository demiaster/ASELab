#include <iostream>
#include <cstdlib>

#include <random>

#include "Image.h"

int main()
{

    constexpr size_t width = 1024;
    constexpr size_t heigth = 1024;

    std::cout<<"testing image\n";
    Image image(width, heigth);
    image.clearScreen(255, 255, 255);
    image.save("red.png");

    std::random_device rd;
    std::default_random_engine re(rd());
    std::uniform_int_distribution<> color(0, 255);
    std::uniform_int_distribution<> posx(0, width - 1);
    std::uniform_int_distribution<> posy(0, heigth - 1);

    for(int i = 0; i < 123456; ++i)
    {
        image.setPixel(posx(re), posy(re),
                       (unsigned char) color(re),
                       (unsigned char) color(re),
                       (unsigned char) color(re));
    }
    image.save("random.png");
    return EXIT_SUCCESS;
}
