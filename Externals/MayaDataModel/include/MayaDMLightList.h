/*
    Copyright (c) 2008-2009 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_LIGHTLIST_H__
#define __MayaDM_LIGHTLIST_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMDependNode.h"
namespace MayaDM
{
class LightList : public DependNode
{
public:
public:
	LightList():DependNode(){}
	LightList(FILE* file,const std::string& name,const std::string& parent="",bool create=true)
		:DependNode(file, name, parent, "lightList", create){}
	virtual ~LightList(){}
	void getLights(size_t l_i)const
	{
		fprintf(mFile,"\"%s.l[%i]\"",mName.c_str(),l_i);

	}
	void getLinkNodes(size_t ln_i)const
	{
		fprintf(mFile,"\"%s.ln[%i]\"",mName.c_str(),ln_i);

	}
protected:
	LightList(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType,bool create=true)
		:DependNode(file, name, parent, nodeType, create) {}

};
}//namespace MayaDM
#endif//__MayaDM_LIGHTLIST_H__