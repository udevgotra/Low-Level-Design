#pragma once
#include <mutex>
#include <unordered_map>
#include "Driver.hpp"

class DriverMgr{
    DriverMgr(){}
    static DriverMgr* driverMgrInstance;
    static std::mutex mux;
    std::unordered_map<std::string,Driver*> driverMaps;
    public:
    static DriverMgr* getDriverMgrInstance();
    void addDriver(const std::string&,Driver*);
    Driver* getDriver(const std::string&);
};