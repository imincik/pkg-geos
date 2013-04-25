Index: geos/include/geos/simplify/TaggedLineString.h
===================================================================
--- geos.orig/include/geos/simplify/TaggedLineString.h	2011-11-30 16:54:52.000000000 +0100
+++ geos/include/geos/simplify/TaggedLineString.h	2011-12-02 14:41:17.000000000 +0100
@@ -29,6 +29,7 @@
 #include <geos/export.h>
 #include <vector>
 #include <memory>
+#include <cstddef>
 
 #ifdef _MSC_VER
 #pragma warning(push)
@@ -52,6 +53,7 @@
 namespace geos {
 namespace simplify { // geos::simplify
 
+using namespace std;
 
 /** \brief
  *
