//
// Created by Alptekin's Macbook on 19.02.2024.
//
#include <iostream>
#include "Survilliance.h"

void Survilliance::UpdatePosition(double _latitude, double _longitude, double _altitude) {
    observedLatitude = _latitude;
    observedLongitude = _longitude;
    observedAltitude = _altitude;
    std::cout << "Survilliance Drone has been moved to given location \n";
}

void Survilliance::DisplayStatus() const {
    std::cout << "Status the ID of : " << droneId << " the Survilliance drone is :\n" << " Observed Altitude : " << observedAltitude << " Observer Longitude : " << observedLongitude << " Observed Latitude : " << observedLatitude;
}
