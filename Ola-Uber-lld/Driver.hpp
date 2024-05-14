#pragma once
#include "Util.hpp"
#include <string>
class Driver{
    std::string name;
    UTIL::RATING rating;
    UTIL::AVAILABILITY avil;
    public:
    Driver(const std::string&,const UTIL::RATING&);
    const std::string& getDriverName()const;
    const UTIL::RATING& getDriverRating()const;
    void updateAvailability(const UTIL::AVAILABILITY&); 
};