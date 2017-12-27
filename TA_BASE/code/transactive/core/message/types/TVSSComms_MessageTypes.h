// File: ATSAgentComms_MessageTypes.h
// Created: 12/04/2006 4:13:30 PM
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 34.06, Status: Draft, Dated: 06 Apr 06
//
// * DO NOT MODIFY! *

#ifndef TVSSAGENTCOMMS_MESSAGETYPES_H
#define TVSSAGENTCOMMS_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace TVSSAgentComms
	{
		// Root context
		static MessageContext Context("GeneralComms", "TVSSAgentComms", CommsMessage);

		// Message Types for context ATSAgentComms
		static const MessageType TrainBorneMonitorUpdate(Context, "40099");

	};
};

#endif // ATSAGENTCOMMS_MESSAGETYPES_H