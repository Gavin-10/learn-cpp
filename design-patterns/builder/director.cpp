
#include "director.h"

void Director::set_builder(Builder* builder) {
    this->builder = builder;
}
void Director::BuildEntryHosue() {
    builder->buildDescription();
    builder->buildColor();
}

void Director::BuildFullHouse() {
    builder->buildDescription();
    builder->buildColor();
    builder->buildGarden();
    builder->buildRooms();
    builder->buildWindows();
    builder->buildGarage();
}