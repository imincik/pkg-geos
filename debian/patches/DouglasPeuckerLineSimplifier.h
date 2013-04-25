Index: geos/include/geos/simplify/DouglasPeuckerLineSimplifier.h
===================================================================
--- geos.orig/include/geos/simplify/DouglasPeuckerLineSimplifier.h	2011-11-30 16:54:52.000000000 +0100
+++ geos/include/geos/simplify/DouglasPeuckerLineSimplifier.h	2011-12-02 14:40:59.000000000 +0100
@@ -23,6 +23,7 @@
 #include <geos/export.h>
 #include <vector>
 #include <memory> // for auto_ptr
+#include <cstddef> 
 
 #ifdef _MSC_VER
 #pragma warning(push)
@@ -39,6 +40,8 @@
 namespace geos {
 namespace simplify { // geos::simplify
 
+using namespace std;
+
 /** \brief
  * Simplifies a linestring (sequence of points) using
  * the standard Douglas-Peucker algorithm.
