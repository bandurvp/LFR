// The template for class header
#ifndef CLASSES_System_H_
#define CLASSES_System_H_

#define VDM_CG

#include "Vdm.h"

//include types used in the class
#include "RobotSensor.h"
#include "RobotServo.h"
#include "HardwareInterface.h"
#include "Controller.h"
#include "RealPort.h"
#include "System.h"


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
 
extern TVP numFields_5;
extern TVP g_System_hwi;
extern TVP g_System_controller;


/* -------------------------------
 *
 * The class
 *
 --------------------------------- */ 
 

//class id
#define CLASS_ID_System_ID 4

#define SystemCLASS struct System*

// The vtable ids
#define CLASS_System__Z6SystemEV 0

struct System
{
	
/* Definition of Class: 'System' */
	VDM_CLASS_BASE_DEFINITIONS(System);
	 
	VDM_CLASS_FIELD_DEFINITION(System,numFields);

};


/* -------------------------------
 *
 * Constructors
 *
 --------------------------------- */ 
 

	/* System.vdmrt 14:8 */
	TVP _Z6SystemEV(SystemCLASS this_);


/* -------------------------------
 *
 * public access functions
 *
 --------------------------------- */ 
 
	void System_const_init();
	void System_const_shutdown();
	void System_static_init();
	void System_static_shutdown();


/* -------------------------------
 *
 * Internal
 *
 --------------------------------- */ 
 

void System_free_fields(SystemCLASS);
SystemCLASS System_Constructor(SystemCLASS);



#endif /* CLASSES_System_H_ */