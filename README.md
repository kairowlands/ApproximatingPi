Kai Rowlands

Monte Carlo Method for Approximating Pi

This program contains the program "montecarlo.cpp". To begin, compile the program with the following command: "g++ montecarlo.cpp -o montecarlo". Then, execute the program with the following command: "./montecarlo".

montecarlo.cpp approximates the value of pi using the Monte Carlo method. You can imagine this process by thinking of a circle within a square. The program generates random points within the square and returns an approximation for the value of pi by multiplying four by the ratio of points within the circle with those in the square. This process is repeated, increasing the number data points each time, the idea being that the approximation will get closer to the actual value of pi with each iteration. The program also calculates the absolute error by taking the difference of the actual value of pi with the approximated value of pi.
