#include <iostream>
#include <map>
#include <string>

int main() {
    // Create a map to store countries and their currencies
    std::map<std::string, std::string> countryCurrencyMap;

    // Add some sample data
    countryCurrencyMap["United States"] = "US Dollar";
    countryCurrencyMap["United Kingdom"] = "British Pound";
    countryCurrencyMap["Germany"] = "Euro";
    countryCurrencyMap["Japan"] = "Japanese Yen";
    countryCurrencyMap["Canada"] = "Canadian Dollar";
    countryCurrencyMap["Australia"] = "Australian Dollar";
    // Add more countries and currencies as needed

    // Display the Country-Currency chart
    std::cout << "Country-Currency Chart:" << std::endl;
    std::cout << "-----------------------" << std::endl;

    /*
    I don't know what stuff is happened here...
    */

    for (const auto& pair : countryCurrencyMap) {
        std::cout << pair.first << " - " << pair.second << std::endl;
    }

    return 0;
}
