// ---LES FICHIERS EN-TETE ----
#include <ros/ros.h>

// LES NAMESPACES
using namespace ros;

// LES VARS GLOBALES
Publisher pub_cmd_ang;
//TYPE cmd_ang;

// LES FONCTIONS


// MAIN
int main(int argc, char **argv) {
  init(argc, argv, "publisher_cmdes");
  NodeHandle nh;

  // Declaration des publishers
  pub_cmd_ang = nh.advertise<???>("/???", 10);

  
  // Instruction à ne pas effacer
  Duration(0.3).sleep();

  // Publication des topics








  return 0;
}
