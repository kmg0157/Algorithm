#include <string>
#include <vector>
#include <sstream>

using namespace std;

int calculate(const std::string& expression) {
    std::istringstream iss(expression);
    int result;
    char op;

    iss >> result;

    while (iss >> op) {
        int operand;
        iss >> operand;

        if (op == '+') {
            result += operand;
        } else if (op == '-') {
            result -= operand;
        }else if (op == '*') {
            result *= operand;
        }
    }

    return result;
}
int solution(string binomial) {
    std::istringstream iss(binomial);
    std::string part;
    int result = 0;

    while (std::getline(iss, part, '+')) {
        result += calculate(part);
    }

    return result;
}