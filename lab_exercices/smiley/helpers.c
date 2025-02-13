#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Check if pixel is black
            if (image[i][j].rgbtRed == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtBlue == 0x00)
            {
                // Change black pixel to pink
                image[i][j].rgbtRed = 0xFF;
                image[i][j].rgbtGreen = 0xB6;
                image[i][j].rgbtBlue = 0xCB;
            }
        }
    }
}

