#pragma once
#include "Driver.hpp"

Driver::Driver(const std::string& dname,const UTIL::RATING& drating):name(dname),rating(drating){
}
const std::string& Driver::getDriverName()const{
    return this->name;
}
const UTIL::RATING& Driver::getDriverRating()const{
    return this->rating;
}
void Driver::updateAvailability(const UTIL::AVAILABILITY& davil){
    this->avil = davil;
}