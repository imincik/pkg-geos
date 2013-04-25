Index: geos/include/geos/planargraph/DirectedEdgeStar.h
===================================================================
--- geos.orig/include/geos/planargraph/DirectedEdgeStar.h	2011-11-30 16:54:52.000000000 +0100
+++ geos/include/geos/planargraph/DirectedEdgeStar.h	2011-12-02 14:40:45.000000000 +0100
@@ -20,6 +20,7 @@
 #include <geos/export.h>
 
 #include <vector>
+#include <cstddef>
 
 #ifdef _MSC_VER
 #pragma warning(push)
@@ -40,6 +41,8 @@
 namespace geos {
 namespace planargraph { // geos.planargraph
 
+using namespace std;
+
 /// A sorted collection of DirectedEdge which leave a Node in a PlanarGraph.
 class GEOS_DLL DirectedEdgeStar {
 protected:
