#include <stdio.h>
#include <math.h>
#include <windows.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif


// Define DELAY_TIME in milliseconds
#define DELAY_TIME 20

// Define a macro to delay each character automatically
#ifdef _WIN32
    #define DELAYED_PRINT(fmt, ...) do { \
        char buffer[1024]; \
        snprintf(buffer, sizeof(buffer), fmt, ##__VA_ARGS__); \
        for (char *ptr = buffer; *ptr; ptr++) { \
            printf("%c", *ptr); \
            fflush(stdout); \
            Sleep(DELAY_TIME); \
        } \
    } while(0)
#else
    #define DELAYED_PRINT(fmt, ...) do { \
        char buffer[1024]; \
        snprintf(buffer, sizeof(buffer), fmt, ##__VA_ARGS__); \
        for (char *ptr = buffer; *ptr; ptr++) { \
            printf("%c", *ptr); \
            fflush(stdout); \
            usleep(DELAY_TIME * 500); \
        } \
    } while(0)
#endif


int main() {
    int user_willing = 1;
  
    // Explanation
    DELAYED_PRINT("\n\nWelcome\n\nHere, we will calculate the ground hitting location of an object when\nit is launched with a certain amount of force. So, let's begin with giving\nsome information below.\n\n\n");

    //main programme structure
    while (user_willing == 1) {
        
        // User Input

        float  mass;
        DELAYED_PRINT("Mass Of the Object  :");
        scanf("%f", &mass); // entering the mass
        //ensuring accuracy
        while (mass < 0) {
            DELAYED_PRINT("Please enter a valid mass:");
            scanf("%f", &mass);
        }

        float  force;
        DELAYED_PRINT("Implemented force   :");
        scanf("%f", &force); // entering the force
        //ensuring accuracy
        while (force < 0) {
            DELAYED_PRINT("Please enter a valid amount of force:");
            scanf("%f", &force);
        }

        float  force_given_on;
        DELAYED_PRINT("Distance of giving force  :");
        scanf("%f", &force_given_on); // Assume the force was applied over 10 meters
        //ensuring accuracy
        while (force_given_on < 0) {
            DELAYED_PRINT("Please enter valid info:");
            scanf("%f", &force_given_on);
        }
        
        float  angle;
        DELAYED_PRINT("Projectile angle     :");
        scanf("%f", &angle); // entering the angle

        //ensuring accuracy
        while (angle < 0 || angle > 90) {
            DELAYED_PRINT("Please enter a valid projectile angle angle:");
            scanf("%f", &angle);
        }

        //calculating velocity
        float  initial_velocity = sqrt((2 * force * force_given_on) / mass); // kinematic equation v^2 = u^2 + 2as, here u = 0
        //processing angle
        float  angle_radians = angle * (M_PI / 180.0); // Convert degrees to radians



        //calculating the whole scenerio
        float  gravity = 9.8;
        float  distance = (initial_velocity * initial_velocity * sin(2 * angle_radians)) / gravity;

        //Animation

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
        int area = 0;
        int height;

        //calculating different angles
        float multiplyer = tan(angle_radians);

        //calculating peak height
        peak_height = 2 * 180 / tan(angle_radians);

        printf("Object launched ... ...\n");
        Sleep(400);

        //animaiton
        for (int  x = 0;  x < peak_height; x+=1) {
                
            //calculating y
             radian = x * M_PI / 180;
            y = sin(multiplyer * radian) * 100;

            //interpreting y to spaces
            spaces = (int)(y);
            height = spaces;
            area += spaces;

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

        
        //resetting the info
        mass = 0;
        force = 0;
        force_given_on = 0;
        angle_radians = 0;
        angle = 0;
        
        
        //Showing the result

                //delay 
                DELAYED_PRINT("\n\nShowing the results in\n");
                DELAYED_PRINT("3\n");
                Sleep(1000);
                DELAYED_PRINT("2\n");
                Sleep(1000);
                DELAYED_PRINT("1\n");
                Sleep(600);


        Sleep(650);
        DELAYED_PRINT("\n\nThe object travelled %.2f meters\n\n\n", distance);

        Sleep(350);
        DELAYED_PRINT("Thank You for trusting us\n\n");
        Sleep(200);

        //loop
        DELAYED_PRINT("Would you want to continue? ('1' for yes, '0' for no)\nAns: ");
        scanf("%d", &user_willing);


        //ensuring accuaracy
        while (user_willing !=0 && user_willing !=1)
        {
          DELAYED_PRINT("Pls enter a valid answer\n");
           
          DELAYED_PRINT("Would you want to continue? ('1' for yes, '0' for no)\nAns: ");
          scanf("%d", &user_willing);
        }
        if (user_willing == 0) {
            DELAYED_PRINT("Thank You\n");
        }

    }

    return 0;
}
