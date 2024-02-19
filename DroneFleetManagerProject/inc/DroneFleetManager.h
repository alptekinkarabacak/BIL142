//
// Created by Alptekin's Macbook on 17.02.2024.
//

#ifndef DRONEMANAGEMENTSYSTEM_DRONEFLEETMANAGER_H
#define DRONEMANAGEMENTSYSTEM_DRONEFLEETMANAGER_H
#include "Drone.h"

class DroneFleetManager {
public:
    std::vector<Drone*> dronesInFleet;
    void addDrone(Drone* drone) {
        dronesInFleet.emplace_back(drone);
    }

    void displayAllDroneStatus() {
        for(auto drone : dronesInFleet) {
            drone->DisplayStatus();
        }
    }





protected:
private:

};

#endif //DRONEMANAGEMENTSYSTEM_DRONEFLEETMANAGER_H
