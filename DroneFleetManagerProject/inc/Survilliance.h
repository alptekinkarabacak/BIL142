//
// Created by Alptekin's Macbook on 19.02.2024.
//

#ifndef DRONEMANAGEMENTSYSTEM_SURVILLIANCE_H
#define DRONEMANAGEMENTSYSTEM_SURVILLIANCE_H
#include "Drone.h"

class Survilliance : public Drone {
public:
    Survilliance(const int _droneID, double _latitude, double _longitude, double _altitude) : Drone(_droneID, _latitude, _longitude, _altitude) {}
    void UpdatePosition(double _latitude, double _longitude, double _altitude);
    void DisplayStatus() const;
private:
    double observedLatitude;
    double observedLongitude;
    double observedAltitude;
};

#endif //DRONEMANAGEMENTSYSTEM_SURVILLIANCE_H
