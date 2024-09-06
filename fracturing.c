#include <stdio.h> 
#include <math.h>

#define PI 3.14159

double askForUserInput(char *question) {
    double i;

    printf("%s", question);
    scanf("%lf", &i);
    return i;
}

void outputPoints(double p1, double p2, double p3, double p4){
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf \n", p1, p2);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf \n", p3, p4);
}

double calculateDistance() {
    double x1 = askForUserInput("x1: ");
    double y1 = askForUserInput("y1: ");
    double x2 = askForUserInput("x2: "); 
    double y2 = askForUserInput("y2: ");

    outputPoints(x1, y1, x2, y2);

    double distance = fabs(y2 - y1) / fabs(x2 - x1);

    printf("The distance between the two points is %.2lf \n", distance);

    return 1.0;
}

double calculatePerimeter() {
    double x1 = askForUserInput("x1: ");
    double y1 = askForUserInput("y1: ");
    double x2 = askForUserInput("x2: "); 
    double y2 = askForUserInput("y2: ");

    outputPoints(x1, y1, x2, y2);
    double distance = fabs(y2 - y1) / fabs(x2 - x1);

    double perimeter = PI*(distance);

    printf("The perimeter of the city encompassed by your request is %.2lf \n", perimeter);

    return 2;
}

double calculateArea() {
    double x1 = askForUserInput("x1: ");
    double y1 = askForUserInput("y1: ");
    double x2 = askForUserInput("x2: "); 
    double y2 = askForUserInput("y2: ");

    outputPoints(x1, y1, x2, y2);

    double distance = fabs(y2 - y1) / fabs(x2 - x1);

    double Area = powf(distance/2, 2)*PI;

    printf("The area of the city encompassed by your request is %.2lf \n", Area);

    return 2;
}


double calculateWidth() {
    double x1 = askForUserInput("x1: ");
    double y1 = askForUserInput("y1: ");
    double x2 = askForUserInput("x2: "); 
    double y2 = askForUserInput("y2: ");

    outputPoints(x1, y1, x2, y2);

    double width = fabs(x2 - x1);

    printf("The width of the city encompassed by your request is %.2lf \n", width);

    return 2;
}


double calculateHeight() {
    double x1 = askForUserInput("x1: ");
    double y1 = askForUserInput("y1: ");
    double x2 = askForUserInput("x2: "); 
    double y2 = askForUserInput("y2: ");

    outputPoints(x1, y1, x2, y2);

    double height = fabs(y2 - y1);

    printf("The height of the city encompassed by your request is %.2lf \n", height);

    return 2;
}
int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

