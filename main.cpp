#include <iostream>
#include <iomanip>
#include <memory>
#include <cstdint>

int main() {

  double hoursWorked;
  double rateOfPay;
  double overtimeHours;
  double salary;
  double overtime;

  std::cout << std::showpoint << std::setprecision(2) << std::fixed;

#undef INTERACTIVE_D07
#ifdef INTERACTIVE_D07
  std::cout << "hours worked " << std::endl;
  std::cin >> hoursWorked;

  std::cout << std::setw(2) << "pay rate " << std::endl;
  std::cin >> rateOfPay;

  std::cout << std::setw(3) << "overtime " << std::endl;
  std::cin >> overtimeHours;
  std::cout << std::endl;
#else
  hoursWorked = 40.0;
  rateOfPay = 25.0;
  overtimeHours = 3.0;
#endif

  overtime = overtimeHours * rateOfPay * 1.5;

  std::cout << std::setw(8) << hoursWorked << std::endl;
  std::cout << std::setw(8) << overtimeHours << std::endl;
  std::cout << std::setw(8) << rateOfPay << std::endl;
  std::cout << std::setw(8) << rateOfPay * hoursWorked << std::endl;
  std::cout << std::setw(8) << overtime << std::endl;

  salary = rateOfPay * hoursWorked + overtime;

  std::cout << std::setw(8)
            << salary
            << std::endl;

  return 0;
}
