/*-----------------------------------------------------------------
LOG
    GEM - Graphics Environment for Multimedia

    color a gem object

    Copyright (c) 1997-1999 Mark Danks. mark@danks.org
    Copyright (c) G�nther Geiger. geiger@epy.co.at
    Copyright (c) 2001-2002 IOhannes m zmoelnig. forum::f�r::uml�ute. IEM. zmoelnig@iem.kug.ac.at
    For information on usage and redistribution, and for a DISCLAIMER OF ALL
    WARRANTIES, see the file, "GEM.LICENSE.TERMS" in this distribution.

-----------------------------------------------------------------*/

#ifndef INCLUDE_COLOR_H_
#define INCLUDE_COLOR_H_

#include "Base/GemBase.h"

/*-----------------------------------------------------------------
-------------------------------------------------------------------
CLASS
    color
    
    color a gem object

DESCRIPTION

    Inlet for a list - "color"

    "color" - the RGB color to set the object to
    
-----------------------------------------------------------------*/
class GEM_EXTERN color : public GemBase
{
    CPPEXTERN_HEADER(color, GemBase)

    public:

	    //////////
	    // Constructor
    	color(int argc, t_atom *argv);
    	
    protected:
    	
    	//////////
    	// Destructor
    	virtual ~color();

    	//////////
    	// When a gem message is received
    	virtual void	render(GemState *state);

    	//////////
    	// The color vector (RGBA)
    	float	    	m_color[4];

    	//////////
    	// Color changed
    	void	    	colorMess(float red, float green, float blue, float alpha);
    	
    private:
    	
    	//////////
    	// static member functions
    	static void 	colorMessCallback(void *data, t_symbol *, int argc, t_atom *argv);
};

#endif	// for header file
