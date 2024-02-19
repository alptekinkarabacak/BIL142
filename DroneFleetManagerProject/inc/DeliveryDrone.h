//
// Created by Alptekin's Macbook on 19.02.2024.
//

#ifndef DRONEMANAGEMENTSYSTEM_DELIVERYDRONE_H
#define DRONEMANAGEMENTSYSTEM_DELIVERYDRONE_H

#include "Drone.h"

class DeliveryDrone : public Drone {
public:

    DeliveryDrone(const int _droneID, double _latitude, double _longitude, double _altitude, int _deliveryId) : Drone(_droneID, _latitude, _longitude, _altitude), deliveryId{_deliveryId} {}

    void UpdatePosition(double _latitude, double _longitude, double _altitude);

    void DisplayStatus() const;

private:
protected:
    int deliveryId;
};


#endif //DRONEMANAGEMENTSYSTEM_DELIVERYDRONE_H
