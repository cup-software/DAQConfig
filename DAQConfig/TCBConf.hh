/*
 *
 *  Module:  TCBConf
 *
 *  Author:  Jaison Lee
 *
 *  Purpose: Standalone Trigger board configuration class for KIMS
 *
 *  Last Update:      $Author: cupsoft $
 *  Update Date:      $Date: 2022/12/19 01:01:11 $
 *  CVS/RCS Revision: $Revision: 1.7 $
 *  Status:           $State: Exp $
 *
 */

#ifndef TCBConf_hh
#define TCBConf_hh

#include "DAQConfig/AbsConf.hh"

class TCBConf : public AbsConf {
public:
  TCBConf();
  TCBConf(int sid);
  virtual ~TCBConf();

  virtual void SetTM(int val);
  virtual void SetCW(int val);
  virtual void SetPTRG(int val);
  virtual void SetMTHRF(int val);
  virtual void SetPSCF(int val);
  virtual void SetDTF(int val);
  virtual void SetMTHRMU(int val);
  virtual void SetPSCMU(int val);
  virtual void SetDTMU(int val);
  virtual void SetMTHRLS(int val);
  virtual void SetPSCLS(int val);
  virtual void SetDTLS(int val);
  virtual void SetTMAMORE(int val);
  virtual void SetCWAMORE(int val);
  virtual void SetPTRGAMORE(int val);
  virtual void SetMTHRAMORE(int val);
  virtual void SetPSCAMORE(int val);
  virtual void SetDTAMORE(int val);
  virtual void SetDLY(int val);
  virtual void SetEXT(int val);
  virtual void SetEXTOUTWIDTH(int val);
  virtual void SetGATEDLY(int val);
  virtual void SetGATEWIDTH(int val);
  virtual void SetTCBTYPE(TCB::TYPE val);

  virtual int TM() const;
  virtual int CW() const;
  virtual int PTRG() const;
  virtual int MTHRF() const;
  virtual int PSCF() const;
  virtual int DTF() const;
  virtual int MTHRMU() const;
  virtual int PSCMU() const;
  virtual int DTMU() const;
  virtual int MTHRLS() const;
  virtual int PSCLS() const;
  virtual int DTLS() const;
  virtual int TMAMORE() const;
  virtual int CWAMORE() const;
  virtual int PTRGAMORE() const;
  virtual int MTHRAMORE() const;
  virtual int PSCAMORE() const;
  virtual int DTAMORE() const;
  virtual int DLY() const;
  virtual int EXT() const;
  virtual int EXTOUTWIDTH() const;
  virtual int GATEDLY() const;
  virtual int GATEWIDTH() const;
  virtual TCB::TYPE TCBTYPE() const;

  virtual void SetCID(int ch, int val) {}
  virtual void SetPID(int ch, int val) {}

  virtual int CID(int ch) const { return 0; }
  virtual int PID(int ch) const { return 0; }

  virtual void PrintConf() const;

private:
  int fTM;
  int fCW;
  int fPTRG;
  int fMTHRF;
  int fPSCF;
  int fDTF;
  int fMTHRMU;
  int fPSCMU;
  int fDTMU;
  int fMTHRLS;
  int fPSCLS;
  int fDTLS;
  int fTMAMORE;
  int fCWAMORE;
  int fPTRGAMORE;
  int fMTHRAMORE;
  int fPSCAMORE;
  int fDTAMORE;
  int fDLY;
  int fEXT;
  int fEXTOUTWIDTH;
  int fGATEDLY;
  int fGATEWIDTH;
  TCB::TYPE fTCBTYPE;

  ClassDef(TCBConf, 1)
};

inline void TCBConf::SetCW(int val) { fCW = val; }

inline void TCBConf::SetPTRG(int val) { fPTRG = val; }

inline void TCBConf::SetMTHRF(int val) { fMTHRF = val; }

inline void TCBConf::SetPSCF(int val) { fPSCF = val; }

inline void TCBConf::SetDTF(int val) { fDTF = val; }

inline void TCBConf::SetMTHRMU(int val) { fMTHRMU = val; }

inline void TCBConf::SetPSCMU(int val) { fPSCMU = val; }

inline void TCBConf::SetDTMU(int val) { fDTMU = val; }

inline void TCBConf::SetMTHRLS(int val) { fMTHRLS = val; }

inline void TCBConf::SetPSCLS(int val) { fPSCLS = val; }

inline void TCBConf::SetDTLS(int val) { fDTLS = val; }

inline void TCBConf::SetMTHRAMORE(int val) { fMTHRAMORE = val; }

inline void TCBConf::SetPSCAMORE(int val) { fPSCAMORE = val; }

inline void TCBConf::SetCWAMORE(int val) { fCWAMORE = val; }

inline void TCBConf::SetTMAMORE(int val) { fTMAMORE = val; }

inline void TCBConf::SetPTRGAMORE(int val) { fPTRGAMORE = val; }

inline void TCBConf::SetDTAMORE(int val) { fDTAMORE = val; }

inline void TCBConf::SetTM(int val) { fTM = val; }

inline void TCBConf::SetDLY(int val) { fDLY = val; }

inline void TCBConf::SetEXT(int val) { fEXT = val; }

inline void TCBConf::SetEXTOUTWIDTH(int val) { fEXTOUTWIDTH = val; }

inline void TCBConf::SetGATEWIDTH(int val) { fGATEWIDTH = val; }

inline void TCBConf::SetGATEDLY(int val) { fGATEDLY = val; }

inline void TCBConf::SetTCBTYPE(TCB::TYPE val) { fTCBTYPE = val; }

inline int TCBConf::CW() const { return fCW; }

inline int TCBConf::PTRG() const { return fPTRG; }

inline int TCBConf::MTHRF() const { return fMTHRF; }

inline int TCBConf::PSCF() const { return fPSCF; }

inline int TCBConf::DTF() const { return fDTF; }

inline int TCBConf::MTHRMU() const { return fMTHRMU; }

inline int TCBConf::PSCMU() const { return fPSCMU; }

inline int TCBConf::DTMU() const { return fDTMU; }

inline int TCBConf::MTHRLS() const { return fMTHRLS; }

inline int TCBConf::PSCLS() const { return fPSCLS; }

inline int TCBConf::DTLS() const { return fDTLS; }

inline int TCBConf::MTHRAMORE() const { return fMTHRAMORE; }

inline int TCBConf::PSCAMORE() const { return fPSCAMORE; }

inline int TCBConf::DTAMORE() const { return fDTAMORE; }

inline int TCBConf::CWAMORE() const { return fCWAMORE; }

inline int TCBConf::TMAMORE() const { return fTMAMORE; }

inline int TCBConf::PTRGAMORE() const { return fPTRGAMORE; }

inline int TCBConf::TM() const { return fTM; }

inline int TCBConf::DLY() const { return fDLY; }

inline int TCBConf::EXT() const { return fEXT; }

inline int TCBConf::EXTOUTWIDTH() const { return fEXTOUTWIDTH; }

inline int TCBConf::GATEWIDTH() const { return fGATEWIDTH; }

inline int TCBConf::GATEDLY() const { return fGATEDLY; }

inline TCB::TYPE TCBConf::TCBTYPE() const { return fTCBTYPE; }

#endif

/**
$Log: TCBConf.hh,v $
Revision 1.7  2022/12/19 01:01:11  cupsoft
add IADC things

Revision 1.6  2019/11/25 02:04:07  cupsoft
*** empty log message ***

Revision 1.5  2018/01/08 05:14:45  cupsoft
*** empty log message ***

Revision 1.4  2017/05/19 01:58:58  cupsoft
*** empty log message ***

Revision 1.3  2017/03/08 05:21:44  cupsoft
*** empty log message ***

Revision 1.2  2016/12/05 09:52:50  cupsoft
*** empty log message ***

Revision 1.1  2016/10/03 06:57:03  cupsoft
*** empty log message ***

Revision 1.1.1.1  2016/09/30 09:22:24  cupsoft
DAQConfig

Revision 1.3  2016/09/27 03:41:52  cupsoft
*** empty log message ***

Revision 1.2  2016/09/05 05:26:49  cupsoft
*** empty log message ***

Revision 1.1.1.1  2016/07/14 07:42:30  cupsoft
DAQSys

Revision 1.1.1.1  2016/03/08 04:37:46  amore
DAQSts

Revision 1.1.1.1  2016/02/29 08:26:44  cupsoft
DAQSys

**/
