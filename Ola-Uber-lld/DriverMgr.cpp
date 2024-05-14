#include "DriverMgr.hpp"

DriverMgr* DriverMgr::driverMgrInstance=nullptr;
std::mutex DriverMgr::mux;

DriverMgr* DriverMgr::getDriverMgrInstance(){
    if(driverMgrInstance==nullptr){
        mux.lock();
        if(driverMgrInstance==nullptr){
            driverMgrInstance=new DriverMgr();
        }
    }
    return driverMgrInstance;
}
void DriverMgr::addDriver(const std::string& dname,Driver* driver){
    driverMaps[dname]=driver;
}
Driver* DriverMgr::getDriver(const std::string& dname){
    return driverMaps[dname];
}