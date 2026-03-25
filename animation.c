#include<stdio.h>
#include<math.h>
#include<windows.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

int main() {
    //info 
    float angle;
    
    //elements
    char ball = '*';
    char ground = '|';


    //graph reaching top
    float x;         
    float y;
    int spaces;
    float radian=360;
    int peak_height;


    //calculating the area
    int height;

    //user input
    printf("Enter projectile angle:");
    scanf("%f", &angle);

    while (angle < 0 || angle > 90) {
        printf("Please enter a valid projectile angle angle:");
        scanf("%f", &angle);
    }


    //calculating different angles
    float angle_radians = angle * M_PI / 180;
    float multiplyer = tan(angle_radians);

    //calculating peak height
    peak_height = 2 * 180 / tan(angle_radians);

    //animaiton
    for (int  x = 0;  x < peak_height; x+=1) {
        //calculating y
        radian = x * M_PI / 180;
        y = sin(multiplyer * radian) * 100;

        //interpreting y to spaces
        spaces = (int)(y);
        height = spaces;

        //animation reaching the top
        if (spaces > -1) {
            printf("%c", ground);
            for (int i = 0; i < spaces; i++) {
                printf(" ");
            } 
        
            printf("%c", ball);
            printf("%d\n", height);
            //delay time 
            Sleep(spaces / 4);        
        }
    }

    return 0;
}
