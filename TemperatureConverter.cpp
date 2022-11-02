/*
* This class contains two static member functions for converting
* between Celsius and Fahrenheit temperatures.
*
* Created by Richard H. Mercer on 4/14/22.
*/
#include <cmath>

class TemperatureConverter {

public:

  // Return the Celsius equivalent of Fahrenheit
  static double FtoC(double f) {
    return roundToOneDecimal((5.0 / 9.0) * (f - 32.0));
  }

  // Return the Fahrenheit equivalent of Celsius
  static double CtoF(double c)  {
    return roundToOneDecimal(c * 1.8  + 32.0);
  }

  static double roundToOneDecimal(double number)  {
    return round(number * 10) / 10.0;
  }
};