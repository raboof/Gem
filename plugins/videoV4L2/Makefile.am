
ACLOCAL_AMFLAGS = -I $(top_srcdir)/m4
AM_CPPFLAGS = -I$(top_srcdir)/src $(GEM_EXTERNAL_CPPFLAGS)

pkglib_LTLIBRARIES =
gemhelpdir=$(pkglibdir)
dist_gemhelp_DATA =

if HAVE_V4L2
pkglib_LTLIBRARIES+= gem_videoV4L2.la
dist_gemhelp_DATA += v4l2-videoplugin.pd
endif

gem_videoV4L2_la_CXXFLAGS =
gem_videoV4L2_la_LDFLAGS  = -module -avoid-version -shared
if WINDOWS
gem_videoV4L2_la_LDFLAGS += -no-undefined
endif
gem_videoV4L2_la_LIBADD   =

# RTE
gem_videoV4L2_la_CXXFLAGS += $(GEM_RTE_CFLAGS) $(GEM_ARCH_CXXFLAGS)
gem_videoV4L2_la_LDFLAGS  += $(GEM_RTE_LIBS)   $(GEM_ARCH_LDFLAGS)
# flags for building Gem externals
gem_videoV4L2_la_CXXFLAGS += $(GEM_EXTERNAL_CFLAGS)
gem_videoV4L2_la_LIBADD   += -L$(top_builddir) $(GEM_EXTERNAL_LIBS)
# flags for threading
gem_videoV4L2_la_CXXFLAGS += $(GEM_THREADS_CFLAGS)
gem_videoV4L2_la_LIBADD   += $(GEM_THREADS_LIBS)
# gem_videoV4L2_la @MOREFLAGS@

# Dependencies
gem_videoV4L2_la_CXXFLAGS += $(GEM_LIB_LIBV4L2_CFLAGS)
gem_videoV4L2_la_LIBADD   += $(GEM_LIB_LIBV4L2_LIBS)

# convenience symlinks
include $(srcdir)/../symlink_ltlib.mk


### SOURCES
gem_videoV4L2_la_SOURCES= videoV4L2.cpp videoV4L2.h

