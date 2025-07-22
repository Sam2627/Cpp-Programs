#include <iostream>

class Vehicle
{
public:
    std::string name;
    std::string manufacturer;

    // Constructors
    Vehicle(std::string name, std::string manufacturer)
    {
        this->name = name;
        this->manufacturer = manufacturer;
    }

    void VehicleInfo(Vehicle &vehicle)
    {
        std::cout << "Vehicle name: " << vehicle.name << '\n';
        std::cout << "Vehicle manufacturer: " << vehicle.manufacturer << '\n';
    }
};

int main()
{
    Vehicle vehicleA("Future 2024", "Honda");

    std::cout << &vehicleA << '\n';

    vehicleA.VehicleInfo(vehicleA);

    return 0;
}