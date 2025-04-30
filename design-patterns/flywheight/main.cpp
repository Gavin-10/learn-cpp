
#include "FlywheightFactory.h"
#include "UniqueState.h"

void addCarToDatabase(
  FlywheightFactory& factory, 
  std::string_view registration, 
  std::string_view owner,
  std::string_view make,
  std::string_view model,
  std::string_view year
) {
  std::cout << "Adding car to database" << std::endl;
  const Flywheight& flywheight = factory.getFlywheight({make, model, year});
  flywheight.operation({owner, registration});
}

int main() {
  FlywheightFactory* factory = new FlywheightFactory({{"Chevrolet", "Camaro", "2018"}, {"Mercedes Benz", "C300", "2010"}, {"Mercedes Benz", "C500", "2007"}, {"BMW", "M5", "2016"}, {"BMW", "X6", "2016"}});
    factory->listFlywheights();

    addCarToDatabase(*factory,
                            "CL234IR",
                            "James Doe",
                            "BMW",
                            "M5",
                            "2016");

    addCarToDatabase(*factory,
                            "CL234IR",
                            "James Doe",
                            "BMW",
                            "X1",
                            "2019");
    factory->listFlywheights();
    delete factory;

  return 0;
}