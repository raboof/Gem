////////////////////////////////////////////////////////
//
// GEM - Graphics Environment for Multimedia
//
// zmoelnig@iem.kug.ac.at
//
// Implementation file
//
//    Copyright (c) 1997-1998 Mark Danks.
//    Copyright (c) G�nther Geiger.
//    Copyright (c) 2001-2002 IOhannes m zmoelnig. forum::f�r::uml�ute. IEM
//    For information on usage and redistribution, and for a DISCLAIMER OF ALL
//    WARRANTIES, see the file, "GEM.LICENSE.TERMS" in this distribution.
//
/////////////////////////////////////////////////////////

#include "sphere.h"

CPPEXTERN_NEW_WITH_ONE_ARG(sphere, t_floatarg, A_DEFFLOAT)

/////////////////////////////////////////////////////////
//
// sphere
//
/////////////////////////////////////////////////////////
// Constructor
//
/////////////////////////////////////////////////////////
sphere :: sphere(t_floatarg size)
        : GemGluObj(size)
{ }

/////////////////////////////////////////////////////////
// Destructor
//
/////////////////////////////////////////////////////////
sphere :: ~sphere()
{ }

/////////////////////////////////////////////////////////
// render
//
/////////////////////////////////////////////////////////
void sphere :: render(GemState *state)
{
    // lighting
    if (state->lighting)
    {
    	// normals
    	if (state->smooth) gluQuadricNormals(m_thing, (GLenum)GLU_SMOOTH);
    	else gluQuadricNormals(m_thing, (GLenum)GLU_FLAT);
    }
    
    // texture mapping
    if (state->texture) gluQuadricTexture(m_thing, GL_TRUE);
    else gluQuadricTexture(m_thing, GL_FALSE);
    
    gluQuadricDrawStyle(m_thing, m_drawType);
    gluSphere(m_thing, m_size, m_numSlices, m_numSlices);
}
/////////////////////////////////////////////////////////
// static member function
//
/////////////////////////////////////////////////////////
void sphere :: obj_setupCallback(t_class *)
{ }

