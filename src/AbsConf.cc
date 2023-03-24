#include "DAQConfig/AbsConf.hh"

ClassImp(AbsConf)

AbsConf::AbsConf()
    : TNamed(),
      fIsEnabled(false),
      fIsLinked(false),
      fSID(0),
      fDAQID(0)
{
  fMID = 0;
}

AbsConf::AbsConf(int sid, UShort_t type)
    : TNamed(),
      fIsEnabled(false),
      fIsLinked(false),
      fSID(sid),
      fDAQID(0)
{
  fMID = fSID + (type << 6);
}

AbsConf::~AbsConf() {}

int AbsConf::Compare(const TObject * object) const
{
  auto * comp = (AbsConf *)object;

  if (this->MID() > comp->MID()) return 1;
  else if (this->MID() < comp->MID()) return -1;

  return 0;
}

const char * AbsConf::InfoStr() const
{
  return Form("%5s [sid=%d mid=%d]", fName.Data(), fSID, fMID);
}