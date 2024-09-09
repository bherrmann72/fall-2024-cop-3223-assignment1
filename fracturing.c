# include <stdio.h>
# include <math.h>

#define PI 3.14159

int main(void);
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double distance);
double calculateArea(double distance);
double calculateWidth(double distance);
double calculateHeight(double distance);


int main(void) {

//variables for points
double x1, y1, x2, y2;

// first point
printf("Enter the first point (x1, y1): ");
scanf("%lf, %lf", &x1, &y1);

// second point
printf("Enter the second point (x2, y2): ");
scanf("%lf, %lf", &x2, &y2);


//setting the output for the calculate distance on the main function so it doesnt have to re-input points for each other formula
double distance = calculateDistance(x1, y1, x2, y2);

//calling other functions
calculatePerimeter(distance);
calculateArea(distance);
calculateWidth(distance);
calculateHeight(distance);

return 0; }


//code for calculateDistance
double calculateDistance(double x1, double y1, double x2, double y2) {


//formula
double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

//text result
printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

printf("The distance between the two points is %lf\n", distance);

return distance; }




//code for calculatePerimeter
double calculatePerimeter(double distance) {

//diameter to radius for formula
double radius = distance / 2;

//formula for 2pir (perimeter for circle)
double perimeter = 2 * PI * radius;

//text result
printf("The perimeter of the city encompassed by your request is %f\n", perimeter);

//difficulty
return 4.0; }




//code for calculateArea
double calculateArea(double distance) {

//diameter to radius again for formula
double radius = distance / 2;

//formula for pir^2 (area of circle)
double area = PI * pow(radius, 2);

//text result
printf("The area of the city encompassed by your request is %f\n", area);

//difficulty
return 4.0; }



//code for calculateWidth
double calculateWidth(double distance) {

//same stuff
double width = distance;

//text result
printf("The width of the city encompassed by your request is %f\n", width);

//difficulty
return 2.0; }




//code for calculateHeight
double calculateHeight(double distance) {

//same stuff
double height = distance;

//text result
printf("The height of the city encompassed by your request is %f\n", height);

//difficulty
return 2.0; }