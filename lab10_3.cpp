//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>   
#include <sstream>   
using namespace std;

int main()
{
        int count = 0;                 
        float sum = 0;                 
        float sum_of_square = 0;       
        string textline;

        ifstream source("score.txt");  

        while (getline(source, textline))   
        {
                float value = atof(textline.c_str());  
                sum += value;
                sum_of_square += value * value;
                count++;
        }

        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << sum / count << "\n";
        cout << "Standard deviation = " 
             << sqrt((sum_of_square / count) - pow(sum / count, 2)) << "\n";

        return 0;
}