#include <iostream>
#include <vector>
using namespace std;

class Calculator {
private:
    vector<double> results;
public:

    int add(int a, int b) {
        int result = a + b;
        results.push_back(result);
        return result;
    }

    float add(float a, float b) {
        float result = a + b;
        results.push_back(result);
        return result;
    }

    double add(double a, double b) {
        double result = a + b;
        results.push_back(result);
        return result;
    }

    double add(int a, double b) {
        double result = a + b;
        results.push_back(result);
        return result;
    }

    double add(double a, int b) {
        double result = a + b;
        results.push_back(result);
        return result;
    }


    void displayResults() {
        cout << "\nStored Results:\n";
        for (size_t i = 0; i < results.size(); ++i) {
            cout << "Result " << i + 1 << ": " << results[i] << endl;
        }
    }
};

int main() {
    Calculator calc;

    cout << "Adding int + int: " << calc.add(9, 10) << endl;
    cout << "Adding float + float: " << calc.add(3.8f, 3.4f) << endl;
    cout << "Adding double + double: " << calc.add(2.345, 5.678) << endl;
    cout << "Adding int + double: " << calc.add(4, 2.75) << endl;
    cout << "Adding double + int: " << calc.add(6.25, 3) << endl;


    calc.displayResults();

    cout<<endl<<"24CE050 Dhruvi Kanabar"<<endl;

    return 0;
}
