#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    // Getter for make
    std::string getMake() const {
        return make;
    }

    // Setter for make
    void setMake(const std::string& newMake) {
        make = newMake;
    }

    // Getter for model
    std::string getModel() const {
        return model;
    }

    // Setter for model
    void setModel(const std::string& newModel) {
        model = newModel;
    }

    // Getter for year
    int getYear() const {
        return year;
    }

    // Setter for year
    void setYear(int newYear) {
        if (newYear >= 1886) // Considered the year of the first automobile
            year = newYear;
        else
            std::cerr << "Invalid year!" << std::endl;
    }
};

int main() {
    Car car;

    // Setting values using setters
    car.setMake("Toyota");
    car.setModel("Camry");
    car.setYear(2022);

    // Getting values using getters
    std::cout << "Make: " << car.getMake() << std::endl;
    std::cout << "Model: " << car.getModel() << std::endl;
    std::cout << "Year: " << car.getYear() << std::endl;

    // Attempting to set an invalid year (should trigger error message)
    car.setYear(1800);

    return 0;
}
