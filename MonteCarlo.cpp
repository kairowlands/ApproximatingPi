// Kai Rowlands
// Monte Carlo Method for Approximating Pi

#include <cmath>
#include <iostream>

using namespace std;

// SquarePoints = total number of points
double estimate(int SquarePoints){
    int CirclePoints = 0;          // CirclePoints = total number of points inside unit circle

    srand(time(NULL));  // Sets seed for random number generator

    for(int i = 0; i < SquarePoints; ++i){
        double x = (double) rand() / RAND_MAX;  // rand() generates random numbers within range of [0, RAND_MAX)
        double y = (double) rand() / RAND_MAX;
        double dist = x * x + y * y;            // Distance formula, measuring from center of unit circle

        // If points are in the unit circle
        if(dist <= 1){
            CirclePoints++; // Increase amount of data points
        }
    }
    double PiEstimate = 4.0 * CirclePoints / SquarePoints;
    
    return PiEstimate;
}

int main(){
    int TotalPoints = 10;   // Total number of points included in data collection, initialize to 10
    
    // Repeat loop seven times increasing total number of points each time
    for(int i = 1; i <= 7; i++){
        double pi = estimate(TotalPoints);                          // Approximates pi accounting for increasing the number of points
        double error = abs(2 * asin(1) - estimate(TotalPoints));    // Compute the absolute error of the Monte Carlo method approximation of pi

        cout << "For N = " << TotalPoints << ", pi = " << pi << "; Error: " << error << endl;
        
        TotalPoints *= 10;  // Increases number of points by a factor of ten for four iterations
    }
    return 0;
}