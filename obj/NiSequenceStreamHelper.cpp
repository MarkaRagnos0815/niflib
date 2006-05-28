/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "NiSequenceStreamHelper.h"

//Definition of TYPE constant
const Type NiSequenceStreamHelper::TYPE("NiSequenceStreamHelper", &NI_SEQUENCE_STREAM_HELPER_PARENT::TYPE );

NiSequenceStreamHelper::NiSequenceStreamHelper() NI_SEQUENCE_STREAM_HELPER_CONSTRUCT {}

NiSequenceStreamHelper::~NiSequenceStreamHelper() {}

void NiSequenceStreamHelper::Read( istream& in, list<uint> link_stack, unsigned int version ) {
	NI_SEQUENCE_STREAM_HELPER_READ
}

void NiSequenceStreamHelper::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
	NI_SEQUENCE_STREAM_HELPER_WRITE
}

string NiSequenceStreamHelper::asString( bool verbose ) const {
	NI_SEQUENCE_STREAM_HELPER_STRING
}

void NiSequenceStreamHelper::FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version ) {
	NI_SEQUENCE_STREAM_HELPER_FIXLINKS
}
