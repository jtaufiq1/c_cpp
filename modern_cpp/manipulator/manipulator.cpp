#include "manipulator.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

// print()
void print(const string str)
{
    cout << str << "\n";
}
void print(double d)
{
    cout << d << "\n";
}
void print(const string str, const double mean)
{
    cout << str << " " << mean << "\n";
}
void print(const string str, const int min_max)
{
    cout << str << " " << min_max << "\n";
}
void print(const vector<int> num_list)
{
    cout << "[";
    for(auto num : num_list) {
        cout << " " << num;
    }
    cout << ((num_list.size() == 0) ? "]" : " ]") << "\n";
}

// Program Title
void title(const string title)
{
    const string program_title = title;
    const string insert_space(program_title.size(), ' ');
    const string PAD_LEFT { "* " };
    const string PAD_RIGHT { " *" };
    const string border_asteriks = PAD_LEFT + insert_space + PAD_RIGHT;
    const string top_border(border_asteriks.size(), '*');

    const short TAB_SIZE { 4 };
    const string TAB(TAB_SIZE, '\t');

    print(TAB + top_border);
    print(TAB + border_asteriks);
    print(TAB + PAD_LEFT + program_title + PAD_RIGHT);
    print(TAB + border_asteriks);
    print(TAB + top_border);
}

/** Program Menu
 *  P - Print Numbers
 *  A - Add numbers
 *  M - Display mean of numbers
 *  S - Display the smallest number
 *  L - Display the largest number
 *  Z - More Options
 *  Q - Quit
 *
 *  Enter your choice:
 */
char menu()
{
    cout << "\nP - Print Numbers\n"
         << "A - Add Number(s)\n"
         << "M - Display mean of the numbers\n"
         << "S - Display the Smallest Number\n"
         << "L - Display the Largest Number\n"
         << "Z - More Features\n"
         << "Q - Quit\n";

    char choice {};
    cout << "\nEnter your choice: ";
    cin >> choice;

    return choice;
}

// add_number()
void add_number(std::vector<int>& num_list)
{
    cout << "add number: ";
    int number {};
    cin >> number;
    if(number || number == 0) {
        num_list.push_back(number);
        cout << number << " added\n";
    }
}
// calculate_mean()
double calculate_mean(const std::vector<int> num_list)
{
    auto sum { 0 };
    auto list_size { num_list.size() };
    auto mean { 0.0 };
    for(auto n : num_list) {
        sum += n;
    }
    return mean = (sum / list_size);
}
void mean(const std::vector<int> num_list)
{
    if(num_list.empty()) {
        print("Unable to calculate the mean - no data");
    } else {
        print("Mean:", calculate_mean(num_list));
    }
}
// max_number()
void max_number(const std::vector<int> num_list)
{
    auto max_num { 0 };
    if(num_list.empty()) {
        print("Unable to determine the largest number - list is empty");
    } else if(num_list.size() <= 2) {
        max_num = ((num_list.size() == 2) ? max(num_list.at(0), num_list.at(1)) : num_list.at(0));
    } else {
        auto tmp_max { num_list.at(0) };
        max_num = tmp_max;

        for(uint32_t i { 0 }, j { 1 }; i < num_list.size() - 1; i++, j++) {
            auto num_m { num_list.at(i) };
            auto num_n { num_list.at(j) };

            tmp_max = max(num_m, num_n);
            max_num = max(tmp_max, max_num);
        }
        print("The largest number is ", max_num);
    }
}
// min_number()
void min_number(const vector<int> num_list)
{
    auto min_num { 0 };
    if(num_list.empty()) {
        print("Unable to the determine the smallest number - list is empty");
    } else if(num_list.size() <= 2) {
        min_num = ((num_list.size() == 2) ? min(num_list.at(0), num_list.at(1)) : num_list.at(0));
    } else {
        auto tmp_min { num_list.at(0) };
        min_num = tmp_min;

        for(uint32_t i { 0 }, j { 1 }; i < num_list.size() - 1; i++, j++) {
            auto num_m { num_list.at(i) };
            auto num_n { num_list.at(j) };

            tmp_min = min(num_m, num_n);
            min_num = min(tmp_min, min_num);
        }

        print("The smallest number is ", min_num);
    }
}
//+ implement advance (more) options feature more()
//+ search()
//+ clear_list()
//+ Disallow duplicates

// Define Min and Max function
int max(const int x, const int y)
{
    int max { x };
    if(y > x) {
        max = y;
    }
    return max;
}

int min(const int m, const int n)
{
    int min { m };
    if(n < m) {
        min = n;
    }
    return min;
}
