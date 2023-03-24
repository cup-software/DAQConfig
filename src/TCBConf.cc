/*
 *
 *  Module:  TCBConf
 *
 *  Author:  Jaison Lee
 *
 *  Purpose: Standalone TCB for KIMS configuration class
 *
 *  Last Update:      $Author: cupsoft $
 *  Update Date:      $Date: 2022/12/19 01:01:11 $
 *  CVS/RCS Revision: $Revision: 1.12 $
 *  Status:           $State: Exp $
 *
 */

#include "DAQConfig/TCBConf.hh"
#include <iostream>

using namespace std;

ClassImp(TCBConf)

TCBConf::TCBConf()
    : AbsConf(0)
{
}

TCBConf::TCBConf(int sid)
    : AbsConf(sid)
{
  SetNameTitle("TCB", "Trigger Control Board");
  SetEnable();

  fTM = 1;
  fCW = 1000;
  fPTRG = 1000;
  fMTHRF = 1;
  fPSCF = 1;
  fDTF = 0;
  fMTHRMU = 1;
  fPSCMU = 1;
  fDTMU = 0;
  fMTHRLS = 1;
  fPSCLS = 1;
  fDTLS = 0;
  fTMAMORE = 1;
  fCWAMORE = 0;
  fPTRGAMORE = 1000;
  fMTHRAMORE = 1;
  fPSCAMORE = 1;
  fDTAMORE = 0;
  fDLY = 0;
  fEXT = 0;
  fEXTOUTWIDTH = 0;
  fGATEDLY = 0;
  fGATEWIDTH = 0;
  fTCBTYPE = TCB::V1;
  fADCType = ADC::TCB;
}

TCBConf::~TCBConf() {}

void TCBConf::PrintConf() const
{
  if (fTCBTYPE == TCB::V1) { // General TCB
    cout << Form(" ++   TCB config: SID(%1d) TRGON(%d) CW(%d) DLY(%d) "
                 "PTRIG(%d) \n"
                 "                  MTHRF(%d) PSCF(%d) DTF(%d)\n",
                 fSID, fTM, fCW, fDLY, fPTRG, fMTHRF, fPSCF, fDTF)
         << endl;
  }
  else if (fTCBTYPE == TCB::NEOS) { // NEOS TCB
    cout << Form(" ++   TCB config: SID(%1d) TRGON(%d) CW(%d) DLY(%d) "
                 "PTRIG(%d) \n"
                 "                  MTHRF(%d) PSCF(%d) DTF(%d)\n"
                 "                  MTHRMU(%d) PSCMU(%d) DTMU(%d)\n",
                 fSID, fTM, fCW, fDLY, fPTRG, fMTHRF, fPSCF, fDTF, fMTHRMU,
                 fPSCMU, fDTMU)
         << endl;
  }
  else if (fTCBTYPE == TCB::COSINE) { // COSINE TCB
    cout << Form(" ++   TCB config: SID(%1d) TRGON(%d) CW(%d) DLY(%d) "
                 "PTRIG(%d) \n"
                 "                  MTHRF(%d) PSCF(%d) DTF(%d)\n"
                 "                  MTHRMU(%d) PSCMU(%d) DTMU(%d)\n"
                 "                  MTHRLS(%d) PSCLS(%d) DTLS(%d)\n",
                 fSID, fTM, fCW, fDLY, fPTRG, fMTHRF, fPSCF, fDTF, fMTHRMU,
                 fPSCMU, fDTMU, fMTHRLS, fPSCLS, fDTLS)
         << endl;
  }
  else if (fTCBTYPE == TCB::MINI) { // Mini TCB
    cout << Form(" ++   TCB config: SID(%1d) TRGON(%d) CW(%d) DLY(%d) "
                 "PTRIG(%d) \n"
                 "                  MTHRF(%d) PSCF(%d) DTF(%d)\n",
                 fSID, fTM, fCW, fDLY, fPTRG, fMTHRF, fPSCF, fDTF)
         << endl;
  }
  else if (fTCBTYPE == TCB::AMORE1) { // AMORE1 TCB
    cout << Form(" ++   TCB config: SID(%1d) TRGON(%d) CW(%d) DLY(%d) "
                 "PTRIG(%d) \n"
                 "                  MTHRF(%d) PSCF(%d) DTF(%d)\n"
                 "                  TMAMORE(%d) CWAMORE(%d) PTRIGAMORE(%d)\n"
                 "                  MTHRAMORE(%d) PSCAMORE(%d) DTAMORE(%d)",
                 fSID, fTM, fCW, fDLY, fPTRG, fMTHRF, fPSCF, fDTF, fTMAMORE,
                 fCWAMORE, fPTRGAMORE, fMTHRAMORE, fPSCAMORE, fDTAMORE)
         << endl;
  }
  else if (fTCBTYPE == TCB::GBAR) { // GBAR TCB
    cout << Form(" ++   TCB config: SID(%1d) TRGON(%d) CW(%d) DLY(%d) "
                 "PTRIG(%d) \n"
                 "                  MTHRF(%d) PSCF(%d) DTF(%d)\n"
                 "                  EXT(%d) EXTOUTWIDTH(%d) GATEDLY(%d) "
                 "GATEWIDTH(%d)\n",
                 fSID, fTM, fCW, fDLY, fPTRG, fMTHRF, fPSCF, fDTF, fEXT,
                 fEXTOUTWIDTH, fGATEDLY, fGATEWIDTH)
         << endl;
  }
}

/**
$Log: TCBConf.cc,v $
Revision 1.12  2022/12/19 01:01:11  cupsoft
add IADC things

Revision 1.11  2019/11/25 02:04:07  cupsoft
*** empty log message ***

Revision 1.10  2019/07/24 07:04:23  cupsoft
*** empty log message ***

Revision 1.9  2018/11/01 01:40:44  cupsoft
*** empty log message ***

Revision 1.8  2018/02/19 03:34:24  cupsoft
*** empty log message ***

Revision 1.7  2018/01/08 05:14:46  cupsoft
*** empty log message ***

Revision 1.6  2017/05/19 01:58:58  cupsoft
*** empty log message ***

Revision 1.5  2017/03/08 05:21:44  cupsoft
*** empty log message ***

Revision 1.4  2016/12/14 04:54:27  cupsoft
*** empty log message ***

Revision 1.3  2016/12/05 09:52:51  cupsoft
*** empty log message ***

Revision 1.2  2016/10/03 09:52:02  cupsoft
*** empty log message ***

Revision 1.1  2016/10/03 06:57:05  cupsoft
*** empty log message ***

Revision 1.2  2016/10/01 17:10:54  cupsoft
clean up

Revision 1.1.1.1  2016/09/30 09:22:24  cupsoft
DAQConfig

Revision 1.2  2016/09/27 03:41:55  cupsoft
*** empty log message ***

Revision 1.1.1.1  2016/07/14 07:42:30  cupsoft
DAQSys

Revision 1.1.1.1  2016/03/08 04:37:46  amore
DAQSts

Revision 1.1.1.1  2016/02/29 08:26:44  cupsoft
DAQSys

**/
