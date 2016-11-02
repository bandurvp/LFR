// The template for class header
#ifndef CLASSES_Port_H_
#define CLASSES_Port_H_

#define VDM_CG

#include "Vdm.h"

//include types used in the class
#include "IntPort.h"
#include "Port.h"
#include "BoolPort.h"
#include "RealPort.h"
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
 
extern TVP numFields_7;


/* -------------------------------
 *
 * The class
 *
 --------------------------------- */ 
 

//class id
#define CLASS_ID_Port_ID 6

#define PortCLASS struct Port*

// The vtable ids
#define CLASS_Port__Z8setValueE5X1QCBR 0
#define CLASS_Port__Z8getValueEV 1
#define CLASS_Port__Z6createE5X1QCBR 2
#define CLASS_Port__Z4PortEV 3

struct Port
{
	
/* Definition of Class: 'Port' */
	VDM_CLASS_BASE_DEFINITIONS(Port);
	 
	VDM_CLASS_FIELD_DEFINITION(Port,numFields);

};


/* -------------------------------
 *
 * Constructors
 *
 --------------------------------- */ 
 

	/* Fmi.vdmrt 18:7 */
	TVP _Z4PortEV(PortCLASS this_);


/* -------------------------------
 *
 * public access functions
 *
 --------------------------------- */ 
 
	void Port_const_init();
	void Port_const_shutdown();
	void Port_static_init();
	void Port_static_shutdown();


/* -------------------------------
 *
 * Internal
 *
 --------------------------------- */ 
 

void Port_free_fields(PortCLASS);
PortCLASS Port_Constructor(PortCLASS);



#endif /* CLASSES_Port_H_ */