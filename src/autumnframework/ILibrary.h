/*
* Copyright 2006 the original author or authors.
* 
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
* 
*      http://www.apache.org/licenses/LICENSE-2.0
* 
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef AUTUMN_ILIBRARY_H
#define AUTUMN_ILIBRARY_H

#include <string>

using namespace std;

namespace Autumn{

/** 
 * Dynamic library 
 * @version 0.1.0
 * @since 2006-12-16
 */

class ILibrary{
public:
	/** Get function address */
	virtual void* getFunction(const string& name) const = 0;

	/** 
	 * if don't define this destructor, the derived class's 
	 * destructor may not be called when it being deleted.
	 */
	virtual ~ILibrary(){}
};

} // End namespace Autumn

#endif
