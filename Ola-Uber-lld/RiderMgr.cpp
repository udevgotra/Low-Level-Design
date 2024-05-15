#pragma once
#include "RiderMgr.hpp"

RiderMgr* RiderMgr::riderMgrInstance=nullptr;
std::mutex RiderMgr::mux;

RiderMgr* RiderMgr::getRiderMgrInstance(){
    if(riderMgrInstance==nullptr){
        mux.lock();
        if(riderMgrInstance==nullptr){
            riderMgrInstance = new RiderMgr();
        }
        mux.unlock();
    }
    return riderMgrInstance;
}
void RiderMgr::addRider(std::string& rname,Rider* rider){
    ridersMap[rname]=rider;
}
Rider* RiderMgr::getRider(std::string& rname){
    return ridersMap[rname];
}
