#include <iostream>
#include "Drone.h"
#include "DroneFleetManager.h"
#include "DeliveryDrone.h"
#include "Survilliance.h"

int main() {
    DroneFleetManager farmFleet;
    DeliveryDrone deliveryDrone_1(25, 32.8, 37.9, 30.1, 5);
    farmFleet.addDrone(&deliveryDrone_1);
    Survilliance survilliance_1(26, 32.1, 33.4, 35.8);
    survilliance_1.UpdatePosition(32.3, 33.5, 20.3);
    farmFleet.addDrone(&survilliance_1);
    farmFleet.displayAllDroneStatus();
    return 0;
}
