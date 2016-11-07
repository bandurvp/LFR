// The template for class
#include "RobotServo.h"
#include <stdio.h>
#include <string.h>


/* -------------------------------
 *
 * Memory management methods
 *
 --------------------------------- */

void RobotServo_free_fields(struct RobotServo *this)
{
			vdmFree(this->m_RobotServo_port);
	}

static void RobotServo_free(struct RobotServo *this)
{
	--this->_RobotServo_refs;
	if (this->_RobotServo_refs < 1)
	{
		RobotServo_free_fields(this);
		free(this);
	}
}


/* -------------------------------
 *
 * Member methods 
 *
 --------------------------------- */
 

 static  TVP _Z18fieldInitializer12EV()	{

TVP ret_13 = vdmClone(newInt(1))
;

return ret_13;
}


/* RobotServo.vdmrt 12:8 */
 static  void _Z8setServoER(RobotServoCLASS this, TVP value)	{
/* RobotServo.vdmrt 13:19 */
CALL_FUNC(RealPort, RealPort, GET_FIELD_PTR_GC(RobotServo, RobotServo, this, port), CLASS_RealPort__Z8setValueER, value);
}


/* RobotServo.vdmrt 15:8 */
 static  TVP _Z8getValueEV(RobotServoCLASS this)	{
/* RobotServo.vdmrt 16:21 */
TVP ret_14 = vdmClone(CALL_FUNC(RealPort, RealPort, GET_FIELD_PTR_GC(RobotServo, RobotServo, this, port), CLASS_RealPort__Z8getValueEV))
;
/* RobotServo.vdmrt 16:14 */
return ret_14;
}



 void RobotServo_const_init()	{

numFields_4 = _Z18fieldInitializer12EV();

return ;
}



 void RobotServo_const_shutdown()	{

vdmFree(numFields_4);

return ;
}



 void RobotServo_static_init()	{

return ;
}



 void RobotServo_static_shutdown()	{

return ;
}




/* -------------------------------
 *
 * VTable
 *
 --------------------------------- */
 
// VTable for this class
 static  struct VTable VTableArrayForRobotServo  [] ={

{0,0,((VirtualFunctionPointer) _Z10RobotServoE8CRealPort),},
{0,0,((VirtualFunctionPointer) _Z8setServoER),},
{0,0,((VirtualFunctionPointer) _Z8getValueEV),},
{0,0,((VirtualFunctionPointer) _Z10RobotServoEV),},
				
}  ;

// Overload VTables


/* -------------------------------
 *
 * Internal memory constructor
 *
 --------------------------------- */
 
 
RobotServoCLASS RobotServo_Constructor(RobotServoCLASS this_ptr)
{

	if(this_ptr==NULL)
	{
		this_ptr = (RobotServoCLASS) malloc(sizeof(struct RobotServo));
	}

	if(this_ptr!=NULL)
	{
	
			
		// RobotServo init
		this_ptr->_RobotServo_id = CLASS_ID_RobotServo_ID;
		this_ptr->_RobotServo_refs = 0;
		this_ptr->_RobotServo_pVTable=VTableArrayForRobotServo;

							this_ptr->m_RobotServo_port= NULL ;
			}

	return this_ptr;
}

// Method for creating new "class"
static TVP new()
{
	RobotServoCLASS ptr=RobotServo_Constructor(NULL);

	return newTypeValue(VDM_CLASS, (TypedValueType)
			{	.ptr=newClassValue(ptr->_RobotServo_id, &ptr->_RobotServo_refs, (freeVdmClassFunction)&RobotServo_free, ptr)});
}



/* -------------------------------
 *
 * Public class constructors
 *
 --------------------------------- */ 
 

/* RobotServo.vdmrt 9:8 */
 TVP _Z10RobotServoE8CRealPort(RobotServoCLASS this, TVP p)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, RobotServo);
}
;
/* RobotServo.vdmrt 10:26 */
TVP field_tmp_6 = vdmClone(p)
;

SET_FIELD_PTR(RobotServo, RobotServo, this, port, field_tmp_6);

vdmFree(field_tmp_6);

return __buf;
}


/* RobotServo.vdmrt 1:7 */
 TVP _Z10RobotServoEV(RobotServoCLASS this)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, RobotServo);
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
	TVP numFields_4 =  NULL ;
		
