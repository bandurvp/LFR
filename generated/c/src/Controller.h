// The template for class header
#ifndef CLASSES_Controller_H_
#define CLASSES_Controller_H_

#define VDM_CG

#include "Vdm.h"

//include types used in the class
#include "RobotSensor.h"
#include "RobotServo.h"
#include "HardwareInterface.h"
#include "Controller.h"
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
 
extern TVP numFields_1;


/* -------------------------------
 *
 * The class
 *
 --------------------------------- */ 
 

//class id
#define CLASS_ID_Controller_ID 0

#define ControllerCLASS struct Controller*

// The vtable ids
#define CLASS_Controller__Z10ControllerE10CRobotServo10CRobotServo11CRobotSensor11CRobotSensor 0
#define CLASS_Controller__Z12control_loopEV 1
#define CLASS_Controller__Z10ControllerEV 2

struct Controller
{
	
/* Definition of Class: 'Controller' */
	VDM_CLASS_BASE_DEFINITIONS(Controller);
	 
	VDM_CLASS_FIELD_DEFINITION(Controller,servoLeft);
	VDM_CLASS_FIELD_DEFINITION(Controller,servoRight);
	VDM_CLASS_FIELD_DEFINITION(Controller,sensorRightVal);
	VDM_CLASS_FIELD_DEFINITION(Controller,sensorLeftVal);
	VDM_CLASS_FIELD_DEFINITION(Controller,numFields);

};


/* -------------------------------
 *
 * Constructors
 *
 --------------------------------- */ 
 

	/* Controller.vdmrt 11:9 */
	TVP _Z10ControllerE10CRobotServo10CRobotServo11CRobotSensor11CRobotSensor(ControllerCLASS this_, TVP servL, TVP servR, TVP sensRightVal, TVP sensLeftVal);
	/* Controller.vdmrt 1:7 */
	TVP _Z10ControllerEV(ControllerCLASS this_);


/* -------------------------------
 *
 * public access functions
 *
 --------------------------------- */ 
 
	void Controller_const_init();
	void Controller_const_shutdown();
	void Controller_static_init();
	void Controller_static_shutdown();


/* -------------------------------
 *
 * Internal
 *
 --------------------------------- */ 
 

void Controller_free_fields(ControllerCLASS);
ControllerCLASS Controller_Constructor(ControllerCLASS);



#endif /* CLASSES_Controller_H_ */