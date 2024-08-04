#pragma once
#include <iostream>
#include "ATarget.hpp"
#include <map>

class ATarget;

class TargetGenerator
{
    private:
        TargetGenerator(const TargetGenerator &);
        TargetGenerator &operator=(const TargetGenerator &);
        std::map<std::string, ATarget*> _targetBook;
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &targetname);
        ATarget *createTarget(std::string const &targetname);
};