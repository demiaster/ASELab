#include "Image.h"

Image::Image(size_t _width, size_t _height, size_t _depth)
{
    m_width = _width;
    m_height = _height;
    m_pixelDepth = _depth;
    m_data.reset(new unsigned char [_width * _height * _depth]);
}

void Image::setPixel(size_t _x, size_t _y,
              unsigned char _r,
              unsigned char _g,
              unsigned char _b)
{
    size_t index = (_y * m_width * m_pixelDepth) + (_x * m_pixelDepth);
    m_data[index] = _r;
    m_data[index + 1] = _g;
    m_data[index + 2] = _b;
}

void Image::clearScreen(unsigned char _r,
                 unsigned char _g,
                 unsigned char _b)
{
    for(int y = 0; y < m_height; ++y)
    {
        for(int x = 0; x < m_width; ++x)
        {
            setPixel(x, y, _r, _g, _b);
        }
    }
}

bool Image::save(const std::string &_fname) const
{

}
