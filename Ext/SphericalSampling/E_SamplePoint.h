/*
	This file is part of the E_MinSG library extension SphericalSampling.
	Copyright (C) 2012 Benjamin Eikel <benjamin@eikel.org>
	
	This library is subject to the terms of the Mozilla Public License, v. 2.0.
	You should have received a copy of the MPL along with this library; see the 
	file LICENSE. If not, you can obtain one at http://mozilla.org/MPL/2.0/.
*/
#ifdef MINSG_EXT_SPHERICALSAMPLING

#ifndef E_MINSG_SPHERICALSAMPLING_E_SAMPLEPOINT_H_
#define E_MINSG_SPHERICALSAMPLING_E_SAMPLEPOINT_H_

#include <EScript/Objects/ExtReferenceObject.h>
#include <MinSG/Ext/SphericalSampling/SamplePoint.h>
#include <cstddef>
#include <string>
#include <utility>

namespace EScript {
class Namespace;
class Runtime;
class Type;
}
namespace E_MinSG {
namespace SphericalSampling {

//!	EScript wrapper class for MinSG::SphericalSampling::SamplePoint
class E_SamplePoint : public EScript::ExtReferenceObject<MinSG::SphericalSampling::SamplePoint> {
		ES_PROVIDES_TYPE_NAME(SamplePoint)
	public:
		static EScript::Type * getTypeObject();
		static void init(EScript::Namespace & lib);

		template<typename ... Types>
		explicit E_SamplePoint(Types && ... params) :
			ExtReferenceObject_t(E_SamplePoint::getTypeObject(), std::forward<Types>(params) ...) {
		}
		virtual ~E_SamplePoint();

		virtual E_SamplePoint * clone() const;

		virtual std::string toString() const;
};

}
}

#endif /* E_MINSG_SPHERICALSAMPLING_E_SAMPLEPOINT_H_ */

#endif /* MINSG_EXT_SPHERICALSAMPLING */
