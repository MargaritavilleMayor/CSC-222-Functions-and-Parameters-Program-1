// CSC-222 Functions and Parameters Program 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

//Input: 2 x,y coordinates
//Operation: finds distance with the distance formula
//Output: distance between the 2 points
double calcDistance(double x1, double y1, double x2, double y2);

//Input: 2 x,y coordinates
//Operation: sends coordinates into calcDistance function
//Output: radius of a circle
double calcRadius(double x1, double y1, double x2, double y2);

//Input: radius
//Operation: uses radius to calculate the circumference
//Output: circumference
double calcCircumference(double radius);

//Input: radius
//Operation: uses radius to calculate the area
//Output: area
double calcArea(double radius);
const double pi{ 3.1416 };

int main()
{
    double x1, y1, x2, y2, radius;

    //Asks user to enter in the two coordinates
    cout << "Enter the x and y coordinate of the center point of the circle seperated by a space."
        << endl;
    cin >> x1 >> y1;
    cout << "Enter the x and y coordinates of the point on the circumference seperated by a space"
        << endl;
    cin >> x2 >> y2;

    //calculates radius
    radius = calcDistance(x1, y1, x2, y2);

    //Outputs radius, circumference, and area. Also passes radius into functions to find area and circumference
    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << calcCircumference(radius) << endl;
    cout << "Area: " << calcArea(radius) << endl;
}

double calcDistance(double x1, double y1, double x2, double y2)
{
    double xdist, ydist, dist;

    xdist = x2 - x1;
    ydist = y2 - y1;
    dist = sqrt((xdist * xdist) + (ydist * ydist));
    return dist;
}

double calcRadius(double x1, double y1, double x2, double y2)
{
    double radius;

    radius = calcDistance(x1, y1, x2, y2);
    return radius;
}

double calcCircumference(double radius)
{
    double circ;
    circ = (2 * pi * radius);
    return circ;
}

double calcArea(double radius)
{
    double area;

    area = pi * radius * radius;
    return area; 
}