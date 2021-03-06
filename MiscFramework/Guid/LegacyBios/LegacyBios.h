//
// This file contains 'Framework Code' and is licensed as such 
// under the terms of your license agreement with Intel or your
// vendor.  This file may not be modified, except as allowed by
// additional terms of your license agreement.                 
//
/*++

Copyright (c)  1999 - 2002 Intel Corporation. All rights reserved
This software and associated documentation (if any) is furnished
under a license and may only be used or copied in accordance
with the terms of the license. Except as permitted by such
license, no part of this software or documentation may be
reproduced, stored in a retrieval system, or transmitted in any
form or by any means without the express written consent of
Intel Corporation.


Module Name:

  LegacyBios.h
    
Abstract:


--*/

#ifndef _LEGACY_BIOS_H_
#define _LEGACY_BIOS_H_

#define EFI_LEGACY_BIOS_GUID \
  { \
    0x2e3044ac, 0x879f, 0x490f, 0x97, 0x60, 0xbb, 0xdf, 0xaf, 0x69, 0x5f, 0x50 \
  }

extern EFI_GUID gEfiLegacyBiosGuid;

#endif
