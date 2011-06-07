#ifndef CROPANDCOMBINEGADGET_H
#define CROPANDCOMBINEGADGET_H

#include <complex>

#include "gadgetron_export.h"
#include "Gadget.h"
#include "GadgetMRIHeaders.h"
#include "hoNDArray.h"

class EXPORTGADGETSCORE CropAndCombineGadget : 
public Gadget2<GadgetMessageImage, hoNDArray< std::complex<float> > >
{
 public:
  GADGET_DECLARE(CropAndCombineGadget);

 protected:
  virtual int process( GadgetContainerMessage<GadgetMessageImage>* m1,
		       GadgetContainerMessage< hoNDArray< std::complex<float> > >* m2);
		     
};

#endif //CROPANDCOMBINEGADGET_H
