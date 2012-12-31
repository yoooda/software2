/*
 * ImageAnalyze.cpp
 *
 *  Created on: Dec 25, 2012
 *      Author: user
 */

#include "ImageAnalyze.h"
#include "Vision/BinaryImage.h"

double ImageAnalyze::GetTopXCenter(ColorImage *image)
{
	ParticleFilterCriteria2 filter={IMAQ_MT_AREA, 0, 950, false, true};
	BinaryImage* threshed = image->ThresholdRGB(26,255,0,64,0,86);
	BinaryImage* cunv=threshed->ConvexHull(true);
	BinaryImage* fitered=cunv->ParticleFilter(&filter,1);
	
	vector<ParticleAnalysisReport> *reports = fitered->GetOrderedParticleAnalysisReports();
	float max=(&reports->at(0))->center_mass_y;
	for (int i = 1; i < reports->size(); i++) {
	   if(max<(&reports->at(i))->center_mass_y)
	   {
		   
		   max=(&reports->at(i))->center_mass_y;
	   }
	  
	}
	return max;
	
}

