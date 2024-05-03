// C++ program to demonstrate  
// operator>>() and <<operator() 
#include <ctime> 
#include <iostream> 
#include <random> 
using namespace std; 
  
// Driver code 
int main() 
{
std::normal_distribution<double> dist(0.0, 1.0);  // Standard normal distribution
cout << dist(5) << endl;
  return 0; 
}