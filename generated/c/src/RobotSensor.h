// The template for class header
#ifndef CLASSES_RobotSensor_H_
#define CLASSES_RobotSensor_H_

#define VDM_CG

#include "Vdm.h"

//include types used in the class
#include "RobotSensor.h"
#include "RealPort.h"


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
 
extern TVP numFields_3;


/* -------------------------------
 *
 * The class
 *
 --------------------------------- */ 
 

//class id
#define CLASS_ID_RobotSensor_ID 2

#define RobotSensorCLASS struct RobotSensor*

// The vtable ids
#define CLASS_RobotSensor__Z11RobotSensorE8CRealPort 0
#define CLASS_RobotSensor__Z10getReadingEV 1
#define CLASS_RobotSensor__Z8setValueER 2
#define CLASS_RobotSensor__Z11RobotSensorEV 3

struct RobotSensor
{
	
/* Definition of Class: 'RobotSensor' */
	VDM_CLASS_BASE_DEFINITIONS(RobotSensor);
	 
	VDM_CLASS_FIELD_DEFINITION(RobotSensor,port);
	VDM_CLASS_FIELD_DEFINITION(RobotSensor,numFields);

};


/* -------------------------------
 *
 * Constructors
 *
 --------------------------------- */ 
 

	/* RobotSensor.vdmrt 9:8 */
	TVP _Z11RobotSensorE8CRealPort(RobotSensorCLASS this_, TVP p);
	/* RobotSensor.vdmrt 1:7 */
	TVP _Z11RobotSensorEV(RobotSensorCLASS this_);


/* -------------------------------
 *
 * public access functions
 *
 --------------------------------- */ 
 
	void RobotSensor_const_init();
	void RobotSensor_const_shutdown();
	void RobotSensor_static_init();
	void RobotSensor_static_shutdown();


/* -------------------------------
 *
 * Internal
 *
 --------------------------------- */ 
 

void RobotSensor_free_fields(RobotSensorCLASS);
RobotSensorCLASS RobotSensor_Constructor(RobotSensorCLASS);



#endif /* CLASSES_RobotSensor_H_ */