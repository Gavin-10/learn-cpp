#include <iostream>
#include <iomanip>

int main() {

  //flush flushes the output buffer to the final desitination
  std::cout << "this message will be sent" << std::endl << std::flush;


  //formatting spacing

  std::cout << std::left; //left justified
  std::cout << std::setfill('-'); //sets fill space to character
  std::cout << std::setw(15) << "Last Name" << std::setw(15) << "First Name" << std::setw(10) << "Age" << std::endl;
  std::cout << std::setw(15) << "Doe" << std::setw(15) << "John" << std::setw(10) << "47" << std::endl;
  std::cout << std::setw(15) << "Clarkson" << std::setw(15) << "Jeremy" << std::setw(10) << "64" << std::endl;
  std::cout << std::setw(15) << "Hammond" << std::setw(15) << "Richard" << std::setw(10) << "60" << std::endl;
  std::cout << std::setw(15) << "May" << std::setw(15) << "James" << std::setw(10) << "55" << std::endl;
  std::cout << std::setw(15) << "McGuinness" << std::setw(15) << "Gavin" << std::setw(10) << "19" << std::endl;
  std::cout << std::setfill(' ');

  std::cout << std::right; //right justified
  std::cout << std::setw(10) << "Last Name" << std::setw(10) << "First Name" << std::setw(5) << "Age" << std::endl;
  std::cout << std::setw(10) << "Doe" << std::setw(10) << "John" << std::setw(5) << "47" << std::endl;
  std::cout << std::setw(10) << "Clarkson" << std::setw(10) << "Jeremy" << std::setw(5) << "64" << std::endl;
  std::cout << std::setw(10) << "Hammond" << std::setw(10) << "Richard" << std::setw(5) << "60" << std::endl;
  std::cout << std::setw(10) << "May" << std::setw(10) << "James" << std::setw(5) << "55" << std::endl;
  std::cout << std::setw(10) << "McGuinness" << std::setw(10) << "Gavin" << std::setw(5) << "19" << std::endl;

  std::cout << std::internal; //justifies sign left and number right
  std::cout << std::setw(10) << -12.54 << std::endl;
  std::cout << std::showpos; //shows positive sign on numbers
  std::cout << std::setw(10) << 21.78 << std::endl;
  std::cout << std::noshowpos; //stops showing positive sign on numbers

  const int num = 349823;

  //these methods dont work for floats / double prec
  std::cout << std::hex; //formats numbers in hex
  std::cout << std::uppercase; //makes hex uppercase
  std::cout << num << std::endl;
  std::cout << std::nouppercase;
  std::cout << std::oct; //formats numbers in oct
  std::cout << num << std::endl;
  std:: cout << std::dec; //formats numbers in dec
  std:: cout << num << std::endl;

  const long double dec = 7.982398047102398740918273403245234;
  const double anotherDec = 1.532;
  const double science = 1.653e-10;

  std::cout << std::scientific; //forces scientific notation
  std::cout << std::setprecision(10); //sets number of decimal places
  std::cout << dec << std::endl;
  std::cout << anotherDec << std::endl;
  std::cout << science << std::endl;

  std::cout << std::fixed; //forces normal decimal notation
  std::cout << science << std::endl;

  std::cout.unsetf(std::ios::scientific | std::ios::fixed); //resets formatting
  std::cout << dec << std::endl;
  
  std::cout << std::showpoint; //forces to show decimal
  std::cout << 30.0 << std::endl;

  std::cout << std::noshowpoint; //stops decimal
  std::cout << 76.0 << std::endl;

  return 0;
}