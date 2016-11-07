// The template for class
#include "RealPort.h"
#include <stdio.h>
#include <string.h>


/* -------------------------------
 *
 * Memory management methods
 *
 --------------------------------- */

void RealPort_free_fields(struct RealPort *this)
{
		vdmFree(this->m_RealPort_value);
	}

static void RealPort_free(struct RealPort *this)
{
	--this->_RealPort_refs;
	if (this->_RealPort_refs < 1)
	{
		RealPort_free_fields(this);
		free(this);
	}
}


/* -------------------------------
 *
 * Member methods 
 *
 --------------------------------- */
 

 static  TVP _Z18fieldInitializer20EV()	{
/* Fmi.vdmrt 82:15 */
TVP ret_28 = vdmClone(newReal(0.0))
;

return ret_28;
}


/* Fmi.vdmrt 88:9 */
 static  void _Z8setValueER(RealPortCLASS this, TVP v)	{
/* Fmi.vdmrt 89:24 */
TVP field_tmp_9 = vdmClone(v);
;

SET_FIELD_PTR(RealPort, RealPort, this, value, field_tmp_9);

vdmFree(field_tmp_9);
}


/* Fmi.vdmrt 91:9 */
 static  TVP _Z8getValueEV(RealPortCLASS this)	{
/* Fmi.vdmrt 92:23 */
//TVP ret_29 = vdmClone(GET_FIELD_PTR(RealPort, RealPort, this, value));
TVP ret_29 = vdmCloneGC(newRealGC(rand() % 200, NULL), &ret_29);
/* Fmi.vdmrt 92:16 */
return ret_29;
}



 void RealPort_const_init()	{

return ;
}



 void RealPort_const_shutdown()	{

return ;
}



 void RealPort_static_init()	{

return ;
}



 void RealPort_static_shutdown()	{

return ;
}


/* Fmi.vdmrt 29:9 */
 static  TVP Port__Z8getValueEV(PortCLASS base)	{

RealPortCLASS this = CLASS_DOWNCAST(Port, RealPort, base)
;

return _Z8getValueEV(this);
}




/* -------------------------------
 *
 * VTable
 *
 --------------------------------- */
 
// VTable for this class
 static  struct VTable VTableArrayForRealPort  [] ={

{0,0,((VirtualFunctionPointer) _Z8RealPortER),},
{0,0,((VirtualFunctionPointer) _Z8setValueER),},
{0,0,((VirtualFunctionPointer) _Z8getValueEV),},
{0,0,((VirtualFunctionPointer) _Z8RealPortEV),},
				
}  ;

// Overload VTables
 static  struct VTable g_VTableArrayForRealPort_Override_Port  [4]  ;


/* -------------------------------
 *
 * Internal memory constructor
 *
 --------------------------------- */
 
 
RealPortCLASS RealPort_Constructor(RealPortCLASS this_ptr)
{

	if(this_ptr==NULL)
	{
		this_ptr = (RealPortCLASS) malloc(sizeof(struct RealPort));
	}

	if(this_ptr!=NULL)
	{
	
			
		//init base Port
		Port_Constructor((PortCLASS)CLASS_CAST(this_ptr,RealPort,Port));

					if(! g_VTableArrayForRealPort_Override_Port[0].pFunc)
			{
				//obtain original Port VTable
				//This will require rework for multiple inheritance, specifically the "... [0].getVtable..."
				memcpy( g_VTableArrayForRealPort_Override_Port, this_ptr->_Port_pVTable, sizeof( struct VTable) * 4);
				
				//install overrides
									g_VTableArrayForRealPort_Override_Port[CLASS_Port__Z8getValueEV].pFunc = (VirtualFunctionPointer)Port__Z8getValueEV; //override
					
							}
			this_ptr->_Port_pVTable = g_VTableArrayForRealPort_Override_Port;
				
		
		// RealPort init
		this_ptr->_RealPort_id = CLASS_ID_RealPort_ID;
		this_ptr->_RealPort_refs = 0;
		this_ptr->_RealPort_pVTable=VTableArrayForRealPort;

				this_ptr->m_RealPort_value= _Z18fieldInitializer20EV();
			}

	return this_ptr;
}

// Method for creating new "class"
static TVP new()
{
	RealPortCLASS ptr=RealPort_Constructor(NULL);

	return newTypeValue(VDM_CLASS, (TypedValueType)
			{	.ptr=newClassValue(ptr->_RealPort_id, &ptr->_RealPort_refs, (freeVdmClassFunction)&RealPort_free, ptr)});
}



/* -------------------------------
 *
 * Public class constructors
 *
 --------------------------------- */ 
 

/* Fmi.vdmrt 85:9 */
 TVP _Z8RealPortER(RealPortCLASS this, TVP v)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, RealPort);
}
;
/* Fmi.vdmrt 86:15 */
CALL_FUNC_PTR(RealPort, RealPort, this, CLASS_RealPort__Z8setValueER, v);

_Z4PortEV(((PortCLASS) CLASS_CAST(this, RealPort, Port)));

return __buf;
}


/* Fmi.vdmrt 79:7 */
 TVP _Z8RealPortEV(RealPortCLASS this)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, RealPort);
}
;

_Z4PortEV(((PortCLASS) CLASS_CAST(this, RealPort, Port)));

return __buf;
}




/* -------------------------------
 *
 * Global class fields
 *
 --------------------------------- */
 
// initialize globals - this is done last since they are declared in the header but uses init functions which are printet in any order
	
