/*
 * Generated by Autumn Generator.
 * 
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

#include "BeanTypeBean_Wrapper.h"

/**
 * Wrapper methods for BeanTypeBean
 */
void* BeanTypeBean_Wrapper::execCreateMethod(string& method, void** Prams, int num)
{
	if( !method.compare("BeanTypeBean") && num == 0 )
		return (void*)(this->pBean = new BeanTypeBean());
	if( !method.compare("BeanTypeBean") && num == 1 )
		return (void*)(this->pBean = new BeanTypeBean(
				*(IBasicTypesBean**)Prams[0]));
	if( !method.compare("getCStr") && num == 0 )
		return (void*)(this->pBean->getCStr());
	if( !method.compare("getUCStr") && num == 0 )
		return (void*)(this->pBean->getUCStr());

	return NULL;
}

int BeanTypeBean_Wrapper::execVoidMethod(string& method, void** Prams, int num)
{
	if( !method.compare("setInt") && num == 1 )
		this->pBean->setInt(
					 *(IBasicTypesBean**)Prams[0]);
	else if( !method.compare("setCStr") && num == 1 )
		this->pBean->setCStr(
					 *(BasicTypesBean*)Prams[0]);
	else 
		return -1;

	return 0;
}

int BeanTypeBean_Wrapper::getParamTypes(string& method, string& types, int num)
{
	if( !method.compare("BeanTypeBean") && num == 0 )
		types = string("");
	else if( !method.compare("BeanTypeBean") && num == 1 )
		types = string("")
			  + "IBasicTypesBean*|";
	else if( !method.compare("setInt") && num == 1 )
		types = string("")
			  + "IBasicTypesBean*|";
	else if( !method.compare("setCStr") && num == 1 )
		types = string("")
			  + "BasicTypesBean|";
	else if( !method.compare("getChar") && num == 0 )
		types = string("");
	else if( !method.compare("getUChar") && num == 0 )
		types = string("");
	else if( !method.compare("getShort") && num == 0 )
		types = string("");
	else if( !method.compare("getUShort") && num == 0 )
		types = string("");
	else if( !method.compare("getInt") && num == 0 )
		types = string("");
	else if( !method.compare("getUInt") && num == 0 )
		types = string("");
	else if( !method.compare("getLong") && num == 0 )
		types = string("");
	else if( !method.compare("getULong") && num == 0 )
		types = string("");
	else if( !method.compare("getFloat") && num == 0 )
		types = string("");
	else if( !method.compare("getDouble") && num == 0 )
		types = string("");
	else if( !method.compare("getString") && num == 0 )
		types = string("");
	else if( !method.compare("getCStr") && num == 0 )
		types = string("");
	else if( !method.compare("getUCStr") && num == 0 )
		types = string("");
	else 
		return -1;

	return 0;
}

extern "C"{
	IBeanWrapper* create_BeanTypeBean_Wrapper(){
		return new BeanTypeBean_Wrapper;
	}
	void delete_BeanTypeBean_Wrapper(IBeanWrapper* p){
		delete p;
	}
}

AUTUMN_BeanTypeBean_Wrapper_Local _AUTUMN_BeanTypeBean_Wrapper_Local_;

