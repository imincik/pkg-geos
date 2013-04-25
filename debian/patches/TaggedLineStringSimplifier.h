Index: geos/include/geos/simplify/TaggedLineStringSimplifier.h
===================================================================
--- geos.orig/include/geos/simplify/TaggedLineStringSimplifier.h	2011-11-30 16:54:52.000000000 +0100
+++ geos/include/geos/simplify/TaggedLineStringSimplifier.h	2011-12-02 14:41:32.000000000 +0100
@@ -29,6 +29,7 @@
 #include <cstddef>
 #include <vector>
 #include <memory>
+#include <cstddef>
 
 #ifdef _MSC_VER
 #pragma warning(push)
@@ -54,6 +55,7 @@
 namespace geos {
 namespace simplify { // geos::simplify
 
+using namespace std;
 
 /** \brief
  * Simplifies a TaggedLineString, preserving topology
