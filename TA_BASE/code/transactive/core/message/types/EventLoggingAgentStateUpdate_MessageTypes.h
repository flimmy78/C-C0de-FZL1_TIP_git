// File: EventLoggingAgentStateUpdate_MessageTypes.h
// Created: 12/04/2006 4:13:31 PM
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 34.06, Status: Draft, Dated: 06 Apr 06
//
// * DO NOT MODIFY! *

#ifndef EVENTLOGGINGAGENTSTATEUPDATE_MESSAGETYPES_H
#define EVENTLOGGINGAGENTSTATEUPDATE_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace EventLoggingAgentStateUpdate
	{
		// Root context
		static MessageContext Context("StateUpdate", "EventLoggingAgentStateUpdate", StateUpdateMessage);

		// Message Types for context EventLoggingAgentStateUpdate
		static const MessageType EventLoggingAgentBatchStateUpdate(Context, "10023");
		static const MessageType EventLoggingAgentStateUpdate(Context, "10024");
		static const MessageType EventLoggingAgentStateUpdateRequest(Context, "10025");
	};
};

#endif // EVENTLOGGINGAGENTSTATEUPDATE_MESSAGETYPES_H