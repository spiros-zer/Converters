// Spyridon Zervos ©


#pragma once

#include <string>

#ifndef CONVERTERS_H
#define CONVERTERS_H

namespace Converters
{
	/** @brief Converts double to char*. */
    char* DoubleToCstring(double InNum, int& Size, int Precision = 2);
}

#endif