#ifndef MANIPULATOR_H_INC
#define MANIPULATOR_H_INC

#include <iostream>
#include <vector>
#include <string>

void title(std::string);
void print();
void print(const std::string);
void print(const double);
void print(const std::string, const double);
void print(const std::string, const int);
void print(const std::vector<int>);

// Main Functions/Options
char menu();
void add_number(std::vector<int>&);
void mean(const std::vector<int>);
void min_number(const std::vector<int>);
void max_number(const std::vector<int>);

// Helper functions
int max(const int, const int);
int min(const int, const int);
double calculate_mean(const std::vector<int>);

#endif
