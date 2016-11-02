// The template for class header
#ifndef CLASSES_IntPort_H_
#define CLASSES_IntPort_H_

#define VDM_CG

#include "Vdm.h"
#include "Port.h"

//include types used in the class
#include "IntPort.h"
#include "Port.h"


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
#define CLASS_ID_IntPort_ID 7

#define IntPortCLASS struct IntPort*

// The vtable ids
#define CLASS_IntPort__Z7IntPortEI 0
#define CLASS_IntPort__Z8setValueEI 1
#define CLASS_IntPort__Z8getValueEV 2
#define CLASS_IntPort__Z7IntPortEV 3

struct IntPort
{
	
/* Definition of Class: 'Port' */
	VDM_CLASS_BASE_DEFINITIONS(Port);
	 
	VDM_CLASS_FIELD_DEFINITION(Port,numFields);

	
/* Definition of Class: 'IntPort' */
	VDM_CLASS_BASE_DEFINITIONS(IntPort);
	 
	VDM_CLASS_FIELD_DEFINITION(IntPort,value);
	VDM_CLASS_FIELD_DEFINITION(IntPort,numFields);

};


/* -------------------------------
 *
 * Constructors
 *
 --------------------------------- */ 
 

	/* Fmi.vdmrt 51:9 */
	TVP _Z7IntPortEI(IntPortCLASS this_, TVP v);
	/* Fmi.vdmrt 45:7 */
	TVP _Z7IntPortEV(IntPortCLASS this_);


/* -------------------------------
 *
 * public access functions
 *
 --------------------------------- */ 
 
	void IntPort_const_init();
	void IntPort_const_shutdown();
	void IntPort_static_init();
	void IntPort_static_shutdown();


/* -------------------------------
 *
 * Internal
 *
 --------------------------------- */ 
 

void IntPort_free_fields(IntPortCLASS);
IntPortCLASS IntPort_Constructor(IntPortCLASS);



#endif /* CLASSES_IntPort_H_ */