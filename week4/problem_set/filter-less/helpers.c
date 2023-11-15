#include "helpers.h"
#include <math.h>

#define RED_COLOR 0
#define GREEN_COLOR 1
#define BLUE_COLOR 2

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    //conertujemy pixele na czarno baialem  czyli rgb musi miec ra sama wartosc
    // obrazt ot tablica [][] wiec mamay obraz jakby 2D jak szachownica podzielony na pixele
    // zeby dostac sie do opowiedniego framgemnut mausimy podac wsporzedne x y
    // [x] to jakby szerokosc weight [y] to bedzie wysokosci czyli heiht
    for(int y = 0; y < height; y++)
    {
        for(int x =0; x < width; x++)
        {
            // odlczmy sa srednia z takie nasycenia kolorami zeby potem przelozyc to na ilosc nasycnia szaorccia dla pixela
            int rgbGray = round((image[y][x].rgbtBlue) + (image[y][x].rgbtRed) + (image[y][x].rgbtGreen) / 3.0);

            // teraz przypiszemy te wartosci pod wartosci pixela dla rbg ustalajac je ten sam pozom
            image[y][x].rgbtBlue = rgbGray;
            image[y][x].rgbtRed = rgbGray;
            image[y][x].rgbtGreen = rgbGray;


        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // maska colorow dla sepia z tresci zadania
    // sepiaRed = .393 * originalRed + .769 * originalGreen + .189 * originalBlue
    // sepiaGreen = .349 * originalRed + .686 * originalGreen + .168 * originalBlue
    // sepiaBlue = .272 * originalRed + .534 * originalGreen + .131 * originalBlue
    // dzialamy na podobnej zadzie jak w przypadku plki z czarno biaelgo

    for( int y = 0; y < height; y++)
    {
        for(int x = 0; x < width; x++)
        {
            // dodajemu maske kolorow
            int sepiaRed = round( .393 * (image[y][x].rgbtRed) + .769 * (image[y][x].rgbtGreen) + .189 * (image[y][x].rgbtBlue) );
            int sepiaGreen = round( .349 * (image[y][x].rgbtRed) + .686 * (image[y][x].rgbtGreen) + .168 * (image[y][x].rgbtBlue) );
            int sepiaBlue = round( .272 * (image[y][x].rgbtRed) + .534 * (image[y][x].rgbtGreen) + .131 * (image[y][x].rgbtBlue) );

            image[y][x].rgbtBlue = fmin(255, sepiaBlue);
            image[y][x].rgbtRed = fmin(255, sepiaRed);
            image[y][x].rgbtGreen = fmin(255, sepiaGreen);
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // na podstawie typu RGBTRIPLE (structury) definiujacej pixela tworzymy zmienna ktora bedzie przechowywac tymczasowow pixela
    RGBTRIPLE temp;
    // lustrzane odbicie horyzonatlanie wiec z lewa na parawa
    for(int y = 0; y < height; y++)
    {
        // dzielimy width przez dwa bo jest to symetryczne mamy parysta ilosc pixeli wiec jak spokpiuemy polowe to reszta juz utwi sie odpowiednio
        for(int x = 0; x < width / 2; x ++)
        {
            // przy pomocy takie copioawania i petli for robimy sobie podmiane odejmujemy na koncu -1 poniewaz ostanit lement tablicy to height -1
            temp = image[y][x];
            image[y][x] = image[y][width - x - 1];
            image[y][x] = image[y][width - x - 1] = temp;
        }

    }

    return;
}



// Blur image
int getBlur(int i, int j, int height, int width, RGBTRIPLE image[height][width], int color_position)
{
    float count = 0;
    int sum = 0;
    for(int y = i -1; y <= (i + 1); y++)
    {
        for(int x = j - 1; x <= (j + 1); x++)
        {
            if(y < 0 || y >= height || x < 0 || x >= width)
            {
                continue;
            }
            if(color_position == RED_COLOR)
            {
                sum += image[y][x].rgbtRed;
            }
            else if(color_position == GREEN_COLOR)
            {
                sum += image[y][x].rgbtGreen;
            }
            else if(color_position == BLUE_COLOR)
            {
                sum += image[y][x].rgbtBlue;
            }
            count ++;
        }

    }
    return round(sum/count);
}

void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copy;
    for(int y = 0; y < height; y++)
    {
        for(int x = 0; x < width; x ++)
        {
            image[y][x].rgbtRed = getBlur(y, x, height, width, image, RED_COLOR);
            image[y][x].rgbtGreen = getBlur(y, x, height, width, image, GREEN_COLOR);
            image[y][x].rgbtBlue = getBlur(y, x, height, width, image, BLUE_COLOR);

        }


    }

}
