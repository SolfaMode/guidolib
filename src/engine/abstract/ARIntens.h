#ifndef ARIntens_H
#define ARIntens_H

/*
  GUIDO Library
  Copyright (C) 2002  Holger Hoos, Juergen Kilian, Kai Renz
  Copyright (C) 2002-2017 Grame

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Grame Research Laboratory, 11, cours de Verdun Gensoul 69002 Lyon - France
  research@grame.fr

*/

#include <string>

#include "ARFontAble.h"

/** \brief The intensity tag.
*/
class ARIntens :  public ARFontAble
{
	public:
				 ARIntens(const char * txt);
				 ARIntens();
		virtual ~ARIntens() {}

		virtual void setTagParameters (const TagParameterMap& params);

		virtual const std::string& getText() const 			{ return fIntens; }
		virtual const std::string& getTextBefore() const 	{ return fBefore; }
		virtual const std::string& getTextAfter() const 	{ return fAfter; }

		virtual const char*	getParamsStr() const	{ return kARIntensParams; };
		virtual const char*	getTagName() const		{ return "ARIntens"; };
		virtual std::string getGMNName() const		{ return "\\intens"; };

		virtual void browse(TimeUnwrap& mapper) const;

	protected:
		std::string fIntens;
		std::string fBefore;
		std::string fAfter;
};

#endif
