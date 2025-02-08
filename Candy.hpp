// #pragma once
// #include <iostream>
// #include <string>

// class Candy
// {
// public:
//     // Constructor from std::string
//     Candy(const std::string& Name) : CandyName(Name) {}

//     // Constructor from const char*
//     Candy(const char* Name) : CandyName(Name) {}

//     // Copy assignment operator
//     Candy& operator=(const Candy& other)
//     {
//         if (this != &other)
//         {
//             CandyName = other.CandyName;
//         }
//         return *this;
//     }

//     // Assignment operator from std::string
//     Candy& operator=(const std::string& name)
//     {
//         CandyName = name;
//         return *this;
//     }

//     // Friend function for stream output operator
//     friend std::ostream& operator<<(std::ostream& os, const Candy& candy)
//     {
//         os << "Candy Name: " << candy.CandyName;
//         return os;
//     }

// private:
//     std::string CandyName;
// };
