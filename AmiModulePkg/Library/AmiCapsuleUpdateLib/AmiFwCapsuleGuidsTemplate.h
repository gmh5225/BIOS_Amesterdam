//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2017, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

/** @file
  AmiFwCapsuleGuids.h is generated by AMISDL from AmiFwCapsuleGuidsTemplate.h
  This header file defines GUIDs of system FW Capsules supported by the platform.
  AMISDL replaces @@elink commands below with the content of the corresponding eLink.

  Do not include this header in your source file. It is a private header of the AmiCapsuleUpdateLib.
**/

#ifndef __AMI_FW_CAPSULE_GUID_LIST__H__
#define __AMI_FW_CAPSULE_GUID_LIST__H__

#include <Uefi.h>

static EFI_GUID AmiFwCapsuleGuidList[] = {
@elink(AmiFwCapsuleGuids, "   @child", ",%n", "")
};
static UINT32 AmiFwCapsuleGuidListSize = sizeof (AmiFwCapsuleGuidList) / sizeof (EFI_GUID);

static EFI_GUID AmiEsrtCapsuleGuidList[] = {
@elink(AmiEsrtCapsuleGuids, "   @child", ",%n", "")
};
static UINT32 AmiEsrtCapsuleGuidListSize = sizeof (AmiEsrtCapsuleGuidList) / sizeof (EFI_GUID);
#endif

//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2017, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**      5555 Oakbrook Parkway, Suite 200, Norcross, GA 30093        **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************
