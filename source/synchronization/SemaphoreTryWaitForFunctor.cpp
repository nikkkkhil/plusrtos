/**
 * \file
 * \brief SemaphoreTryWaitForFunctor class implementation
 *
 * \author Copyright (C) 2014-2015 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
 *
 * \par License
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
 * distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#include "distortos/internal/synchronization/SemaphoreTryWaitForFunctor.hpp"

#include "distortos/Semaphore.hpp"

namespace distortos
{

namespace internal
{

/*---------------------------------------------------------------------------------------------------------------------+
| public functions
+---------------------------------------------------------------------------------------------------------------------*/

int SemaphoreTryWaitForFunctor::operator()(Semaphore& semaphore) const
{
	return semaphore.tryWaitFor(duration_);
}

}	// namespace internal

}	// namespace distortos