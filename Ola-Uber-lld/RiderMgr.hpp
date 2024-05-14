#pragma once

#include "Rider.hpp"
#include <mutex>
#include <unordered_map>

class RiderMgr{
    RiderMgr(){}
    static RiderMgr* riderMgrInstance;
    static std::mutex mtx;
    std::unordered_map<std::string,Rider*> ridersMap;
public:
    static RiderMgr* getRiderMgrInstance();
    void addRider(std::string& rname,Rider* rider);
    Rider* getRider(std::string& rname);
};