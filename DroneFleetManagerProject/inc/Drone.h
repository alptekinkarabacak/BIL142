//
// Created by Alptekin's Macbook on 17.02.2024.
//

#ifndef DRONEMANAGEMENTSYSTEM_DRONE_H
#define DRONEMANAGEMENTSYSTEM_DRONE_H

class Drone {
public:
    Drone() = default;
    Drone(const int _droneID, double _latitude, double _longitude, double _altitude) : droneId{_droneID}, latitude{_latitude},
    longitude{_longitude}, altitude{_altitude} {}

    int getDroneId() {
        return droneId;
    }

    virtual void UpdatePosition(double latitude, double longitude, double altitude) = 0; // Pure virtual function
    virtual void DisplayStatus() const = 0; // Pure virtual function


private:
protected:
    int droneId;
    double latitude;
    double longitude;
    double altitude;
};














#endif //DRONEMANAGEMENTSYSTEM_DRONE_H
