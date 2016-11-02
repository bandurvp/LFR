// The template for class
#include "Port.h"
#include <stdio.h>
#include <string.h>


/* -------------------------------
 *
 * Memory management methods
 *
 --------------------------------- */

void Port_free_fields(struct Port *this)
{
	}

static void Port_free(struct Port *this)
{
	--this->_Port_refs;
	if (this->_Port_refs < 1)
	{
		Port_free_fields(this);
		free(this);
	}
}


/* -------------------------------
 *
 * Member methods 
 *
 --------------------------------- */
 

 static  TVP _Z18fieldInitializer17EV()	{

TVP ret_19 = vdmClone(newInt(0))
;

return ret_19;
}


/* Fmi.vdmrt 26:9 */
 static  void _Z8setValueE5X1QCBR(PortCLASS this, TVP v)	{

return ;
}


/* Fmi.vdmrt 29:9 */
 static  TVP _Z8getValueEV(PortCLASS this)	{

return NULL;
}


/* Fmi.vdmrt 32:16 */
 static  TVP _Z6createE5X1QCBR(PortCLASS this, TVP v)	{
/* Fmi.vdmrt 34:3 */
if ( toBool(isReal(v)
) )
	
	{
/* Fmi.vdmrt 35:11 */
TVP ret_20 = vdmClone(_Z8RealPortER(NULL, v))
;
/* Fmi.vdmrt 35:4 */
return ret_20;
}
else if ( toBool(isBool(v)
) )
	
	{
/* Fmi.vdmrt 37:11 */
TVP ret_21 = vdmClone(_Z8BoolPortEB(NULL, v))
;
/* Fmi.vdmrt 37:4 */
return ret_21;
}
else if ( toBool(isInt(v)
) )
	
	{
/* Fmi.vdmrt 39:11 */
TVP ret_22 = vdmClone(_Z7IntPortEI(NULL, v))
;
/* Fmi.vdmrt 39:4 */
return ret_22;
}
else
	
	{
/* Fmi.vdmrt 41:11 */
TVP ret_23 = vdmClone(_Z10StringPortE1QC(NULL, v))
;
/* Fmi.vdmrt 41:4 */
return ret_23;
}
;
}



 void Port_const_init()	{

numFields_7 = _Z18fieldInitializer17EV();

return ;
}



 void Port_const_shutdown()	{

vdmFree(numFields_7);

return ;
}



 void Port_static_init()	{

return ;
}



 void Port_static_shutdown()	{

return ;
}




/* -------------------------------
 *
 * VTable
 *
 --------------------------------- */
 
// VTable for this class
 static  struct VTable VTableArrayForPort  [] ={

{0,0,((VirtualFunctionPointer) _Z8setValueE5X1QCBR),},
{0,0,((VirtualFunctionPointer) _Z8getValueEV),},
{0,0,((VirtualFunctionPointer) _Z6createE5X1QCBR),},
{0,0,((VirtualFunctionPointer) _Z4PortEV),},
				
}  ;

// Overload VTables


/* -------------------------------
 *
 * Internal memory constructor
 *
 --------------------------------- */
 
 
PortCLASS Port_Constructor(PortCLASS this_ptr)
{

	if(this_ptr==NULL)
	{
		this_ptr = (PortCLASS) malloc(sizeof(struct Port));
	}

	if(this_ptr!=NULL)
	{
	
			
		// Port init
		this_ptr->_Port_id = CLASS_ID_Port_ID;
		this_ptr->_Port_refs = 0;
		this_ptr->_Port_pVTable=VTableArrayForPort;

				}

	return this_ptr;
}

// Method for creating new "class"
static TVP new()
{
	PortCLASS ptr=Port_Constructor(NULL);

	return newTypeValue(VDM_CLASS, (TypedValueType)
			{	.ptr=newClassValue(ptr->_Port_id, &ptr->_Port_refs, (freeVdmClassFunction)&Port_free, ptr)});
}



/* -------------------------------
 *
 * Public class constructors
 *
 --------------------------------- */ 
 

/* Fmi.vdmrt 18:7 */
 TVP _Z4PortEV(PortCLASS this)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, Port);
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
	TVP numFields_7 =  NULL ;
	
