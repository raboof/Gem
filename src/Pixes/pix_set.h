/*-----------------------------------------------------------------

 GEM - Graphics Environment for Multimedia
 
 interprete a (long) list of floats as a pixBlock
  
 Copyright (c) 1997-1999 Mark Danks. mark@danks.org
 Copyright (c) G�nther Geiger. geiger@epy.co.at
 Copyright (c) 2001-2002 IOhannes m zmoelnig. forum::f�r::uml�ute. IEM. zmoelnig@iem.kug.ac.at
 For information on usage and redistribution, and for a DISCLAIMER OF ALL
 WARRANTIES, see the file, "GEM.LICENSE.TERMS" in this distribution.
   
-----------------------------------------------------------------*/

/*-----------------------------------------------------------------
pix_set

  0409:forum::f�r::uml�ute:2000
  IOhannes m zmoelnig
  mailto:zmoelnig@iem.kug.ac.at
-----------------------------------------------------------------*/

#ifndef INCLUDE_PIX_SET_H_
#define INCLUDE_PIX_SET_H_

#include "Base/GemBase.h"
#include "Base/GemPixUtil.h"
#include "Base/GemCache.h"


/*-----------------------------------------------------------------
-------------------------------------------------------------------
CLASS
pix_set

 set the pixels via a float-package
 
  KEYWORDS
  pix
  
   DESCRIPTION
   
    "RGB"
    "RGBA"
    "GREY"
    
-----------------------------------------------------------------*/
class GEM_EXTERN pix_set : public GemBase
{
    CPPEXTERN_HEADER(pix_set, GemBase)
		
public:
	
	//////////
	// Constructor
	pix_set(t_floatarg xsize, t_floatarg ysize);
	
protected:
	
	//////////
	// Destructor
	virtual ~pix_set();
	
	//////////
	// Do the rendering
	virtual void 	render(GemState *state);
	
	//////////
	// Clear the dirty flag on the pixBlock
	virtual void 	postrender(GemState *state);
	
	//////////
	virtual void	startRendering();
	
	//////////
	// If you care about the stop of rendering
	virtual void	stopRendering() {};
	
	//////////
	// Clean up the pixBlock
	void	    	cleanPixBlock();
    
	//////////
	// Set to RGBA-mode
	void	    	RGBAMess();
	//////////
	// Set to RGB-mode
	void	    	RGBMess();
	//////////
	// Set to GREYSCALE-mode
	void	    	GREYMess();
	//////////
	// Set a new image size
	void	    	SETMess(int xsize, int ysize);
	//////////
	// Pass the data
	void	    	DATAMess(int argc, t_atom *argv);
	
	
	//-----------------------------------
	// GROUP:	Paint data
	//-----------------------------------
	
	//////////
	// paint mode
	int 	    	m_mode;
	
	//////////
	// The pixBlock with the current image
	pixBlock    	m_pixBlock;
	
private:
	
	//////////
	// static member functions
	static void RGBAMessCallback(void *data); 
	static void RGBMessCallback(void *data); 
	static void GREYMessCallback(void *data);
	static void SETMessCallback(void *data, t_float x, t_float y);

	static void DATAMessCallback(void *data, t_symbol *, int argc, t_atom *argv);
};

#endif	// for header file
