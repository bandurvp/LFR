// The template for class
#include "HardwareInterface.h"
#include <stdio.h>
#include <string.h>


/* -------------------------------
 *
 * Memory management methods
 *
 --------------------------------- */

void HardwareInterface_free_fields(struct HardwareInterface *this)
{
									}

static void HardwareInterface_free(struct HardwareInterface *this)
{
	--this->_HardwareInterface_refs;
	if (this->_HardwareInterface_refs < 1)
	{
		HardwareInterface_free_fields(this);
		free(this);
	}
}


/* -------------------------------
 *
 * Member methods 
 *
 --------------------------------- */
 

 static  TVP _Z18fieldInitializer10EV()	{
/* HardwareInterface.vdmrt 26:46 */
TVP ret_2 = vdmClone(_Z8RealPortER(NULL, newReal(0.0)))
;

return ret_2;
}



 static  TVP _Z17fieldInitializer9EV()	{
/* HardwareInterface.vdmrt 24:47 */
TVP ret_3 = vdmClone(_Z8RealPortER(NULL, newReal(0.0)))
;

return ret_3;
}



 static  TVP _Z17fieldInitializer8EV()	{
/* HardwareInterface.vdmrt 19:49 */
TVP ret_4 = vdmClone(_Z8RealPortER(NULL, newReal(0.0)))
;

return ret_4;
}



 static  TVP _Z17fieldInitializer7EV()	{
/* HardwareInterface.vdmrt 17:40 */
TVP ret_5 = vdmClone(_Z8RealPortER(NULL, newReal(0.0)))
;

return ret_5;
}



 static  TVP _Z17fieldInitializer6EV()	{
/* HardwareInterface.vdmrt 15:39 */
TVP ret_6 = vdmClone(_Z8RealPortER(NULL, newReal(0.0)))
;

return ret_6;
}



 static  TVP _Z17fieldInitializer5EV()	{
/* HardwareInterface.vdmrt 9:47 */
TVP ret_7 = vdmClone(_Z8RealPortER(NULL, newReal(1.0)))
;

return ret_7;
}



 static  TVP _Z17fieldInitializer4EV()	{
/* HardwareInterface.vdmrt 7:46 */
TVP ret_8 = vdmClone(_Z8RealPortER(NULL, newReal(5.0)))
;

return ret_8;
}



 static  TVP _Z17fieldInitializer3EV()	{
/* HardwareInterface.vdmrt 5:45 */
TVP ret_9 = vdmClone(_Z8RealPortER(NULL, newReal(4.0)))
;

return ret_9;
}



 static  TVP _Z17fieldInitializer2EV()	{

TVP ret_10 = vdmClone(newInt(8))
;

return ret_10;
}



 void HardwareInterface_const_init()	{

numFields_2 = _Z17fieldInitializer2EV();

g_HardwareInterface_forwardSpeed = _Z17fieldInitializer3EV();

g_HardwareInterface_forwardRotate = _Z17fieldInitializer4EV();

g_HardwareInterface_backwardRotate = _Z17fieldInitializer5EV();

return ;
}



 void HardwareInterface_const_shutdown()	{

vdmFree(numFields_2);

vdmFree(g_HardwareInterface_forwardSpeed);

vdmFree(g_HardwareInterface_forwardRotate);

vdmFree(g_HardwareInterface_backwardRotate);

return ;
}



 void HardwareInterface_static_init()	{

g_HardwareInterface_leftVal = _Z17fieldInitializer6EV();

g_HardwareInterface_rightVal = _Z17fieldInitializer7EV();

g_HardwareInterface_total_energy_used = _Z17fieldInitializer8EV();

g_HardwareInterface_servo_right_out = _Z17fieldInitializer9EV();

g_HardwareInterface_servo_left_out = _Z18fieldInitializer10EV();

return ;
}



 void HardwareInterface_static_shutdown()	{

vdmFree(g_HardwareInterface_leftVal);

vdmFree(g_HardwareInterface_rightVal);

vdmFree(g_HardwareInterface_total_energy_used);

vdmFree(g_HardwareInterface_servo_right_out);

vdmFree(g_HardwareInterface_servo_left_out);

return ;
}




/* -------------------------------
 *
 * VTable
 *
 --------------------------------- */
 
// VTable for this class
 static  struct VTable VTableArrayForHardwareInterface  [] ={

{0,0,((VirtualFunctionPointer) _Z17HardwareInterfaceEV),},
				
}  ;

// Overload VTables


/* -------------------------------
 *
 * Internal memory constructor
 *
 --------------------------------- */
 
 
HardwareInterfaceCLASS HardwareInterface_Constructor(HardwareInterfaceCLASS this_ptr)
{

	if(this_ptr==NULL)
	{
		this_ptr = (HardwareInterfaceCLASS) malloc(sizeof(struct HardwareInterface));
	}

	if(this_ptr!=NULL)
	{
	
			
		// HardwareInterface init
		this_ptr->_HardwareInterface_id = CLASS_ID_HardwareInterface_ID;
		this_ptr->_HardwareInterface_refs = 0;
		this_ptr->_HardwareInterface_pVTable=VTableArrayForHardwareInterface;

																												}

	return this_ptr;
}

// Method for creating new "class"
static TVP new()
{
	HardwareInterfaceCLASS ptr=HardwareInterface_Constructor(NULL);

	return newTypeValue(VDM_CLASS, (TypedValueType)
			{	.ptr=newClassValue(ptr->_HardwareInterface_id, &ptr->_HardwareInterface_refs, (freeVdmClassFunction)&HardwareInterface_free, ptr)});
}



/* -------------------------------
 *
 * Public class constructors
 *
 --------------------------------- */ 
 

/* HardwareInterface.vdmrt 1:7 */
 TVP _Z17HardwareInterfaceEV(HardwareInterfaceCLASS this)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, HardwareInterface);
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
	TVP numFields_2 =  NULL ;
		TVP g_HardwareInterface_forwardSpeed =  NULL ;
		TVP g_HardwareInterface_forwardRotate =  NULL ;
		TVP g_HardwareInterface_backwardRotate =  NULL ;
		TVP g_HardwareInterface_leftVal =  NULL ;
		TVP g_HardwareInterface_rightVal =  NULL ;
		TVP g_HardwareInterface_total_energy_used =  NULL ;
		TVP g_HardwareInterface_servo_right_out =  NULL ;
		TVP g_HardwareInterface_servo_left_out =  NULL ;
	
