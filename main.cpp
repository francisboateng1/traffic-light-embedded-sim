#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;

// Function to simulate RED light
void redLight()
{
    cout << "RED light ON" << endl;
    this_thread::sleep_for(seconds(5));
}

// Function to simulate GREEN Light

void greenLight()
{
    cout << "GREEN light ON" << endl;
    this_thread::sleep_for(seconds(5));
}

// Function to simulate YELLOW Light

void yellowLight()
{
    cout << "YELLOW Light ON" << endl;
    this_thread::sleep_for(seconds(2));
}
int main()
{
    // Infinite loop to simulate embedded system

    while (true)
    {
        redLight();
        greenLight();
        yellowLight();
    }
    return 0;
}