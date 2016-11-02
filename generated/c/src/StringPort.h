// The template for class header
#ifndef CLASSES_StringPort_H_
#define CLASSES_StringPort_H_

#define VDM_CG

#include "Vdm.h"
#include "Port.h"

//include types used in the class
#include "Port.h"
#include "StringPort.h"


/* -------------------------------
 *
 * Quotes
 *
 --------------------------------- */ 
 


/* -------------------------------
 *
 * values / global const
 *
 --------------------------------- */ 
 


/* -------------------------------
 *
 * The class
 *
 --------------------------------- */ 
 

//class id
#define CLASS_ID_StringPort_ID 10

#define StringPortCLASS struct StringPort*

// The vtable ids
#define CLASS_StringPort__Z10StringPortE1QC 0
#define CLASS_StringPort__Z8setValueE1QC 1
#define CLASS_StringPort__Z8getValueEV 2
#define CLASS_StringPort__Z10StringPortEV 3

struct StringPort
{
	
/* Definition of Class: 'Port' */
	VDM_CLASS_BASE_DEFINITIONS(Port);
	 
	VDM_CLASS_FIELD_DEFINITION(Port,numFields);

	
/* Definition of Class: 'StringPort' */
	VDM_CLASS_BASE_DEFINITIONS(StringPort);
	 
	VDM_CLASS_FIELD_DEFINITION(StringPort,value);
	VDM_CLASS_FIELD_DEFINITION(StringPort,numFields);

};


/* -------------------------------
 *
 * Constructors
 *
 --------------------------------- */ 
 

	/* Fmi.vdmrt 102:9 */
	TVP _Z10StringPortE1QC(StringPortCLASS this_, TVP v);
	/* Fmi.vdmrt 96:7 */
	TVP _Z10StringPortEV(StringPortCLASS this_);


/* -------------------------------
 *
 * public access functions
 *
 --------------------------------- */ 
 
	void StringPort_const_init();
	void StringPort_const_shutdown();
	void StringPort_static_init();
	void StringPort_static_shutdown();


/* -------------------------------
 *
 * Internal
 *
 --------------------------------- */ 
 

void StringPort_free_fields(StringPortCLASS);
StringPortCLASS StringPort_Constructor(StringPortCLASS);



#endif /* CLASSES_StringPort_H_ */