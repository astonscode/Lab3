#include <iostream>
#include <iomanip>

int main()
{
   int base_sal;
   const float INCREASE = 1.076;

   std::cout << "Salary: $";
   std::cin >> base_sal;

   double adjusted_sal = base_sal * INCREASE;
   double retro_pay = adjusted_sal - base_sal;
   double monthly_sal = adjusted_sal / 12;

   std::cout << std::fixed << std::setprecision(2);
   std::cout << "New Salary at 7.6% incr: $" << adjusted_sal << "\n"
             << "Retro pay: $" << retro_pay << "\n"
             << "Monthly pay: $" << monthly_sal;

   return 0;
}
