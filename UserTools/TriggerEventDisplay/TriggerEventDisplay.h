#ifndef TriggerEventDisplay_H
#define TriggerEventDisplay_H

#include <string>
#include <iostream>

#include "Tool.h"
#include "DataModel.h"
#include "EventDisplay.h"

#include "TScatter.h"
#include "TCanvas.h"

#include <TColor.h>
#include <TStyle.h>

#include <chrono>
#include <cstdint>

/**
 * \class TriggerEventDisplay
 *
 * This is a balnk template for a Tool used by the script to generate a new custom tool. Please fill out the descripton and author information.
*
* $Author: B.Richards $
* $Date: 2019/05/28 10:44:00 $
*/

struct EventDisplayStruct;

class TriggerEventDisplay: public Tool {


 public:

  TriggerEventDisplay(); ///< Simple constructor
  bool Initialise(std::string configfile,DataModel &data); ///< Initialise Function for setting up Tool resorces. @param configfile The path and name of the dynamic configuration file to read in. @param data A reference to the transient data class used to pass information between Tools.
  bool Execute(); ///< Executre function used to perform Tool perpose. 
  bool Finalise(); ///< Finalise funciton used to clean up resorces.

  
private:
  // std::vector<TScatter> makeEventDisplayFromHits(TriggerType trigger,double triggerTime, std::vector<WCTEMPMTHit> mpmt_hits);

  void sendDataToDatabase();
  EventDisplay eventDisplay;
  int iGraph;
  
  DataModel* m_data;
  
};


#endif
