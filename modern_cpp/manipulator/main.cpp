#include <vector>
#include "manipulator.hpp"

/** Challenge:
 *
 * Collection of integers
 * Perform operation(s) on list
 * Choose operation from the menu
 * Operations from menu:
 *  - Print numbers in collection, print '[ ]' if empty
 *  - Add numbers to the list
 *  - Display the mean of the numbers in the list
 *  - Display the smallest number in the list
 *  - Display the largest number in the list
 *  - Advance functions -not implemented
 *  - Quit: Goodbye ...
 *  - Prompt the user to make a selection
 *
 *  A valid choice is an uppercase and lowercase of menu items
 *  Invalid choice yields "Unknown selection, please try again"
 *  Display menu again
 */
int main()
{
    title("VECTOR MANIPULATOR");

    char choice {};
    std::vector<int> num_list {};
    do {
        choice = menu();

        switch(choice) {
        case 'p':
        case 'P':
            print(num_list);
            break;
        case 'a':
        case 'A':
            add_number(num_list);
            break;
        case 'm':
        case 'M':
            mean(num_list);
            break;
        case 's':
        case 'S':
            min_number(num_list);
            break;
        case 'l':
        case 'L':
            max_number(num_list);
            break;
        case 'z':
        case 'Z':
            // More Options/Features
            print("Not Yet implemented");
            break;
        case 'q':
        case 'Q':
            print("Exitting... Goodbye!");
            break;
        default:
            print("Unknown selection, please try again");
        }
    } while(choice != 'q' && choice != 'Q');

    return EXIT_SUCCESS;
}
