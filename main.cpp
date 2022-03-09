#include <iostream>

int main() {

    std::cout << "Welcome to Person CLI"
              << "\n\n";

    bool quit = false;
    while (!quit) {
        std::cout << "Main menu:"
                  << "\n";

        std::cout << "1: Print persons"
                  << "\n";
        std::cout << "2: Print individual"
                  << "\n";
        std::cout << "3: Add person"
                  << "\n";
        std::cout << "0: Exit"
                  << "\n";

        int answer;
        std::cin >> answer;// Possible issue here. What if user input is not a number?

        switch (answer) {
            case 1:

                break;
            case 2:

                break;

            case 3:

                break;
            case 0:
                quit = true;
                break;
            default:
                std::cout << "Unknown answer: '" << answer << "'"
                          << "\n"
                          << "Pleast try again.."
                          << "\n\n";
                break;
        }
    }

    return 0;
}
