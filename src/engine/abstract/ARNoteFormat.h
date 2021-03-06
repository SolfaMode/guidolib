#ifndef ARNoteFormat_H
#define ARNoteFormat_H

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

#include "ARMTParameter.h"
#include "ARPositionTag.h"

/** \brief not yet documented
*/
class ARNoteFormat :  public ARMTParameter //, public ARPositionTag
{
	public:
				 ARNoteFormat(const ARNoteFormat * p_savenf = NULL, const ARNoteFormat * copynf = NULL);
		virtual ~ARNoteFormat() {}

		const TagParameterString *	getTPStyle() const; // { return style; }

		virtual const char*	getParamsStr() const	{ return kARNoteFormatParams; };
		virtual const char*	getTagName() const		{ return "ARNoteFormat"; };
		virtual std::string getGMNName() const		{ return "\\noteFormat"; };

		virtual ARNoteFormat * getEndTag() const	{ return new ARNoteFormat(NULL,fSaveNF); }

		virtual bool IsStateTag() const					{ return true; }
		const ARMusicalObject *isARNoteFormat() const	{ return this; }

	private:
		const ARNoteFormat * fSaveNF;
};

#endif 
