// The template for class
#include "StringPort.h"
#include <stdio.h>
#include <string.h>


/* -------------------------------
 *
 * Memory management methods
 *
 --------------------------------- */

void StringPort_free_fields(struct StringPort *this)
{
		vdmFree(this->m_StringPort_value);
	}

static void StringPort_free(struct StringPort *this)
{
	--this->_StringPort_refs;
	if (this->_StringPort_refs < 1)
	{
		StringPort_free_fields(this);
		free(this);
	}
}


/* -------------------------------
 *
 * Member methods 
 *
 --------------------------------- */
 

 static  TVP _Z18fieldInitializer21EV()	{
/* Fmi.vdmrt 99:17 */
TVP ret_30 = vdmClone(newSeqVar(0, NULL)
)
;

return ret_30;
}


/* Fmi.vdmrt 105:9 */
 static  void _Z8setValueE1QC(StringPortCLASS this, TVP v)	{
/* Fmi.vdmrt 106:24 */
TVP field_tmp_10 = vdmClone(v)
;

SET_FIELD_PTR(StringPort, StringPort, this, value, field_tmp_10);

vdmFree(field_tmp_10);
}


/* Fmi.vdmrt 108:9 */
 static  TVP _Z8getValueEV(StringPortCLASS this)	{
/* Fmi.vdmrt 109:23 */
TVP ret_31 = vdmClone(GET_FIELD_PTR(StringPort, StringPort, this, value))
;
/* Fmi.vdmrt 109:16 */
return ret_31;
}



 void StringPort_const_init()	{

return ;
}



 void StringPort_const_shutdown()	{

return ;
}



 void StringPort_static_init()	{

return ;
}



 void StringPort_static_shutdown()	{

return ;
}


/* Fmi.vdmrt 29:9 */
 static  TVP Port__Z8getValueEV(PortCLASS base)	{

StringPortCLASS this = CLASS_DOWNCAST(Port, StringPort, base)
;

return _Z8getValueEV(this);
}




/* -------------------------------
 *
 * VTable
 *
 --------------------------------- */
 
// VTable for this class
 static  struct VTable VTableArrayForStringPort  [] ={

{0,0,((VirtualFunctionPointer) _Z10StringPortE1QC),},
{0,0,((VirtualFunctionPointer) _Z8setValueE1QC),},
{0,0,((VirtualFunctionPointer) _Z8getValueEV),},
{0,0,((VirtualFunctionPointer) _Z10StringPortEV),},
				
}  ;

// Overload VTables
 static  struct VTable g_VTableArrayForStringPort_Override_Port  [4]  ;


/* -------------------------------
 *
 * Internal memory constructor
 *
 --------------------------------- */
 
 
StringPortCLASS StringPort_Constructor(StringPortCLASS this_ptr)
{

	if(this_ptr==NULL)
	{
		this_ptr = (StringPortCLASS) malloc(sizeof(struct StringPort));
	}

	if(this_ptr!=NULL)
	{
	
			
		//init base Port
		Port_Constructor((PortCLASS)CLASS_CAST(this_ptr,StringPort,Port));

					if(! g_VTableArrayForStringPort_Override_Port[0].pFunc)
			{
				//obtain original Port VTable
				//This will require rework for multiple inheritance, specifically the "... [0].getVtable..."
				memcpy( g_VTableArrayForStringPort_Override_Port, this_ptr->_Port_pVTable, sizeof( struct VTable) * 4);
				
				//install overrides
									g_VTableArrayForStringPort_Override_Port[CLASS_Port__Z8getValueEV].pFunc = (VirtualFunctionPointer)Port__Z8getValueEV; //override
					
							}
			this_ptr->_Port_pVTable = g_VTableArrayForStringPort_Override_Port;
				
		
		// StringPort init
		this_ptr->_StringPort_id = CLASS_ID_StringPort_ID;
		this_ptr->_StringPort_refs = 0;
		this_ptr->_StringPort_pVTable=VTableArrayForStringPort;

				this_ptr->m_StringPort_value= _Z18fieldInitializer21EV();
			}

	return this_ptr;
}

// Method for creating new "class"
static TVP new()
{
	StringPortCLASS ptr=StringPort_Constructor(NULL);

	return newTypeValue(VDM_CLASS, (TypedValueType)
			{	.ptr=newClassValue(ptr->_StringPort_id, &ptr->_StringPort_refs, (freeVdmClassFunction)&StringPort_free, ptr)});
}



/* -------------------------------
 *
 * Public class constructors
 *
 --------------------------------- */ 
 

/* Fmi.vdmrt 102:9 */
 TVP _Z10StringPortE1QC(StringPortCLASS this, TVP v)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, StringPort);
}
;
/* Fmi.vdmrt 103:17 */
CALL_FUNC_PTR(StringPort, StringPort, this, CLASS_StringPort__Z8setValueE1QC, v);

_Z4PortEV(((PortCLASS) CLASS_CAST(this, StringPort, Port)));

return __buf;
}


/* Fmi.vdmrt 96:7 */
 TVP _Z10StringPortEV(StringPortCLASS this)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, StringPort);
}
;

_Z4PortEV(((PortCLASS) CLASS_CAST(this, StringPort, Port)));

return __buf;
}




/* -------------------------------
 *
 * Global class fields
 *
 --------------------------------- */
 
// initialize globals - this is done last since they are declared in the header but uses init functions which are printet in any order
	
