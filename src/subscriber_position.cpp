// LES FICHIERS EN-TETE

#include <ros/ros.h>

// LES NAMESPACES
using namespace ros;

// LES FONCTIONS


// MAIN
int main(int argc, char **argv) {
  init(argc, argv, "subscriber_position");
  NodeHandle nh;

  // subscribers ICI



  // appel bloquant à spin() afin de garder le noeud "en vie" avant un CTRL+C
  spin();

  return 0;
}
