// The template for class
#include "System.h"
#include <stdio.h>
#include <string.h>


/* -------------------------------
 *
 * Memory management methods
 *
 --------------------------------- */

void System_free_fields(struct System *this)
{
			}

static void System_free(struct System *this)
{
	--this->_System_refs;
	if (this->_System_refs < 1)
	{
		System_free_fields(this);
		free(this);
	}
}


/* -------------------------------
 *
 * Member methods 
 *
 --------------------------------- */
 

 static  TVP _Z18fieldInitializer15EV()	{
/* System.vdmrt 8:46 */
TVP ret_15 = vdmClone(NULL)
;

return ret_15;
}



 static  TVP _Z18fieldInitializer14EV()	{
/* System.vdmrt 6:43 */
TVP ret_16 = vdmClone(_Z17HardwareInterfaceEV(NULL))
;

return ret_16;
}



 static  TVP _Z18fieldInitializer13EV()	{

TVP ret_17 = vdmClone(newInt(2))
;

return ret_17;
}



 void System_const_init()	{

numFields_5 = _Z18fieldInitializer13EV();

return ;
}



 void System_const_shutdown()	{

vdmFree(numFields_5);

return ;
}



 void System_static_init()	{

g_System_hwi = _Z18fieldInitializer14EV();

g_System_controller = _Z18fieldInitializer15EV();

return ;
}



 void System_static_shutdown()	{

vdmFree(g_System_hwi);

vdmFree(g_System_controller);

return ;
}




/* -------------------------------
 *
 * VTable
 *
 --------------------------------- */
 
// VTable for this class
 static  struct VTable VTableArrayForSystem  [] ={

{0,0,((VirtualFunctionPointer) _Z6SystemEV),},
				
}  ;

// Overload VTables


/* -------------------------------
 *
 * Internal memory constructor
 *
 --------------------------------- */
 
 
SystemCLASS System_Constructor(SystemCLASS this_ptr)
{

	if(this_ptr==NULL)
	{
		this_ptr = (SystemCLASS) malloc(sizeof(struct System));
	}

	if(this_ptr!=NULL)
	{
	
			
		// System init
		this_ptr->_System_id = CLASS_ID_System_ID;
		this_ptr->_System_refs = 0;
		this_ptr->_System_pVTable=VTableArrayForSystem;

										}

	return this_ptr;
}

// Method for creating new "class"
static TVP new()
{
	SystemCLASS ptr=System_Constructor(NULL);

	return newTypeValue(VDM_CLASS, (TypedValueType)
			{	.ptr=newClassValue(ptr->_System_id, &ptr->_System_refs, (freeVdmClassFunction)&System_free, ptr)});
}



/* -------------------------------
 *
 * Public class constructors
 *
 --------------------------------- */ 
 

/* System.vdmrt 14:8 */
 TVP _Z6SystemEV(SystemCLASS this)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, System);
}
;
/* System.vdmrt 16:6 */
TVP servoLeft = _Z10RobotServoE8CRealPort(NULL, vdmClone(g_HardwareInterface_servo_left_out))
;
/* System.vdmrt 17:6 */
TVP servoRight = _Z10RobotServoE8CRealPort(NULL, vdmClone(g_HardwareInterface_servo_right_out))
;
/* System.vdmrt 18:6 */
TVP sensorRightVal = _Z11RobotSensorE8CRealPort(NULL, vdmClone(g_HardwareInterface_rightVal))
;
/* System.vdmrt 19:6 */
TVP sensorLeftVal = _Z11RobotSensorE8CRealPort(NULL, vdmClone(g_HardwareInterface_leftVal))
;
/* System.vdmrt 21:4 */
g_System_controller = _Z10ControllerE10CRobotServo10CRobotServo11CRobotSensor11CRobotSensor(NULL, servoLeft, servoRight, sensorRightVal, sensorLeftVal);

return __buf;
}




/* -------------------------------
 *
 * Global class fields
 *
 --------------------------------- */
 
// initialize globals - this is done last since they are declared in the header but uses init functions which are printet in any order
	TVP numFields_5 =  NULL ;
		TVP g_System_hwi =  NULL ;
		TVP g_System_controller =  NULL ;
	
