// The template for class
#include "World.h"
#include <stdio.h>
#include <string.h>


/* -------------------------------
 *
 * Memory management methods
 *
 --------------------------------- */

void World_free_fields(struct World *this)
{
	}

static void World_free(struct World *this)
{
	--this->_World_refs;
	if (this->_World_refs < 1)
	{
		World_free_fields(this);
		free(this);
	}
}


/* -------------------------------
 *
 * Member methods 
 *
 --------------------------------- */
 

 static  TVP _Z18fieldInitializer16EV()	{

TVP ret_18 = vdmClone(newInt(0))
;

return ret_18;
}


/* World.vdmrt 5:8 */
 static  void _Z3runEV(WorldCLASS this)	{
/* World.vdmrt 7:2 */
/* Undefined template: AStartStmIR */;
/* World.vdmrt 8:2 */
CALL_FUNC_PTR(World, World, this, CLASS_World__Z5blockEV);
}


/* World.vdmrt 11:9 */
 static  void _Z5blockEV(WorldCLASS this)	{
/* World.vdmrt 12:13 */
{
//Skip
};
}



 void World_const_init()	{

numFields_6 = _Z18fieldInitializer16EV();

return ;
}



 void World_const_shutdown()	{

vdmFree(numFields_6);

return ;
}



 void World_static_init()	{

return ;
}



 void World_static_shutdown()	{

return ;
}




/* -------------------------------
 *
 * VTable
 *
 --------------------------------- */
 
// VTable for this class
 static  struct VTable VTableArrayForWorld  [] ={

{0,0,((VirtualFunctionPointer) _Z3runEV),},
{0,0,((VirtualFunctionPointer) _Z5blockEV),},
{0,0,((VirtualFunctionPointer) _Z5WorldEV),},
				
}  ;

// Overload VTables


/* -------------------------------
 *
 * Internal memory constructor
 *
 --------------------------------- */
 
 
WorldCLASS World_Constructor(WorldCLASS this_ptr)
{

	if(this_ptr==NULL)
	{
		this_ptr = (WorldCLASS) malloc(sizeof(struct World));
	}

	if(this_ptr!=NULL)
	{
	
			
		// World init
		this_ptr->_World_id = CLASS_ID_World_ID;
		this_ptr->_World_refs = 0;
		this_ptr->_World_pVTable=VTableArrayForWorld;

				}

	return this_ptr;
}

// Method for creating new "class"
static TVP new()
{
	WorldCLASS ptr=World_Constructor(NULL);

	return newTypeValue(VDM_CLASS, (TypedValueType)
			{	.ptr=newClassValue(ptr->_World_id, &ptr->_World_refs, (freeVdmClassFunction)&World_free, ptr)});
}



/* -------------------------------
 *
 * Public class constructors
 *
 --------------------------------- */ 
 

/* World.vdmrt 1:7 */
 TVP _Z5WorldEV(WorldCLASS this)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, World);
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
	TVP numFields_6 =  NULL ;
	
