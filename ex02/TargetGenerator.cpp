#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
        _targetBook[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &targetname)
{
    if (_targetBook.find(targetname) != _targetBook.end())
        _targetBook.erase(_targetBook.find(targetname));
}

ATarget *TargetGenerator::createTarget(std::string const &targetname)
{
    ATarget *tmp = NULL;
    if (_targetBook.find(targetname) != _targetBook.end())
        tmp = _targetBook[targetname];
    return tmp;
}