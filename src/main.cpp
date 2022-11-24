#include <iostream>

#include <nlohmann/json.hpp>
#include "person.hpp"

using json = nlohmann::json;

int main(int argc, const char* argv[])
{
    person p = { "Ned Flanders", "744 Evergreen Terrace", 60 };

    // convert to JSON: copy each value into the JSON object
    json j;
    j["name"] = p.name;
    j["address"] = p.address;
    j["age"] = p.age;

    // ...

    // convert from JSON: copy each value from the JSON object
    person pp{
        j["name"].get<std::string>(),
        j["address"].get<std::string>(),
        j["age"].get<int>()
    };

    std::cout << j << std::endl;

    return 0;
}