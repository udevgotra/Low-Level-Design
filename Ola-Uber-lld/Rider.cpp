
#include "Rider.hpp"

Rider::Rider(const std::string& rName,const UTIL::RATING& rRating):name(rName),rating(rRating){
}
const std::string& Rider::getRiderName()const{
    return this->name;
}
UTIL::RATING Rider::getRating()const{
    return this->rating;
}