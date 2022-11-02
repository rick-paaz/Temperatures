// Unit test for the two
#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "TemperatureConverter.cpp"

TEST_CASE("CtoF") {
  // CtoF is a static function. No object needed.
  REQUIRE (TemperatureConverter::CtoF(100) == 212);
  REQUIRE (TemperatureConverter::CtoF(0) == 32);
  REQUIRE (TemperatureConverter::CtoF(37) == 98.6);
  REQUIRE (TemperatureConverter::CtoF(0) == 32);
  REQUIRE (TemperatureConverter::CtoF(-40) == -40);
}

TEST_CASE("FtoC") {
  // FtoC is a static function. No object needed.
  REQUIRE (TemperatureConverter::FtoC(212) == 100);
  REQUIRE (TemperatureConverter::FtoC(32) == 0);
  REQUIRE (TemperatureConverter::FtoC(98.6) == 37.0);
  REQUIRE (TemperatureConverter::FtoC(32) == 0.0);
  REQUIRE (TemperatureConverter::FtoC(-40.0) == -40.0);
}