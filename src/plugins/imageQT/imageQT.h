/*-----------------------------------------------------------------

GEM - Graphics Environment for Multimedia

Load a picture (using QuickTime)

Copyright (c) 2011 IOhannes m zmoelnig. forum::für::umläute. IEM. zmoelnig@iem.kug.ac.at
For information on usage and redistribution, and for a DISCLAIMER OF ALL
WARRANTIES, see the file, "GEM.LICENSE.TERMS" in this distribution.


-----------------------------------------------------------------*/

#ifndef INCLUDE_GEM_PLUGINS_IMAGEQT_H_
#define INCLUDE_GEM_PLUGINS_IMAGEQT_H_
#include "plugins/image.h"
#include <stdio.h>

/*-----------------------------------------------------------------
  -------------------------------------------------------------------
  CLASS
  imageQT
  
  Loads in a picture
  
  KEYWORDS
  pix
  
  DESCRIPTION

  -----------------------------------------------------------------*/
namespace gem { namespace plugins { 
class GEM_EXPORT imageQT : public gem::plugins::image {
 public:

  //////////
  // Constructor
  imageQT(void);
  virtual ~imageQT(void);

  //////////
  // read an image
  virtual bool load(std::string filename, imageStruct&result);
  //////////
  // write an image
  virtual bool save(std::string filename, const imageStruct&result);

};
};};

#endif	// for header file