/*
 * Random Number Generation Example
 *
 * Copyright 2012-2014 cppreference.com Contributors
 * Copyright 2014-2017 Melissa O'Neill <oneill@pcg-random.org>
 *                     and the PCG Project contributors.
 *
 * SPDX-License-Identifier: (CC-BY-SA-3.0 OR Apache-2.0 OR MIT)
 *
 * Code in this file is based on code from cppreference.com, specifically 
 * the sample code at http://en.cppreference.com/w/cpp/numeric/random
 * which is distributed under the Creative Commons Attribution-Share Alike
 * license.  You may distribute this file (and only this file) under
 * that license, see http://creativecommons.org/licenses/by-sa/3.0/.
 *
 * Also licensed under the Apache License, Version 2.0 (provided in
 * LICENSE-APACHE.txt and at http://www.apache.org/licenses/LICENSE-2.0)
 * or under the MIT license (provided in LICENSE-MIT.txt and at
 * http://opensource.org/licenses/MIT), at your option. This file may not
 * be copied, modified, or distributed except according to those terms.
 *
 * Distributed on an "AS IS" BASIS, WITHOUT WARRANTY OF ANY KIND, either
 * express or implied.  See your chosen license for details.
 *
 * For additional information about the PCG random number generation scheme,
 * visit http://www.pcg-random.org/.
 */

/*
 */
 
/*
 * Produce a histogram of a normal distribution.
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <sstream>

#include "pcg_random.hpp"
 
int main()
{
    // Make a random number engine 
    pcg64 rng(0);

    // save state
    std::stringstream stream;
    stream << rng;
    
    std::cout << "state="<<stream.str()<<std::endl;

    //reload stream
    stream >> rng;
}
