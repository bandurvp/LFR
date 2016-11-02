// The template for class
#include "Controller.h"
#include <stdio.h>
#include <string.h>


/* -------------------------------
 *
 * Memory management methods
 *
 --------------------------------- */

void Controller_free_fields(struct Controller *this)
{
			vdmFree(this->m_Controller_servoLeft);
			vdmFree(this->m_Controller_servoRight);
			vdmFree(this->m_Controller_sensorRightVal);
			vdmFree(this->m_Controller_sensorLeftVal);
	}

static void Controller_free(struct Controller *this)
{
	--this->_Controller_refs;
	if (this->_Controller_refs < 1)
	{
		Controller_free_fields(this);
		free(this);
	}
}


/* -------------------------------
 *
 * Member methods 
 *
 --------------------------------- */
 

 static  TVP _Z17fieldInitializer1EV()	{

TVP ret_1 = vdmClone(newInt(4))
;

return ret_1;
}


/* Controller.vdmrt 20:12 */
 static  void _Z12control_loopEV(ControllerCLASS this)	{

TVP andResult_1 = newBool(false)
;

if ( toBool(vdmLessThan(CALL_FUNC(RobotSensor, RobotSensor, GET_FIELD_PTR(Controller, Controller, this, sensorRightVal), CLASS_RobotSensor__Z10getReadingEV), newInt(150))) )
	
	if ( toBool(vdmLessThan(CALL_FUNC(RobotSensor, RobotSensor, GET_FIELD_PTR(Controller, Controller, this, sensorLeftVal), CLASS_RobotSensor__Z10getReadingEV), newInt(150))) )
	
	andResult_1 = newBool(true);;;
/* Controller.vdmrt 23:3 */
if ( toBool(andResult_1) )
	/* Controller.vdmrt 24:8 */
	{
/* Controller.vdmrt 25:24 */
TVP embeding_1 = vdmMinus(CALL_FUNC(RealPort, RealPort, g_HardwareInterface_forwardSpeed, CLASS_RealPort__Z8getValueEV))
;
/* Controller.vdmrt 25:4 */
CALL_FUNC(RobotServo, RobotServo, GET_FIELD_PTR(Controller, Controller, this, servoRight), CLASS_RobotServo__Z8setServoER, embeding_1);
/* Controller.vdmrt 26:23 */
TVP embeding_2 = CALL_FUNC(RealPort, RealPort, g_HardwareInterface_forwardSpeed, CLASS_RealPort__Z8getValueEV)
;
/* Controller.vdmrt 26:4 */
CALL_FUNC(RobotServo, RobotServo, GET_FIELD_PTR(Controller, Controller, this, servoLeft), CLASS_RobotServo__Z8setServoER, embeding_2);
}
;

TVP andResult_2 = newBool(false)
;

if ( toBool(vdmLessThan(CALL_FUNC(RobotSensor, RobotSensor, GET_FIELD_PTR(Controller, Controller, this, sensorRightVal), CLASS_RobotSensor__Z10getReadingEV), newInt(150))) )
	
	if ( toBool(vdmGreaterThan(CALL_FUNC(RobotSensor, RobotSensor, GET_FIELD_PTR(Controller, Controller, this, sensorLeftVal), CLASS_RobotSensor__Z10getReadingEV), newInt(150))) )
	
	andResult_2 = newBool(true);;;
/* Controller.vdmrt 29:3 */
if ( toBool(andResult_2) )
	/* Controller.vdmrt 30:8 */
	{
/* Controller.vdmrt 31:24 */
TVP embeding_3 = vdmMinus(CALL_FUNC(RealPort, RealPort, g_HardwareInterface_forwardRotate, CLASS_RealPort__Z8getValueEV))
;
/* Controller.vdmrt 31:4 */
CALL_FUNC(RobotServo, RobotServo, GET_FIELD_PTR(Controller, Controller, this, servoRight), CLASS_RobotServo__Z8setServoER, embeding_3);
/* Controller.vdmrt 32:23 */
TVP embeding_4 = CALL_FUNC(RealPort, RealPort, g_HardwareInterface_backwardRotate, CLASS_RealPort__Z8getValueEV)
;
/* Controller.vdmrt 32:4 */
CALL_FUNC(RobotServo, RobotServo, GET_FIELD_PTR(Controller, Controller, this, servoLeft), CLASS_RobotServo__Z8setServoER, embeding_4);
}
;

TVP andResult_3 = newBool(false)
;

if ( toBool(vdmGreaterThan(CALL_FUNC(RobotSensor, RobotSensor, GET_FIELD_PTR(Controller, Controller, this, sensorRightVal), CLASS_RobotSensor__Z10getReadingEV), newInt(150))) )
	
	if ( toBool(vdmLessThan(CALL_FUNC(RobotSensor, RobotSensor, GET_FIELD_PTR(Controller, Controller, this, sensorLeftVal), CLASS_RobotSensor__Z10getReadingEV), newInt(150))) )
	
	andResult_3 = newBool(true);;;
/* Controller.vdmrt 35:3 */
if ( toBool(andResult_3) )
	/* Controller.vdmrt 36:8 */
	{
/* Controller.vdmrt 37:24 */
TVP embeding_5 = vdmMinus(CALL_FUNC(RealPort, RealPort, g_HardwareInterface_backwardRotate, CLASS_RealPort__Z8getValueEV))
;
/* Controller.vdmrt 37:4 */
CALL_FUNC(RobotServo, RobotServo, GET_FIELD_PTR(Controller, Controller, this, servoRight), CLASS_RobotServo__Z8setServoER, embeding_5);
/* Controller.vdmrt 38:23 */
TVP embeding_6 = CALL_FUNC(RealPort, RealPort, g_HardwareInterface_forwardRotate, CLASS_RealPort__Z8getValueEV)
;
/* Controller.vdmrt 38:4 */
CALL_FUNC(RobotServo, RobotServo, GET_FIELD_PTR(Controller, Controller, this, servoLeft), CLASS_RobotServo__Z8setServoER, embeding_6);
}
;

TVP andResult_4 = newBool(false)
;

if ( toBool(vdmGreaterThan(CALL_FUNC(RobotSensor, RobotSensor, GET_FIELD_PTR(Controller, Controller, this, sensorRightVal), CLASS_RobotSensor__Z10getReadingEV), newInt(150))) )
	
	if ( toBool(vdmGreaterThan(CALL_FUNC(RobotSensor, RobotSensor, GET_FIELD_PTR(Controller, Controller, this, sensorLeftVal), CLASS_RobotSensor__Z10getReadingEV), newInt(150))) )
	
	andResult_4 = newBool(true);;;
/* Controller.vdmrt 41:3 */
if ( toBool(andResult_4) )
	/* Controller.vdmrt 42:8 */
	{
//Skip
};;
}



 void Controller_const_init()	{

numFields_1 = _Z17fieldInitializer1EV();

return ;
}



 void Controller_const_shutdown()	{

vdmFree(numFields_1);

return ;
}



 void Controller_static_init()	{

return ;
}



 void Controller_static_shutdown()	{

return ;
}




/* -------------------------------
 *
 * VTable
 *
 --------------------------------- */
 
// VTable for this class
 static  struct VTable VTableArrayForController  [] ={

{0,0,((VirtualFunctionPointer) _Z10ControllerE10CRobotServo10CRobotServo11CRobotSensor11CRobotSensor),},
{0,0,((VirtualFunctionPointer) _Z12control_loopEV),},
{0,0,((VirtualFunctionPointer) _Z10ControllerEV),},
				
}  ;

// Overload VTables


/* -------------------------------
 *
 * Internal memory constructor
 *
 --------------------------------- */
 
 
ControllerCLASS Controller_Constructor(ControllerCLASS this_ptr)
{

	if(this_ptr==NULL)
	{
		this_ptr = (ControllerCLASS) malloc(sizeof(struct Controller));
	}

	if(this_ptr!=NULL)
	{
	
			
		// Controller init
		this_ptr->_Controller_id = CLASS_ID_Controller_ID;
		this_ptr->_Controller_refs = 0;
		this_ptr->_Controller_pVTable=VTableArrayForController;

							this_ptr->m_Controller_servoLeft= NULL ;
						this_ptr->m_Controller_servoRight= NULL ;
						this_ptr->m_Controller_sensorRightVal= NULL ;
						this_ptr->m_Controller_sensorLeftVal= NULL ;
			}

	return this_ptr;
}

// Method for creating new "class"
static TVP new()
{
	ControllerCLASS ptr=Controller_Constructor(NULL);

	return newTypeValue(VDM_CLASS, (TypedValueType)
			{	.ptr=newClassValue(ptr->_Controller_id, &ptr->_Controller_refs, (freeVdmClassFunction)&Controller_free, ptr)});
}



/* -------------------------------
 *
 * Public class constructors
 *
 --------------------------------- */ 
 

/* Controller.vdmrt 11:9 */
 TVP _Z10ControllerE10CRobotServo10CRobotServo11CRobotSensor11CRobotSensor(ControllerCLASS this, TVP servL, TVP servR, TVP sensRightVal, TVP sensLeftVal)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, Controller);
}
;
/* Controller.vdmrt 14:16 */
TVP field_tmp_1 = vdmClone(servL)
;

SET_FIELD_PTR(Controller, Controller, this, servoLeft, field_tmp_1);

vdmFree(field_tmp_1);
/* Controller.vdmrt 15:17 */
TVP field_tmp_2 = vdmClone(servR)
;

SET_FIELD_PTR(Controller, Controller, this, servoRight, field_tmp_2);

vdmFree(field_tmp_2);
/* Controller.vdmrt 16:21 */
TVP field_tmp_3 = vdmClone(sensRightVal)
;

SET_FIELD_PTR(Controller, Controller, this, sensorRightVal, field_tmp_3);

vdmFree(field_tmp_3);
/* Controller.vdmrt 17:20 */
TVP field_tmp_4 = vdmClone(sensLeftVal)
;

SET_FIELD_PTR(Controller, Controller, this, sensorLeftVal, field_tmp_4);

vdmFree(field_tmp_4);

return __buf;
}


/* Controller.vdmrt 1:7 */
 TVP _Z10ControllerEV(ControllerCLASS this)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, Controller);
}
;

return __buf;
}




/* -------------------------------
 *
 * Global class fields
 *
 --------------------------------- */
 
// initialize globals - this is done last since they are declared in the header but uses init functions which are printet in any order
	TVP numFields_1 =  NULL ;
					
