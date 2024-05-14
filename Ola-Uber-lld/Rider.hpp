#pragma once
#include "Util.hpp"
#include <string>

class Rider{
    std::string name;
    UTIL::RATING rating;
    public:
    Rider(const std::string&,const UTIL::RATING&);
    const std::string& getRiderName()const;
    UTIL::RATING getRating()const;
};