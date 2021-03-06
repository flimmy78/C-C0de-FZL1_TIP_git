// File: ArchivingAlarms_MessageTypes.h
// Created: 04/08/2006 11:05:17
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 37.02, Status: Draft, Dated: 04 Aug 06
//
// * DO NOT MODIFY! *

#ifndef ARCHIVINGALARMS_MESSAGETYPES_H
#define ARCHIVINGALARMS_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace ArchivingAlarms
	{
		// Root context
		static MessageContext Context("Alarm", "ArchivingAlarms", AlarmMessage);

		// Message Types for context ArchivingAlarms
		static const MessageType AutoArchiveFailure(Context, "50151");
		static const MessageType TransferAutoArchiveFilesReminder(Context, "50152");
		static const MessageType AutoArchiveCreated(Context, "50506");
	};
};

#endif // ARCHIVINGALARMS_MESSAGETYPES_H
