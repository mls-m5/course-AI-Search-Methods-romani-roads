// Copyright © Mattias Larsson Sköld 2020

#pragma once

#include <iosfwd>
#include <memory>
#include <string>
#include <vector>

struct City {
    std::string name;
    double x;
    double y;
    std::vector<City *> connections;
};

typedef std::vector<std::unique_ptr<City>> CityList;

std::ostream &operator<<(std::ostream &stream, const City &city);

std::ostream &operator<<(std::ostream &stream, const CityList &cities);