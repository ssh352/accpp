#include <iostream>
#include <chrono>
#include <ctime>

using namespace std::chrono;
using namespace std;

void m_function()
{
    long long number = 0;

    for( long long i = 0; i != 2000000; ++i )
    {
       number += 5;
    }
}

int main()
{
    // using chrono
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    m_function();
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    cout << duration;

    // using ctime
    clock_t startTime = clock();
    m_function();
    clock_t endTime = clock();
    clock_t clockTicksTaken = endTime - startTime;
    double timeInSeconds = clockTicksTaken / (double) CLOCKS_PER_SEC;
    cout << timeInSeconds;

    return 0;
}

