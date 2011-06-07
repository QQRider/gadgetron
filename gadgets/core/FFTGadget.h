#ifndef FFTGADGET_H
#define FFTGADGET_H

#include "gadgetron_export.h"
#include "Gadget.h"
#include "GadgetMRIHeaders.h"
#include "hoNDArray.h"
#include <complex>

class EXPORTGADGETSCORE FFTGadget : 
public Gadget2<GadgetMessageImage, hoNDArray< std::complex<float> > >
{
 public:
  GADGET_DECLARE(FFTGadget)

 protected:
  virtual int process( GadgetContainerMessage< GadgetMessageImage>* m1,
		       GadgetContainerMessage< hoNDArray< std::complex<float> > >* m2);

};

#endif //FFTGADGET_H
