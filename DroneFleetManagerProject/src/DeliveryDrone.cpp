//
// Created by Alptekin's Macbook on 19.02.2024.
//

#include <iostream>
#include "DeliveryDrone.h"


void DeliveryDrone::UpdatePosition(double _latitude, double _longitude, double _altitude) {
    latitude = _latitude;
    longitude = _longitude;
    altitude = _altitude;
    std::cout << "Delivery Drone has been moved to given location \n";
}

void DeliveryDrone::DisplayStatus() const {
    std::cout << "Status the ID of : " << droneId << " the delivery drone is :\n" << "Altitude : " << altitude << " Longitude : " << longitude << " Latitude : " << latitude;
    std::cout << " Delivery Id is : " << deliveryId << "\n";
}
