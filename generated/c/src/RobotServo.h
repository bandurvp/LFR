// The template for class header
#ifndef CLASSES_RobotServo_H_
#define CLASSES_RobotServo_H_

#define VDM_CG

#include "Vdm.h"

//include types used in the class
#include "RobotServo.h"
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
 
extern TVP numFields_4;


/* -------------------------------
 *
 * The class
 *
 --------------------------------- */ 
 

//class id
#define CLASS_ID_RobotServo_ID 3

#define RobotServoCLASS struct RobotServo*

// The vtable ids
#define CLASS_RobotServo__Z10RobotServoE8CRealPort 0
#define CLASS_RobotServo__Z8setServoER 1
#define CLASS_RobotServo__Z8getValueEV 2
#define CLASS_RobotServo__Z10RobotServoEV 3

struct RobotServo
{
	
/* Definition of Class: 'RobotServo' */
	VDM_CLASS_BASE_DEFINITIONS(RobotServo);
	 
	VDM_CLASS_FIELD_DEFINITION(RobotServo,port);
	VDM_CLASS_FIELD_DEFINITION(RobotServo,numFields);

};


/* -------------------------------
 *
 * Constructors
 *
 --------------------------------- */ 
 

	/* RobotServo.vdmrt 9:8 */
	TVP _Z10RobotServoE8CRealPort(RobotServoCLASS this_, TVP p);
	/* RobotServo.vdmrt 1:7 */
	TVP _Z10RobotServoEV(RobotServoCLASS this_);


/* -------------------------------
 *
 * public access functions
 *
 --------------------------------- */ 
 
	void RobotServo_const_init();
	void RobotServo_const_shutdown();
	void RobotServo_static_init();
	void RobotServo_static_shutdown();


/* -------------------------------
 *
 * Internal
 *
 --------------------------------- */ 
 

void RobotServo_free_fields(RobotServoCLASS);
RobotServoCLASS RobotServo_Constructor(RobotServoCLASS);



#endif /* CLASSES_RobotServo_H_ */