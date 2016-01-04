#include <windows.h>
#include <ctime>
int X, Y, sX, sY, gX, gY, A, B;
HDC Desktop = GetWindowDC(NULL);
 
int main()
{
    X = GetSystemMetrics(SM_CXSCREEN);
    Y = GetSystemMetrics(SM_CYSCREEN);
     
    srand(time(0));
    while(1)
    {
            sX = rand() % X;
            sY = rand() % Y;
             
            gX = rand() % X;
            gY = rand() % Y;
             
            for( B = 0; B < 60; B++)
            {
                 for(A = 0; A < 60; A++)
                 { 
                       SetPixel( Desktop, ( sX + A ), ( sY + B ), GetPixel( Desktop, ( gX + A ), ( gY + B ) ) );
                 }
            }
    }
}
