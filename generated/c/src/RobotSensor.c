// The template for class
#include "RobotSensor.h"
#include <stdio.h>
#include <string.h>


/* -------------------------------
 *
 * Memory management methods
 *
 --------------------------------- */

void RobotSensor_free_fields(struct RobotSensor *this)
{
			vdmFree(this->m_RobotSensor_port);
	}

static void RobotSensor_free(struct RobotSensor *this)
{
	--this->_RobotSensor_refs;
	if (this->_RobotSensor_refs < 1)
	{
		RobotSensor_free_fields(this);
		free(this);
	}
}


/* -------------------------------
 *
 * Member methods 
 *
 --------------------------------- */
 

 static  TVP _Z18fieldInitializer11EV()	{

TVP ret_11 = vdmClone(newInt(1))
;

return ret_11;
}


/* RobotSensor.vdmrt 12:8 */
 static  TVP _Z10getReadingEV(RobotSensorCLASS this)	{
/* RobotSensor.vdmrt 13:23 */
TVP ret_12 = (CALL_FUNC(RealPort, RealPort, GET_FIELD_PTR(RobotSensor, RobotSensor, this, port), CLASS_RealPort__Z8getValueEV))
;
/* RobotSensor.vdmrt 13:16 */
return ret_12;
}


/* RobotSensor.vdmrt 15:8 */
 static  void _Z8setValueER(RobotSensorCLASS this, TVP v)	{
/* RobotSensor.vdmrt 16:15 */
CALL_FUNC(RealPort, RealPort, GET_FIELD_PTR(RobotSensor, RobotSensor, this, port), CLASS_RealPort__Z8setValueER, v);
}



 void RobotSensor_const_init()	{

numFields_3 = _Z18fieldInitializer11EV();

return ;
}



 void RobotSensor_const_shutdown()	{

vdmFree(numFields_3);

return ;
}



 void RobotSensor_static_init()	{

return ;
}



 void RobotSensor_static_shutdown()	{

return ;
}




/* -------------------------------
 *
 * VTable
 *
 --------------------------------- */
 
// VTable for this class
 static  struct VTable VTableArrayForRobotSensor  [] ={

{0,0,((VirtualFunctionPointer) _Z11RobotSensorE8CRealPort),},
{0,0,((VirtualFunctionPointer) _Z10getReadingEV),},
{0,0,((VirtualFunctionPointer) _Z8setValueER),},
{0,0,((VirtualFunctionPointer) _Z11RobotSensorEV),},
				
}  ;

// Overload VTables


/* -------------------------------
 *
 * Internal memory constructor
 *
 --------------------------------- */
 
 
RobotSensorCLASS RobotSensor_Constructor(RobotSensorCLASS this_ptr)
{

	if(this_ptr==NULL)
	{
		this_ptr = (RobotSensorCLASS) malloc(sizeof(struct RobotSensor));
	}

	if(this_ptr!=NULL)
	{
	
			
		// RobotSensor init
		this_ptr->_RobotSensor_id = CLASS_ID_RobotSensor_ID;
		this_ptr->_RobotSensor_refs = 0;
		this_ptr->_RobotSensor_pVTable=VTableArrayForRobotSensor;

							this_ptr->m_RobotSensor_port= NULL ;
			}

	return this_ptr;
}

// Method for creating new "class"
static TVP new()
{
	RobotSensorCLASS ptr=RobotSensor_Constructor(NULL);

	return newTypeValueGC(VDM_CLASS, (TypedValueType)
			{	.ptr=newClassValue(ptr->_RobotSensor_id, &ptr->_RobotSensor_refs, (freeVdmClassFunction)&RobotSensor_free, ptr)}, NULL);
}



/* -------------------------------
 *
 * Public class constructors
 *
 --------------------------------- */ 
 

/* RobotSensor.vdmrt 9:8 */
 TVP _Z11RobotSensorE8CRealPort(RobotSensorCLASS this, TVP p)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, RobotSensor);
}
;
/* RobotSensor.vdmrt 10:27 */
TVP field_tmp_5 = vdmClone(p)
;

SET_FIELD_PTR(RobotSensor, RobotSensor, this, port, field_tmp_5);

vdmFree(field_tmp_5);

return __buf;
}


/* RobotSensor.vdmrt 1:7 */
 TVP _Z11RobotSensorEV(RobotSensorCLASS this)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, RobotSensor);
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
	TVP numFields_3 =  NULL ;
		
