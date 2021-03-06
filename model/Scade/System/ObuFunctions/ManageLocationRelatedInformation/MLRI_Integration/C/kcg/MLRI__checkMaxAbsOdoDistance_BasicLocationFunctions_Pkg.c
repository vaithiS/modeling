/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance */
kcg_bool MLRI__checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_2 */MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg *odo_2,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::odo_1 */MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg *odo_1,
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::maxDelta */MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg *maxDelta)
{
  kcg_int tmp;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::_L6 */ kcg_int _L6;
  /* BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance::isLessThanOrEqual */ kcg_bool isLessThanOrEqual;
  
  _L6 = (*odo_2).o_nominal - (*odo_1).o_nominal;
  if (0 <= _L6) {
    tmp = _L6;
  }
  else {
    tmp = - _L6;
  }
  isLessThanOrEqual = tmp <= (*maxDelta).o_nominal;
  return isLessThanOrEqual;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

