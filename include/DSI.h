/**
 * Copyright (c) 2018-2020 FAUCHER Julien & FRANCE Loic
 * This file is part of SooL core Library.
 *
 *  SooL core Library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation, either version 3
 *  of the License, or (at your option) any later version.
 *
 *  SooL core Library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with SooL core Library. If not, see <https://www.gnu.org/licenses/>.
 */


//Generated 2020-09-11T17:03:04.014809

#ifndef __SOOL_CORE_DSI_H
#define __SOOL_CORE_DSI_H
#include "lib_utils/peripheral_include.h"
//SOOL-DSI-INCLUDES-BEGIN
#include "RCC.h"
//SOOL-DSI-INCLUDES-END

#if	defined(STM32MP1     ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S9xx  )
#if	defined(STM32MP1     )
#define DSI_TCCR4_0
#define DSI_DLTRCR
#define DSI_WPCR1_0_SKEWCL SKEWCL
#define DSI_WPCR1_0_SKEWDL SKEWDL
#define DSI_WPCR1_0_LPTXSRCL LPTXSRCL
#define DSI_WPCR1_0_LPTXSRDL LPTXSRDL
#define DSI_WPCR1_0_SDDCCL SDDCCL
#define DSI_WPCR1_0_SDDCDL SDDCDL
#define DSI_WPCR1_0_HSTXSRUCL HSTXSRUCL
#define DSI_WPCR1_0_HSTXSRDCL HSTXSRDCL
#define DSI_WPCR1_0_HSTXSRUDL HSTXSRUDL
#define DSI_WPCR1_0_HSTXSRDDL HSTXSRDDL
#define DSI_WRPCR_BGREN BGREN
#define DSI_HWCFGR
#define DSI_VERR
#define DSI_IPIDR
#define DSI_SIDR
#define DSI_MAP0_DLTCR xLTCR_t DLTCR
#define DSI_MAP0_DLTRCR DLTRCR_t DLTRCR
#define DSI_MAP0_HWCFGR HWCFGR_t HWCFGR
#define DSI_MAP0_VERR VERR_t VERR
#define DSI_MAP0_IPIDR IPIDR_t IPIDR
#define DSI_MAP0_SIDR SIDR_t SIDR
#else
#define DSI_WPCR1_0_SKEWCL
#define DSI_WPCR1_0_SKEWDL
#define DSI_WPCR1_0_LPTXSRCL
#define DSI_WPCR1_0_LPTXSRDL
#define DSI_WPCR1_0_SDDCCL
#define DSI_WPCR1_0_SDDCDL
#define DSI_WPCR1_0_HSTXSRUCL
#define DSI_WPCR1_0_HSTXSRDCL
#define DSI_WPCR1_0_HSTXSRUDL
#define DSI_WPCR1_0_HSTXSRDDL
#define DSI_WRPCR_BGREN
#define DSI_MAP0_DLTCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_DLTRCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_HWCFGR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VERR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_IPIDR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_SIDR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S9xx  )
#define DSI_TCCR4_1
#define DSI_WPCR1_1
#define DSI_DLTx
#define DSI_WPCR2
#define DSI_WPCR3
#define DSI_WPCR4
#endif

#if	defined(STM32MP1     ) || defined(STM32L4R9xx  ) || defined(STM32L4S9xx  )
#define DSI_WPCR0
#define DSI_MAP0_WPCR0 WPCR0_t WPCR0
#define DSI_MAP0_WPCR1 WPCR1_t WPCR1
#else
#define DSI_MAP0_WPCR0 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_WPCR1 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L4R9xx  ) || defined(STM32L4S9xx  )
#define DSI_WPCR0_PDEN PDEN
#define DSI_WPCR0_TCLKPREPEN TCLKPREPEN
#define DSI_WPCR0_TCLKZEROEN TCLKZEROEN
#define DSI_WPCR0_THSPREPEN THSPREPEN
#define DSI_WPCR0_THSTRAILEN THSTRAILEN
#define DSI_WPCR0_THSZEROEN THSZEROEN
#define DSI_WPCR0_TLPXDEN TLPXDEN
#define DSI_WPCR0_THSEXITEN THSEXITEN
#define DSI_WPCR0_TLPXCEN TLPXCEN
#define DSI_WPCR0_TCLKPOSTEN TCLKPOSTEN
#define DSI_WPCR1_0_FLPRXLPM FLPRXLPM
#define DSI_WPCR1_0_LPRXFT LPRXFT
#define DSI_WPCR1_1_HSTXDCL HSTXDCL
#define DSI_WPCR1_1_HSTXDLL HSTXDLL
#define DSI_WPCR1_1_LPSRCL LPSRCL
#define DSI_WPCR1_1_LPSRDL LPSRDL
#define DSI_WPCR1_1_SDCC SDCC
#define DSI_WPCR1_1_HSTXSRCCL HSTXSRCCL
#define DSI_WPCR1_1_HSTXSRCDL HSTXSRCDL
#define DSI_WPCR2_0
#define DSI_WPCR3_0
#define DSI_MAP1_DLTRC DLTx_t DLTRC
#define DSI_MAP1_WPCR2 WPCR2_t WPCR2
#define DSI_MAP1_WPCR3 WPCR3_t WPCR3
#define DSI_MAP1_WPCR4 WPCR4_t WPCR4
#else
#define DSI_WPCR0_PDEN
#define DSI_WPCR0_TCLKPREPEN
#define DSI_WPCR0_TCLKZEROEN
#define DSI_WPCR0_THSPREPEN
#define DSI_WPCR0_THSTRAILEN
#define DSI_WPCR0_THSZEROEN
#define DSI_WPCR0_TLPXDEN
#define DSI_WPCR0_THSEXITEN
#define DSI_WPCR0_TLPXCEN
#define DSI_WPCR0_TCLKPOSTEN
#define DSI_WPCR1_0_FLPRXLPM
#define DSI_WPCR1_0_LPRXFT
#define DSI_WPCR1_1_HSTXDCL
#define DSI_WPCR1_1_HSTXDLL
#define DSI_WPCR1_1_LPSRCL
#define DSI_WPCR1_1_LPSRDL
#define DSI_WPCR1_1_SDCC
#define DSI_WPCR1_1_HSTXSRCCL
#define DSI_WPCR1_1_HSTXSRCDL
#define DSI_MAP1_DLTRC __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_WPCR2 __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_WPCR3 __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_WPCR4 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32L4R5xx  )
#define DSI_WPCR1_0_HSIDL0 HSIDL0
#define DSI_WPCR1_0_HSIDL1 HSIDL1
#define DSI_WPCR1_0_CDOFFDL CDOFFDL
#define DSI_WPCR1_0_TCLKZEROEN TCLKZEROEN
#define DSI_WPCR1_0_THSPREPEN THSPREPEN
#define DSI_WPCR1_0_THSZEROEN THSZEROEN
#define DSI_WPCR1_0_TLPXDEN TLPXDEN
#define DSI_WPCR1_0_TCLKPOSTEN TCLKPOSTEN
#define DSI_WPCR1_1_FTXSMDL FTXSMDL
#define DSI_WPCR1_1_THSTRAILEN THSTRAILEN
#define DSI_WPCR1_1_THSEXITEN THSEXITEN
#define DSI_WPCR1_1_TLPXCEN TLPXCEN
#define DSI_WPCR1_2
#define DSI_WPCR2_1
#define DSI_WPCR3_1
#define DSI_WPCR4_TLPXD TLPXD
#define DSI_WPCR4_THSEXIT THSEXIT
#define DSI_WPCR4_TLPXC TLPXC
#define DSI_WPCR5
#define DSI_MAP2
#define DSI_MAP3
#else
#define DSI_WPCR1_0_HSIDL0
#define DSI_WPCR1_0_HSIDL1
#define DSI_WPCR1_0_CDOFFDL
#define DSI_WPCR1_0_TCLKZEROEN
#define DSI_WPCR1_0_THSPREPEN
#define DSI_WPCR1_0_THSZEROEN
#define DSI_WPCR1_0_TLPXDEN
#define DSI_WPCR1_0_TCLKPOSTEN
#define DSI_WPCR1_1_FTXSMDL
#define DSI_WPCR1_1_THSTRAILEN
#define DSI_WPCR1_1_THSEXITEN
#define DSI_WPCR1_1_TLPXCEN
#define DSI_WPCR4_TLPXD
#define DSI_WPCR4_THSEXIT
#define DSI_WPCR4_TLPXC
#endif

#if	defined(STM32MP1     ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S9xx  )
#define DSI_MAP0_PCR PCR_t PCR
#define DSI_MAP0_GVCIDR xVCIDR_t GVCIDR
#define DSI_MAP0_MCR MCR_t MCR
#define DSI_MAP0_VMCR VMCR_t VMCR
#define DSI_MAP0_VPCR VPCxCR_t VPCR
#define DSI_MAP0_VCCR VCCxCCR_t VCCR
#define DSI_MAP0_VNPCR VNPCxCR_t VNPCR
#define DSI_MAP0_VHSACR VHSACxCR_t VHSACR
#define DSI_MAP0_VHBPCR VHBPCxCR_t VHBPCR
#define DSI_MAP0_VLCR VLCxCR_t VLCR
#define DSI_MAP0_VVSACR VVSACxCR_t VVSACR
#define DSI_MAP0_VVBPCR VVBPCxCR_t VVBPCR
#define DSI_MAP0_VVFPCR VVFPCxCR_t VVFPCR
#define DSI_MAP0_VVACR VVACxCR_t VVACR
#define DSI_MAP0_LCCR LCCR_t LCCR
#define DSI_MAP0_CMCR CMCR_t CMCR
#define DSI_MAP0_GHCR GHCR_t GHCR
#define DSI_MAP0_GPDR GPDR_t GPDR
#define DSI_MAP0_GPSR GPSR_t GPSR
#define DSI_MAP0_TCCR0 TCCR0_t TCCR0
#define DSI_MAP0_TCCR1 TCCR1_t TCCR1
#define DSI_MAP0_TCCR2 TCCR2_t TCCR2
#define DSI_MAP0_TCCR3 TCCR3_t TCCR3
#define DSI_MAP0_TCCR4 TCCR4_t TCCR4
#define DSI_MAP0_TCCR5 TCCR5_t TCCR5
#define DSI_MAP0_CLCR CLCR_t CLCR
#define DSI_MAP0_CLTCR xLTCR_t CLTCR
#define DSI_MAP0_PCTLR PCTLR_t PCTLR
#define DSI_MAP0_PCONFR PCONFR_t PCONFR
#define DSI_MAP0_PUCR PUCR_t PUCR
#define DSI_MAP0_PTTCR PTTCR_t PTTCR
#define DSI_MAP0_PSR PSR_t PSR
#define DSI_MAP0_ISR0 ISR0_t ISR0
#define DSI_MAP0_ISR1 ISR1_t ISR1
#define DSI_MAP0_IER0 IER0_t IER0
#define DSI_MAP0_IER1 IER1_t IER1
#define DSI_MAP0_FIR0 FIR0_t FIR0
#define DSI_MAP0_FIR1 FIR1_t FIR1
#define DSI_MAP0_VSCR VSCR_t VSCR
#define DSI_MAP0_LCVCIDR xVCIDR_t LCVCIDR
#define DSI_MAP0_LCCCR LCOLCR_t LCCCR
#define DSI_MAP0_LPMCCR LPMCxCR_t LPMCCR
#define DSI_MAP0_VMCCR VMCCR_t VMCCR
#define DSI_MAP0_VPCCR VPCxCR_t VPCCR
#define DSI_MAP0_VCCCR VCCxCCR_t VCCCR
#define DSI_MAP0_VNPCCR VNPCxCR_t VNPCCR
#define DSI_MAP0_VHSACCR VHSACxCR_t VHSACCR
#define DSI_MAP0_VHBPCCR VHBPCxCR_t VHBPCCR
#define DSI_MAP0_VLCCR VLCxCR_t VLCCR
#define DSI_MAP0_VVSACCR VVSACxCR_t VVSACCR
#define DSI_MAP0_VVBPCCR VVBPCxCR_t VVBPCCR
#define DSI_MAP0_VVFPCCR VVFPCxCR_t VVFPCCR
#define DSI_MAP0_VVACCR VVACxCR_t VVACCR
#else
#define DSI_MAP0_PCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_GVCIDR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_MCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VMCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VPCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VNPCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VHSACR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VHBPCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VLCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VVSACR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VVBPCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VVFPCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VVACR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_LCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_CMCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_GHCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_GPDR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_GPSR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_TCCR0 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_TCCR1 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_TCCR2 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_TCCR3 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_TCCR4 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_TCCR5 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_CLCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_CLTCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_PCTLR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_PCONFR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_PUCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_PTTCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_PSR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_ISR0 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_ISR1 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_IER0 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_IER1 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_FIR0 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_FIR1 __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VSCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_LCVCIDR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_LCCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_LPMCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VMCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VPCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VCCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VNPCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VHSACCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VHBPCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VLCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VVSACCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VVBPCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VVFPCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP0_VVACCR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L4R5xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S9xx  )
#define DSI_MAP1
#endif

#if	defined(STM32L4R5xx  )
#define DSI_MAP1_PCR PCR_t PCR
#define DSI_MAP1_GVCIDR xVCIDR_t GVCIDR
#define DSI_MAP1_MCR MCR_t MCR
#define DSI_MAP1_VMCR VMCR_t VMCR
#define DSI_MAP1_VPCR VPCxCR_t VPCR
#define DSI_MAP1_VCCR VCCxCCR_t VCCR
#define DSI_MAP1_VNPCR VNPCxCR_t VNPCR
#define DSI_MAP1_VHSACR VHSACxCR_t VHSACR
#define DSI_MAP1_VHBPCR VHBPCxCR_t VHBPCR
#define DSI_MAP1_VLCR VLCxCR_t VLCR
#define DSI_MAP1_VVSACR VVSACxCR_t VVSACR
#define DSI_MAP1_VVBPCR VVBPCxCR_t VVBPCR
#define DSI_MAP1_VVFPCR VVFPCxCR_t VVFPCR
#define DSI_MAP1_VVACR VVACxCR_t VVACR
#define DSI_MAP1_LCCR LCCR_t LCCR
#define DSI_MAP1_CMCR CMCR_t CMCR
#define DSI_MAP1_GHCR GHCR_t GHCR
#define DSI_MAP1_GPDR GPDR_t GPDR
#define DSI_MAP1_GPSR GPSR_t GPSR
#define DSI_MAP1_TCCR0 TCCR0_t TCCR0
#define DSI_MAP1_TCCR1 TCCR1_t TCCR1
#define DSI_MAP1_TCCR2 TCCR2_t TCCR2
#define DSI_MAP1_TCCR3 TCCR3_t TCCR3
#define DSI_MAP1_TCCR4 TCCR4_t TCCR4
#define DSI_MAP1_TCCR5 TCCR5_t TCCR5
#define DSI_MAP1_CLCR CLCR_t CLCR
#define DSI_MAP2_DLTRC DLTx_t DLTRC
#define DSI_MAP2_PCTLR PCTLR_t PCTLR
#define DSI_MAP2_PCONFR PCONFR_t PCONFR
#define DSI_MAP2_PUCR PUCR_t PUCR
#define DSI_MAP2_PTTCR PTTCR_t PTTCR
#define DSI_MAP2_PSR PSR_t PSR
#define DSI_MAP2_ISR0 ISR0_t ISR0
#define DSI_MAP2_ISR1 ISR1_t ISR1
#define DSI_MAP2_IER0 IER0_t IER0
#define DSI_MAP2_IER1 IER1_t IER1
#define DSI_MAP2_FIR0 FIR0_t FIR0
#define DSI_MAP2_FIR1 FIR1_t FIR1
#define DSI_MAP2_VSCR VSCR_t VSCR
#define DSI_MAP2_LCVCIDR xVCIDR_t LCVCIDR
#define DSI_MAP2_LCCCR LCOLCR_t LCCCR
#define DSI_MAP2_LPMCCR LPMCxCR_t LPMCCR
#define DSI_MAP2_VMCCR VMCCR_t VMCCR
#define DSI_MAP2_VPCCR VPCxCR_t VPCCR
#define DSI_MAP2_VCCCR VCCxCCR_t VCCCR
#define DSI_MAP2_VNPCCR VNPCxCR_t VNPCCR
#define DSI_MAP2_VHSACCR VHSACxCR_t VHSACCR
#define DSI_MAP2_VHBPCCR VHBPCxCR_t VHBPCCR
#define DSI_MAP2_VLCCR VLCxCR_t VLCCR
#define DSI_MAP2_VVSACCR VVSACxCR_t VVSACCR
#define DSI_MAP2_VVBPCCR VVBPCxCR_t VVBPCCR
#define DSI_MAP2_VVFPCCR VVFPCxCR_t VVFPCCR
#define DSI_MAP2_VVACCR VVACxCR_t VVACCR
#define DSI_MAP3_CLTCR xLTCR_t CLTCR
#else
#define DSI_MAP1_PCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_GVCIDR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_MCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_VMCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_VPCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_VCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_VNPCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_VHSACR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_VHBPCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_VLCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_VVSACR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_VVBPCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_VVFPCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_VVACR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_LCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_CMCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_GHCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_GPDR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_GPSR __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_TCCR0 __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_TCCR1 __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_TCCR2 __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_TCCR3 __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_TCCR4 __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_TCCR5 __SOOL_PERIPH_PADDING_4
#define DSI_MAP1_CLCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_DLTRC __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_PCTLR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_PCONFR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_PUCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_PTTCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_PSR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_ISR0 __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_ISR1 __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_IER0 __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_IER1 __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_FIR0 __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_FIR1 __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VSCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_LCVCIDR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_LCCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_LPMCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VMCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VPCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VCCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VNPCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VHSACCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VHBPCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VLCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VVSACCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VVBPCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VVFPCCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP2_VVACCR __SOOL_PERIPH_PADDING_4
#define DSI_MAP3_CLTCR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  )
#define DSI_MAP3_DLTCR DLTx_t DLTCR
#else
#define DSI_MAP3_DLTCR __SOOL_PERIPH_PADDING_4
#endif

namespace sool {
	namespace core {
		class DSI /// dsi host
		{
		public:
			//SOOL-DSI-SUB-TYPES-BEGIN
			enum class ShortWriteType : uint32_t {
				Generic_NoParam  = 0x03,
				Generic_OneParam = 0x13,
				Generic_TwoParam = 0x23,
				DCS_NoParam = 0x05,
				DCS_OneParam = 0x15
			};
			
			enum class LongWriteType : uint32_t {
				Generic = 0x29,
				DCS  = 0x39
			};
			//SOOL-DSI-SUB-TYPES-END
			struct VR_t: public Reg32_t /// DSI Host version register
			{
				using Reg32_t::operator=;
				uint32_t VERSION          : 32; /// Version of the DSI Host
				//SOOL-DSI_VR-DECLARATIONS
			};
			struct CR_t: public Reg32_t /// DSI Host control register
			{
				using Reg32_t::operator=;
				uint32_t EN               : 1; /// Enable
				uint32_t                  : 31;
				//SOOL-DSI_CR-DECLARATIONS
			};
			struct CCR_t: public Reg32_t /// DSI Host clock control register
			{
				using Reg32_t::operator=;
				uint32_t TXECKDIV         : 8; /// TX Escape Clock Division
				uint32_t TOCKDIV          : 8; /// Timeout Clock Division
				uint32_t                  : 16;
				//SOOL-DSI_CCR-DECLARATIONS
			};
			struct xVCIDR_t: public Reg32_t /// DSI Host LTDC VCID register
			{
				using Reg32_t::operator=;
				uint32_t VCID             : 2; /// Virtual Channel ID
				uint32_t                  : 30;
				//SOOL-DSI_xVCIDR-DECLARATIONS
			};
			struct LCOLCR_t: public Reg32_t /// DSI Host LTDC color coding register
			{
				using Reg32_t::operator=;
				uint32_t COLC             : 4; /// Color Coding
				uint32_t                  : 4;
				uint32_t LPE              : 1; /// Loosely Packet Enable
				uint32_t                  : 23;
				//SOOL-DSI_LCOLCR-DECLARATIONS
			};
			struct LPCR_t: public Reg32_t /// DSI Host LTDC polarity configuration register
			{
				using Reg32_t::operator=;
				uint32_t DEP              : 1; /// Data Enable Polarity
				uint32_t VSP              : 1; /// VSYNC Polarity
				uint32_t HSP              : 1; /// HSYNC Polarity
				uint32_t                  : 29;
				//SOOL-DSI_LPCR-DECLARATIONS
			};
			struct LPMCxCR_t: public Reg32_t /// DSI Host low-power mode configuration register
			{
				using Reg32_t::operator=;
				uint32_t VLPSIZE          : 8; /// VACT Largest Packet Size
				uint32_t                  : 8;
				uint32_t LPSIZE           : 8; /// Largest Packet Size
				uint32_t                  : 8;
				//SOOL-DSI_LPMCxCR-DECLARATIONS
			};
			struct PCR_t: public Reg32_t /// DSI Host protocol configuration register
			{
				using Reg32_t::operator=;
				uint32_t ETTXE            : 1; /// EoTp Transmission Enable
				uint32_t ETRXE            : 1; /// EoTp Reception Enable
				uint32_t BTAE             : 1; /// Bus Turn Around Enable
				uint32_t ECCRXE           : 1; /// ECC Reception Enable
				uint32_t CRCRXE           : 1; /// CRC Reception Enable
				uint32_t                  : 27;
				//SOOL-DSI_PCR-DECLARATIONS
			};
			struct MCR_t: public Reg32_t /// DSI Host mode configuration register
			{
				using Reg32_t::operator=;
				uint32_t CMDM             : 1; /// Command mode
				uint32_t                  : 31;
				//SOOL-DSI_MCR-DECLARATIONS
			};
			struct VMCR_t: public Reg32_t /// DSI Host video mode configuration register
			{
				using Reg32_t::operator=;
				uint32_t VMT              : 2; /// Video mode Type
				uint32_t                  : 6;
				uint32_t LPVSAE           : 1; /// Low-Power Vertical Sync Active Enable
				uint32_t LPVBPE           : 1; /// Low-power Vertical Back-Porch Enable
				uint32_t LPVFPE           : 1; /// Low-power Vertical Front-porch Enable
				uint32_t LPVAE            : 1; /// Low-Power Vertical Active Enable
				uint32_t LPHBPE           : 1; /// Low-Power Horizontal Back-Porch Enable
				uint32_t LPHFPE           : 1; /// Low-Power Horizontal Front-Porch Enable
				uint32_t FBTAAE           : 1; /// Frame Bus-Turn-Around Acknowledge Enable
				uint32_t LPCE             : 1; /// Low-Power Command Enable
				uint32_t PGE              : 1; /// Pattern Generator Enable
				uint32_t                  : 3;
				uint32_t PGM              : 1; /// Pattern Generator mode
				uint32_t                  : 3;
				uint32_t PGO              : 1; /// Pattern Generator Orientation
				uint32_t                  : 7;
				//SOOL-DSI_VMCR-DECLARATIONS
			};
			struct VPCxCR_t: public Reg32_t /// DSI Host video packet configuration register
			{
				using Reg32_t::operator=;
				uint32_t VPSIZE           : 14; /// Video Packet Size
				uint32_t                  : 18;
				//SOOL-DSI_VPCxCR-DECLARATIONS
			};
			struct VCCxCCR_t: public Reg32_t /// DSI Host video chunks configuration register
			{
				using Reg32_t::operator=;
				uint32_t NUMC             : 13; /// Number of Chunks
				uint32_t                  : 19;
				//SOOL-DSI_VCCxCCR-DECLARATIONS
			};
			struct VNPCxCR_t: public Reg32_t /// DSI Host video null packet configuration register
			{
				using Reg32_t::operator=;
				uint32_t NPSIZE           : 13; /// Null Packet Size
				uint32_t                  : 19;
				//SOOL-DSI_VNPCxCR-DECLARATIONS
			};
			struct VHSACxCR_t: public Reg32_t /// DSI Host video HSA configuration register
			{
				using Reg32_t::operator=;
				uint32_t HSA              : 12; /// Horizontal Synchronism Active duration
				uint32_t                  : 20;
				//SOOL-DSI_VHSACxCR-DECLARATIONS
			};
			struct VHBPCxCR_t: public Reg32_t /// DSI Host video HBP configuration register
			{
				using Reg32_t::operator=;
				uint32_t HBP              : 12; /// Horizontal Back-Porch duration
				uint32_t                  : 20;
				//SOOL-DSI_VHBPCxCR-DECLARATIONS
			};
			struct VLCxCR_t: public Reg32_t /// DSI Host video line configuration register
			{
				using Reg32_t::operator=;
				uint32_t HLINE            : 15; /// Horizontal Line duration
				uint32_t                  : 17;
				//SOOL-DSI_VLCxCR-DECLARATIONS
			};
			struct VVSACxCR_t: public Reg32_t /// DSI Host video VSA configuration register
			{
				using Reg32_t::operator=;
				uint32_t VSA              : 10; /// Vertical Synchronism Active duration
				uint32_t                  : 22;
				//SOOL-DSI_VVSACxCR-DECLARATIONS
			};
			struct VVBPCxCR_t: public Reg32_t /// DSI Host video VBP configuration register
			{
				using Reg32_t::operator=;
				uint32_t VBP              : 10; /// Vertical Back-Porch duration
				uint32_t                  : 22;
				//SOOL-DSI_VVBPCxCR-DECLARATIONS
			};
			struct VVFPCxCR_t: public Reg32_t /// DSI Host video VFP configuration register
			{
				using Reg32_t::operator=;
				uint32_t VFP              : 10; /// Vertical Front-Porch duration
				uint32_t                  : 22;
				//SOOL-DSI_VVFPCxCR-DECLARATIONS
			};
			struct VVACxCR_t: public Reg32_t /// DSI Host video VA configuration register
			{
				using Reg32_t::operator=;
				uint32_t VA               : 14; /// Vertical Active duration
				uint32_t                  : 18;
				//SOOL-DSI_VVACxCR-DECLARATIONS
			};
			struct LCCR_t: public Reg32_t /// DSI Host LTDC command configuration register
			{
				using Reg32_t::operator=;
				uint32_t CMDSIZE          : 16; /// Command Size
				uint32_t                  : 16;
				//SOOL-DSI_LCCR-DECLARATIONS
			};
			struct CMCR_t: public Reg32_t /// DSI Host command mode configuration register
			{
				using Reg32_t::operator=;
				uint32_t TEARE            : 1; /// Tearing Effect Acknowledge Request Enable
				uint32_t ARE              : 1; /// Acknowledge Request Enable
				uint32_t                  : 6;
				uint32_t GSW0TX           : 1; /// Generic Short Write Zero parameters Transmission
				uint32_t GSW1TX           : 1; /// Generic Short Write One parameters Transmission
				uint32_t GSW2TX           : 1; /// Generic Short Write Two parameters Transmission
				uint32_t GSR0TX           : 1; /// Generic Short Read Zero parameters Transmission
				uint32_t GSR1TX           : 1; /// Generic Short Read One parameters Transmission
				uint32_t GSR2TX           : 1; /// Generic Short Read Two parameters Transmission
				uint32_t GLWTX            : 1; /// Generic Long Write Transmission
				uint32_t                  : 1;
				uint32_t DSW0TX           : 1; /// DCS Short Write Zero parameter Transmission
				uint32_t DSW1TX           : 1; /// DCS Short Read One parameter Transmission
				uint32_t DSR0TX           : 1; /// DCS Short Read Zero parameter Transmission
				uint32_t DLWTX            : 1; /// DCS Long Write Transmission
				uint32_t                  : 4;
				uint32_t MRDPS            : 1; /// Maximum Read Packet Size
				uint32_t                  : 7;
				//SOOL-DSI_CMCR-DECLARATIONS
			};
			struct GHCR_t: public Reg32_t /// DSI Host generic header configuration register
			{
				using Reg32_t::operator=;
				uint32_t DT               : 6; /// Type
				uint32_t VCID             : 2; /// Channel
				uint32_t WCLSB            : 8; /// WordCount LSB
				uint32_t WCMSB            : 8; /// WordCount MSB
				uint32_t                  : 8;
				//SOOL-DSI_GHCR-DECLARATIONS
			};
			struct GPDR_t: public Reg32_t /// DSI Host generic payload data register
			{
				using Reg32_t::operator=;
				uint32_t DATA1            : 8; /// Payload Byte 1
				uint32_t DATA2            : 8; /// Payload Byte 2
				uint32_t DATA3            : 8; /// Payload Byte 3
				uint32_t DATA4            : 8; /// Payload Byte 4
				//SOOL-DSI_GPDR-DECLARATIONS
			};
			struct GPSR_t: public Reg32_t /// DSI Host generic packet status register
			{
				using Reg32_t::operator=;
				uint32_t CMDFE            : 1; /// Command FIFO Empty
				uint32_t CMDFF            : 1; /// Command FIFO Full
				uint32_t PWRFE            : 1; /// Payload Write FIFO Empty
				uint32_t PWRFF            : 1; /// Payload Write FIFO Full
				uint32_t PRDFE            : 1; /// Payload Read FIFO Empty
				uint32_t PRDFF            : 1; /// Payload Read FIFO Full
				uint32_t RCB              : 1; /// Read Command Busy
				uint32_t                  : 25;
				//SOOL-DSI_GPSR-DECLARATIONS
			};
			struct TCCR0_t: public Reg32_t /// DSI Host timeout counter configuration register 0
			{
				using Reg32_t::operator=;
				uint32_t LPRX_TOCNT       : 16; /// Low-power Reception Timeout Counter
				uint32_t HSTX_TOCNT       : 16; /// High-Speed Transmission Timeout Counter
				//SOOL-DSI_TCCR0-DECLARATIONS
			};
			struct TCCR1_t: public Reg32_t /// DSI Host timeout counter configuration register 1
			{
				using Reg32_t::operator=;
				uint32_t HSRD_TOCNT       : 16; /// High-Speed Read Timeout Counter
				uint32_t                  : 16;
				//SOOL-DSI_TCCR1-DECLARATIONS
			};
			struct TCCR2_t: public Reg32_t /// DSI Host timeout counter configuration register 2
			{
				using Reg32_t::operator=;
				uint32_t LPRD_TOCNT       : 16; /// Low-Power Read Timeout Counter
				uint32_t                  : 16;
				//SOOL-DSI_TCCR2-DECLARATIONS
			};
			struct TCCR3_t: public Reg32_t /// DSI Host timeout counter configuration register 3
			{
				using Reg32_t::operator=;
				uint32_t HSWR_TOCNT       : 16; /// High-Speed Write Timeout Counter
				uint32_t                  : 8;
				uint32_t PM               : 1; /// Presp mode
				uint32_t                  : 7;
				//SOOL-DSI_TCCR3-DECLARATIONS
			};
			struct TCCR4_t: public Reg32_t /// DSI Host timeout counter configuration register 4
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef DSI_TCCR4_0
					struct
					{
						uint32_t LPWR_TOCNT       : 16;
						uint32_t                  : 16;
					};
					#endif
					#ifdef DSI_TCCR4_1
					struct
					{
						uint32_t LSWR_TOCNT       : 16; /// Low-Power Write Timeout Counter
						uint32_t                  : 16;
					};
					#endif
				};
				//SOOL-DSI_TCCR4-DECLARATIONS
			};
			struct TCCR5_t: public Reg32_t /// DSI Host timeout counter configuration register 5
			{
				using Reg32_t::operator=;
				uint32_t BTA_TOCNT        : 16; /// Bus-Turn-Around Timeout Counter
				uint32_t                  : 16;
				//SOOL-DSI_TCCR5-DECLARATIONS
			};
			struct CLCR_t: public Reg32_t /// DSI Host clock lane configuration register
			{
				using Reg32_t::operator=;
				uint32_t DPCC             : 1; /// D-PHY Clock Control
				uint32_t ACR              : 1; /// Automatic Clock lane Control
				uint32_t                  : 30;
				//SOOL-DSI_CLCR-DECLARATIONS
			};
			struct xLTCR_t: public Reg32_t /// DSI Host clock lane timer configuration register
			{
				using Reg32_t::operator=;
				uint32_t LP2HS_TIME       : 10; /// Low-Power to High-Speed Time
				uint32_t                  : 6;
				uint32_t HS2LP_TIME       : 10; /// High-Speed to Low-Power Time
				uint32_t                  : 6;
				//SOOL-DSI_xLTCR-DECLARATIONS
			};
			struct PCTLR_t: public Reg32_t /// DSI Host PHY control register
			{
				using Reg32_t::operator=;
				uint32_t                  : 1;
				uint32_t DEN              : 1; /// Digital Enable
				uint32_t CKE              : 1; /// Clock Enable
				uint32_t                  : 29;
				//SOOL-DSI_PCTLR-DECLARATIONS
			};
			struct PCONFR_t: public Reg32_t /// DSI Host PHY configuration register
			{
				using Reg32_t::operator=;
				uint32_t NL               : 2; /// Number of Lanes
				uint32_t                  : 6;
				uint32_t SW_TIME          : 8; /// Stop Wait Time
				uint32_t                  : 16;
				//SOOL-DSI_PCONFR-DECLARATIONS
			};
			struct PUCR_t: public Reg32_t /// DSI Host PHY ULPS control register
			{
				using Reg32_t::operator=;
				uint32_t URCL             : 1; /// ULPS Request on Clock Lane
				uint32_t UECL             : 1; /// ULPS Exit on Clock Lane
				uint32_t URDL             : 1; /// ULPS Request on Data Lane
				uint32_t UEDL             : 1; /// ULPS Exit on Data Lane
				uint32_t                  : 28;
				//SOOL-DSI_PUCR-DECLARATIONS
			};
			struct PTTCR_t: public Reg32_t /// DSI Host PHY TX triggers configuration register
			{
				using Reg32_t::operator=;
				uint32_t TX_TRIG          : 4; /// Transmission Trigger
				uint32_t                  : 28;
				//SOOL-DSI_PTTCR-DECLARATIONS
			};
			struct PSR_t: public Reg32_t /// DSI Host PHY status register
			{
				using Reg32_t::operator=;
				uint32_t                  : 1;
				uint32_t PD               : 1; /// PHY Direction
				uint32_t PSSC             : 1; /// PHY Stop State Clock lane
				uint32_t UANC             : 1; /// ULPS Active Not Clock lane
				uint32_t PSS0             : 1; /// PHY Stop State lane 0
				uint32_t UAN0             : 1; /// ULPS Active Not lane 1
				uint32_t RUE0             : 1; /// RX ULPS Escape lane 0
				uint32_t PSS1             : 1; /// PHY Stop State lane 1
				uint32_t UAN1             : 1; /// ULPS Active Not lane 1
				uint32_t                  : 23;
				//SOOL-DSI_PSR-DECLARATIONS
			};
			struct ISR0_t: public Reg32_t /// DSI Host interrupt and status register 0
			{
				using Reg32_t::operator=;
				uint32_t AE0              : 1; /// Acknowledge Error 0
				uint32_t AE1              : 1; /// Acknowledge Error 1
				uint32_t AE2              : 1; /// Acknowledge Error 2
				uint32_t AE3              : 1; /// Acknowledge Error 3
				uint32_t AE4              : 1; /// Acknowledge Error 4
				uint32_t AE5              : 1; /// Acknowledge Error 5
				uint32_t AE6              : 1; /// Acknowledge Error 6
				uint32_t AE7              : 1; /// Acknowledge Error 7
				uint32_t AE8              : 1; /// Acknowledge Error 8
				uint32_t AE9              : 1; /// Acknowledge Error 9
				uint32_t AE10             : 1; /// Acknowledge Error 10
				uint32_t AE11             : 1; /// Acknowledge Error 11
				uint32_t AE12             : 1; /// Acknowledge Error 12
				uint32_t AE13             : 1; /// Acknowledge Error 13
				uint32_t AE14             : 1; /// Acknowledge Error 14
				uint32_t AE15             : 1; /// Acknowledge Error 15
				uint32_t PE0              : 1; /// PHY Error 0
				uint32_t PE1              : 1; /// PHY Error 1
				uint32_t PE2              : 1; /// PHY Error 2
				uint32_t PE3              : 1; /// PHY Error 3
				uint32_t PE4              : 1; /// PHY Error 4
				uint32_t                  : 11;
				//SOOL-DSI_ISR0-DECLARATIONS
			};
			struct ISR1_t: public Reg32_t /// DSI Host interrupt and status register 1
			{
				using Reg32_t::operator=;
				uint32_t TOHSTX           : 1; /// Timeout High-Speed Transmission
				uint32_t TOLPRX           : 1; /// Timeout Low-Power Reception
				uint32_t ECCSE            : 1; /// ECC Single-bit Error
				uint32_t ECCME            : 1; /// ECC Multi-bit Error
				uint32_t CRCE             : 1; /// CRC Error
				uint32_t PSE              : 1; /// Packet Size Error
				uint32_t EOTPE            : 1; /// EoTp Error
				uint32_t LPWRE            : 1; /// LTDC Payload Write Error
				uint32_t GCWRE            : 1; /// Generic Command Write Error
				uint32_t GPWRE            : 1; /// Generic Payload Write Error
				uint32_t GPTXE            : 1; /// Generic Payload Transmit Error
				uint32_t GPRDE            : 1; /// Generic Payload Read Error
				uint32_t GPRXE            : 1; /// Generic Payload Receive Error
				uint32_t                  : 19;
				//SOOL-DSI_ISR1-DECLARATIONS
			};
			struct IER0_t: public Reg32_t /// DSI Host interrupt enable register 0
			{
				using Reg32_t::operator=;
				uint32_t AE0IE            : 1; /// Acknowledge Error 0 Interrupt Enable
				uint32_t AE1IE            : 1; /// Acknowledge Error 1 Interrupt Enable
				uint32_t AE2IE            : 1; /// Acknowledge Error 2 Interrupt Enable
				uint32_t AE3IE            : 1; /// Acknowledge Error 3 Interrupt Enable
				uint32_t AE4IE            : 1; /// Acknowledge Error 4 Interrupt Enable
				uint32_t AE5IE            : 1; /// Acknowledge Error 5 Interrupt Enable
				uint32_t AE6IE            : 1; /// Acknowledge Error 6 Interrupt Enable
				uint32_t AE7IE            : 1; /// Acknowledge Error 7 Interrupt Enable
				uint32_t AE8IE            : 1; /// Acknowledge Error 8 Interrupt Enable
				uint32_t AE9IE            : 1; /// Acknowledge Error 9 Interrupt Enable
				uint32_t AE10IE           : 1; /// Acknowledge Error 10 Interrupt Enable
				uint32_t AE11IE           : 1; /// Acknowledge Error 11 Interrupt Enable
				uint32_t AE12IE           : 1; /// Acknowledge Error 12 Interrupt Enable
				uint32_t AE13IE           : 1; /// Acknowledge Error 13 Interrupt Enable
				uint32_t AE14IE           : 1; /// Acknowledge Error 14 Interrupt Enable
				uint32_t AE15IE           : 1; /// Acknowledge Error 15 Interrupt Enable
				uint32_t PE0IE            : 1; /// PHY Error 0 Interrupt Enable
				uint32_t PE1IE            : 1; /// PHY Error 1 Interrupt Enable
				uint32_t PE2IE            : 1; /// PHY Error 2 Interrupt Enable
				uint32_t PE3IE            : 1; /// PHY Error 3 Interrupt Enable
				uint32_t PE4IE            : 1; /// PHY Error 4 Interrupt Enable
				uint32_t                  : 11;
				//SOOL-DSI_IER0-DECLARATIONS
			};
			struct IER1_t: public Reg32_t /// DSI Host interrupt enable register 1
			{
				using Reg32_t::operator=;
				uint32_t TOHSTXIE         : 1; /// Timeout High-Speed Transmission Interrupt Enable
				uint32_t TOLPRXIE         : 1; /// Timeout Low-Power Reception Interrupt Enable
				uint32_t ECCSEIE          : 1; /// ECC Single-bit Error Interrupt Enable
				uint32_t ECCMEIE          : 1; /// ECC Multi-bit Error Interrupt Enable
				uint32_t CRCEIE           : 1; /// CRC Error Interrupt Enable
				uint32_t PSEIE            : 1; /// Packet Size Error Interrupt Enable
				uint32_t EOTPEIE          : 1; /// EoTp Error Interrupt Enable
				uint32_t LPWREIE          : 1; /// LTDC Payload Write Error Interrupt Enable
				uint32_t GCWREIE          : 1; /// Generic Command Write Error Interrupt Enable
				uint32_t GPWREIE          : 1; /// Generic Payload Write Error Interrupt Enable
				uint32_t GPTXEIE          : 1; /// Generic Payload Transmit Error Interrupt Enable
				uint32_t GPRDEIE          : 1; /// Generic Payload Read Error Interrupt Enable
				uint32_t GPRXEIE          : 1; /// Generic Payload Receive Error Interrupt Enable
				uint32_t                  : 19;
				//SOOL-DSI_IER1-DECLARATIONS
			};
			struct FIR0_t: public Reg32_t /// DSI Host force interrupt register 0
			{
				using Reg32_t::operator=;
				uint32_t FAE0             : 1; /// Force Acknowledge Error 0
				uint32_t FAE1             : 1; /// Force Acknowledge Error 1
				uint32_t FAE2             : 1; /// Force Acknowledge Error 2
				uint32_t FAE3             : 1; /// Force Acknowledge Error 3
				uint32_t FAE4             : 1; /// Force Acknowledge Error 4
				uint32_t FAE5             : 1; /// Force Acknowledge Error 5
				uint32_t FAE6             : 1; /// Force Acknowledge Error 6
				uint32_t FAE7             : 1; /// Force Acknowledge Error 7
				uint32_t FAE8             : 1; /// Force Acknowledge Error 8
				uint32_t FAE9             : 1; /// Force Acknowledge Error 9
				uint32_t FAE10            : 1; /// Force Acknowledge Error 10
				uint32_t FAE11            : 1; /// Force Acknowledge Error 11
				uint32_t FAE12            : 1; /// Force Acknowledge Error 12
				uint32_t FAE13            : 1; /// Force Acknowledge Error 13
				uint32_t FAE14            : 1; /// Force Acknowledge Error 14
				uint32_t FAE15            : 1; /// Force Acknowledge Error 15
				uint32_t FPE0             : 1; /// Force PHY Error 0
				uint32_t FPE1             : 1; /// Force PHY Error 1
				uint32_t FPE2             : 1; /// Force PHY Error 2
				uint32_t FPE3             : 1; /// Force PHY Error 3
				uint32_t FPE4             : 1; /// Force PHY Error 4
				uint32_t                  : 11;
				//SOOL-DSI_FIR0-DECLARATIONS
			};
			struct FIR1_t: public Reg32_t /// DSI Host force interrupt register 1
			{
				using Reg32_t::operator=;
				uint32_t FTOHSTX          : 1; /// Force Timeout High-Speed Transmission
				uint32_t FTOLPRX          : 1; /// Force Timeout Low-Power Reception
				uint32_t FECCSE           : 1; /// Force ECC Single-bit Error
				uint32_t FECCME           : 1; /// Force ECC Multi-bit Error
				uint32_t FCRCE            : 1; /// Force CRC Error
				uint32_t FPSE             : 1; /// Force Packet Size Error
				uint32_t FEOTPE           : 1; /// Force EoTp Error
				uint32_t FLPWRE           : 1; /// Force LTDC Payload Write Error
				uint32_t FGCWRE           : 1; /// Force Generic Command Write Error
				uint32_t FGPWRE           : 1; /// Force Generic Payload Write Error
				uint32_t FGPTXE           : 1; /// Force Generic Payload Transmit Error
				uint32_t FGPRDE           : 1; /// Force Generic Payload Read Error
				uint32_t FGPRXE           : 1; /// Force Generic Payload Receive Error
				uint32_t                  : 19;
				//SOOL-DSI_FIR1-DECLARATIONS
			};
			#ifdef DSI_DLTRCR
			struct DLTRCR_t: public Reg32_t /// DSI Host data lane timer read configuration register
			{
				using Reg32_t::operator=;
				uint32_t MRD_TIME         : 15;
				uint32_t                  : 17;
				//SOOL-DSI_DLTRCR-DECLARATIONS
			};
			#endif
			struct VSCR_t: public Reg32_t /// DSI Host video shadow control register
			{
				using Reg32_t::operator=;
				uint32_t EN               : 1; /// Enable
				uint32_t                  : 7;
				uint32_t UR               : 1; /// Update Register
				uint32_t                  : 23;
				//SOOL-DSI_VSCR-DECLARATIONS
			};
			struct VMCCR_t: public Reg32_t /// DSI Host video mode current configuration register
			{
				using Reg32_t::operator=;
				uint32_t VMT              : 2; /// Video mode Type
				uint32_t LPVSAE           : 1; /// Low-Power Vertical Sync time Enable
				uint32_t LPVBPE           : 1; /// Low-power Vertical Back-Porch Enable
				uint32_t LPVFPE           : 1; /// Low-power Vertical Front-Porch Enable
				uint32_t LPVAE            : 1; /// Low-Power Vertical Active Enable
				uint32_t LPHBPE           : 1; /// Low-power Horizontal Back-Porch Enable
				uint32_t LPHFE            : 1; /// Low-Power Horizontal Front-Porch Enable
				uint32_t FBTAAE           : 1; /// Frame BTA Acknowledge Enable
				uint32_t LPCE             : 1; /// Low-Power Command Enable
				uint32_t                  : 22;
				//SOOL-DSI_VMCCR-DECLARATIONS
			};
			struct WCFGR_t: public Reg32_t /// DSI wrapper configuration register
			{
				using Reg32_t::operator=;
				uint32_t DSIM             : 1; /// DSI Mode
				uint32_t COLMUX           : 3; /// Color Multiplexing
				uint32_t TESRC            : 1; /// TE Source
				uint32_t TEPOL            : 1; /// TE Polarity
				uint32_t AR               : 1; /// Automatic Refresh
				uint32_t VSPOL            : 1; /// VSync Polarity
				uint32_t                  : 24;
				//SOOL-DSI_WCFGR-DECLARATIONS
			};
			struct WCR_t: public Reg32_t /// DSI wrapper control register
			{
				using Reg32_t::operator=;
				uint32_t COLM             : 1; /// Color Mode
				uint32_t SHTDN            : 1; /// Shutdown
				uint32_t LTDCEN           : 1; /// LTDC Enable
				uint32_t DSIEN            : 1; /// DSI Enable
				uint32_t                  : 28;
				//SOOL-DSI_WCR-DECLARATIONS
			};
			struct WIER_t: public Reg32_t /// DSI wrapper interrupt enable register
			{
				using Reg32_t::operator=;
				uint32_t TEIE             : 1; /// Tearing Effect Interrupt Enable
				uint32_t ERIE             : 1; /// End of Refresh Interrupt Enable
				uint32_t                  : 7;
				uint32_t PLLLIE           : 1; /// PLL Lock Interrupt Enable
				uint32_t PLLUIE           : 1; /// PLL Unlock Interrupt Enable
				uint32_t                  : 2;
				uint32_t RRIE             : 1; /// Regulator Ready Interrupt Enable
				uint32_t                  : 18;
				//SOOL-DSI_WIER-DECLARATIONS
			};
			struct WISR_t: public Reg32_t /// DSI wrapper interrupt and status register
			{
				using Reg32_t::operator=;
				uint32_t TEIF             : 1; /// Tearing Effect Interrupt Flag
				uint32_t ERIF             : 1; /// End of Refresh Interrupt Flag
				uint32_t BUSY             : 1; /// Busy Flag
				uint32_t                  : 5;
				uint32_t PLLLS            : 1; /// PLL Lock Status
				uint32_t PLLLIF           : 1; /// PLL Lock Interrupt Flag
				uint32_t PLLUIF           : 1; /// PLL Unlock Interrupt Flag
				uint32_t                  : 1;
				uint32_t RRS              : 1; /// Regulator Ready Status
				uint32_t RRIF             : 1; /// Regulator Ready Interrupt Flag
				uint32_t                  : 18;
				//SOOL-DSI_WISR-DECLARATIONS
			};
			struct WIFCR_t: public Reg32_t /// DSI wrapper interrupt flag clear register
			{
				using Reg32_t::operator=;
				uint32_t CTEIF            : 1; /// Clear Tearing Effect Interrupt Flag
				uint32_t CERIF            : 1; /// Clear End of Refresh Interrupt Flag
				uint32_t                  : 7;
				uint32_t CPLLLIF          : 1; /// Clear PLL Lock Interrupt Flag
				uint32_t CPLLUIF          : 1; /// Clear PLL Unlock Interrupt Flag
				uint32_t                  : 2;
				uint32_t CRRIF            : 1; /// Clear Regulator Ready Interrupt Flag
				uint32_t                  : 18;
				//SOOL-DSI_WIFCR-DECLARATIONS
			};
			#ifdef DSI_WPCR0
			struct WPCR0_t: public Reg32_t /// DSI wrapper PHY configuration register 0
			{
				using Reg32_t::operator=;
				uint32_t UIX4             : 6; /// Unit Interval multiplied by 4
				uint32_t SWCL             : 1; /// Swap Clock Lane pins
				uint32_t SWDL0            : 1; /// Swap Data Lane 0 pins
				uint32_t SWDL1            : 1; /// Swap Data Lane 1 pins
				uint32_t HSICL            : 1; /// Invert Hight-Speed data signal on Clock Lane
				uint32_t HSIDL0           : 1; /// Invert the Hight-Speed data signal on Data Lane 0
				uint32_t HSIDL1           : 1; /// Invert the High-Speed data signal on Data Lane 1
				uint32_t FTXSMCL          : 1; /// Force in TX Stop Mode the Clock Lane
				uint32_t FTXSMDL          : 1; /// Force in TX Stop Mode the Data Lanes
				uint32_t CDOFFDL          : 1; /// Contention Detection OFF on Data Lanes
				uint32_t                  : 1;
				uint32_t TDDL             : 1; /// Turn Disable Data Lanes
				uint32_t                  : 1;
				uint32_t DSI_WPCR0_PDEN   : 1; /// Pull-Down Enable
				uint32_t DSI_WPCR0_TCLKPREPEN : 1; /// custom time for tCLK-PREPARE Enable
				uint32_t DSI_WPCR0_TCLKZEROEN : 1; /// custom time for tCLK-ZERO Enable
				uint32_t DSI_WPCR0_THSPREPEN : 1; /// custom time for tHS-PREPARE Enable
				uint32_t DSI_WPCR0_THSTRAILEN : 1; /// custom time for tHS-TRAIL Enable
				uint32_t DSI_WPCR0_THSZEROEN : 1; /// custom time for tHS-ZERO Enable
				uint32_t DSI_WPCR0_TLPXDEN : 1; /// custom time for tLPX for Data lanes Enable
				uint32_t DSI_WPCR0_THSEXITEN : 1; /// custom time for tHS-EXIT Enable
				uint32_t DSI_WPCR0_TLPXCEN : 1; /// custom time for tLPX for Clock lane Enable
				uint32_t DSI_WPCR0_TCLKPOSTEN : 1; /// custom time for tCLK-POST Enable
				uint32_t                  : 4;
				//SOOL-DSI_WPCR0-DECLARATIONS
			};
			#endif
			struct WPCR1_t: public Reg32_t /// This register shall be programmed only when DSI is stopped (CR. DSIEN=0 and CR.EN = 0).
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t DSI_WPCR1_0_SKEWCL : 2;
						uint32_t DSI_WPCR1_0_SKEWDL : 2;
						uint32_t                  : 2;
						uint32_t DSI_WPCR1_0_LPTXSRCL : 2;
						uint32_t DSI_WPCR1_0_LPTXSRDL : 2;
						uint32_t DSI_WPCR1_0_HSIDL0 : 1; /// Invert the Hight-Speed data signal on Data Lane 0
						uint32_t DSI_WPCR1_0_HSIDL1 : 1; /// Invert the High-Speed data signal on Data Lane 1
						uint32_t DSI_WPCR1_0_SDDCCL : 1;
						uint32_t DSI_WPCR1_0_SDDCDL : 1;
						uint32_t DSI_WPCR1_0_CDOFFDL : 1; /// Contention Detection OFF on Data Lanes
						uint32_t                  : 1;
						uint32_t DSI_WPCR1_0_HSTXSRUCL : 1;
						uint32_t DSI_WPCR1_0_HSTXSRDCL : 1;
						uint32_t DSI_WPCR1_0_HSTXSRUDL : 1;
						uint32_t DSI_WPCR1_0_HSTXSRDDL : 1;
						uint32_t DSI_WPCR1_0_TCLKZEROEN : 1; /// custom time for tCLK-ZERO Enable
						uint32_t DSI_WPCR1_0_THSPREPEN : 1; /// custom time for tHS-PREPARE Enable
						uint32_t DSI_WPCR1_0_FLPRXLPM : 1; /// Forces LP Receiver in Low-Power Mode
						uint32_t DSI_WPCR1_0_THSZEROEN : 1; /// custom time for tHS-ZERO Enable
						uint32_t DSI_WPCR1_0_TLPXDEN : 1; /// custom time for tLPX for Data lanes Enable
						uint32_t DSI_WPCR1_0_LPRXFT : 2; /// Low-Power RX low-pass Filtering Tuning
						uint32_t DSI_WPCR1_0_TCLKPOSTEN : 1; /// custom time for tCLK-POST Enable
						uint32_t                  : 4;
					};
					#ifdef DSI_WPCR1_1
					struct
					{
						uint32_t DSI_WPCR1_1_HSTXDCL : 2; /// High-Speed Transmission Delay on Clock Lane
						uint32_t DSI_WPCR1_1_HSTXDLL : 2; /// High-Speed Transmission Delay on Data Lanes
						uint32_t                  : 2;
						uint32_t DSI_WPCR1_1_LPSRCL : 2; /// Low-Power transmission Slew Rate Compensation on Clock Lane
						uint32_t DSI_WPCR1_1_LPSRDL : 2; /// Low-Power transmission Slew Rate Compensation on Data Lanes
						uint32_t                  : 2;
						uint32_t DSI_WPCR1_1_SDCC : 1; /// SDD Control
						uint32_t DSI_WPCR1_1_FTXSMDL : 1; /// Force in TX Stop Mode the Data Lanes
						uint32_t                  : 2;
						uint32_t DSI_WPCR1_1_HSTXSRCCL : 2; /// High-Speed Transmission Slew Rate Control on Clock Lane
						uint32_t DSI_WPCR1_1_HSTXSRCDL : 2; /// High-Speed Transmission Slew Rate Control on Data Lanes
						uint32_t                  : 2;
						uint32_t DSI_WPCR1_1_THSTRAILEN : 1; /// custom time for tHS-TRAIL Enable
						uint32_t                  : 2;
						uint32_t DSI_WPCR1_1_THSEXITEN : 1; /// custom time for tHS-EXIT Enable
						uint32_t DSI_WPCR1_1_TLPXCEN : 1; /// custom time for tLPX for Clock lane Enable
						uint32_t                  : 5;
					};
					#endif
					#ifdef DSI_WPCR1_2
					struct
					{
						uint32_t UIX4             : 6; /// Unit Interval multiplied by 4
						uint32_t SWCL             : 1; /// Swap Clock Lane pins
						uint32_t SWDL0            : 1; /// Swap Data Lane 0 pins
						uint32_t SWDL1            : 1; /// Swap Data Lane 1 pins
						uint32_t HSICL            : 1; /// Invert Hight-Speed data signal on Clock Lane
						uint32_t                  : 2;
						uint32_t FTXSMCL          : 1; /// Force in TX Stop Mode the Clock Lane
						uint32_t                  : 3;
						uint32_t TDDL             : 1; /// Turn Disable Data Lanes
						uint32_t                  : 1;
						uint32_t PDEN             : 1; /// Pull-Down Enable
						uint32_t TCLKPREPEN       : 1; /// custom time for tCLK-PREPARE Enable
						uint32_t                  : 12;
					};
					#endif
				};
				//SOOL-DSI_WPCR1-DECLARATIONS
			};
			struct WRPCR_t: public Reg32_t /// DSI wrapper regulator and PLL control register
			{
				using Reg32_t::operator=;
				uint32_t PLLEN            : 1; /// PLL Enable
				uint32_t                  : 1;
				uint32_t NDIV             : 7; /// PLL Loop Division Factor
				uint32_t                  : 2;
				uint32_t IDF              : 4; /// PLL Input Division Factor
				uint32_t                  : 1;
				uint32_t ODF              : 2; /// PLL Output Division Factor
				uint32_t                  : 6;
				uint32_t REGEN            : 1; /// Regulator Enable
				uint32_t                  : 3;
				uint32_t DSI_WRPCR_BGREN  : 1;
				uint32_t                  : 3;
				//SOOL-DSI_WRPCR-DECLARATIONS
			};
			#ifdef DSI_HWCFGR
			struct HWCFGR_t: public Reg32_t /// DSI Host hardware configuration register
			{
				using Reg32_t::operator=;
				uint32_t TECHNO           : 4;
				uint32_t FIFOSIZE         : 12;
				uint32_t                  : 16;
				//SOOL-DSI_HWCFGR-DECLARATIONS
			};
			#endif
			#ifdef DSI_VERR
			struct VERR_t: public Reg32_t /// DSI Host version register
			{
				using Reg32_t::operator=;
				uint32_t MINREV           : 4;
				uint32_t MAJREV           : 4;
				uint32_t                  : 24;
				//SOOL-DSI_VERR-DECLARATIONS
			};
			#endif
			#ifdef DSI_IPIDR
			struct IPIDR_t: public Reg32_t /// DSI Host identification register
			{
				using Reg32_t::operator=;
				uint32_t ID               : 32;
				//SOOL-DSI_IPIDR-DECLARATIONS
			};
			#endif
			#ifdef DSI_SIDR
			struct SIDR_t: public Reg32_t /// DSI Host size identification register
			{
				using Reg32_t::operator=;
				uint32_t SID              : 32;
				//SOOL-DSI_SIDR-DECLARATIONS
			};
			#endif
			#ifdef DSI_DLTx
			struct DLTx_t: public Reg32_t /// DSI Host Data Lane Timer Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t MRD_TIME         : 15; /// Maximum Read Time
				uint32_t                  : 1;
				uint32_t LP2HS_TIME       : 8; /// Low-Power To High-Speed Time
				uint32_t HS2LP_TIME       : 8; /// High-Speed To Low-Power Time
				//SOOL-DSI_DLTx-DECLARATIONS
			};
			#endif
			#ifdef DSI_WPCR2
			struct WPCR2_t: public Reg32_t /// DSI Wrapper PHY Configuration Register 2
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef DSI_WPCR2_0
					struct
					{
						uint32_t TCLKPREP         : 8; /// tCLK-PREPARE
						uint32_t TCLKZEO          : 8; /// tCLK-ZERO
						uint32_t THSPREP          : 8; /// tHS-PREPARE
						uint32_t THSTRAIL         : 8; /// tHSTRAIL
					};
					#endif
					#ifdef DSI_WPCR2_1
					struct
					{
						uint32_t HSTXDCL          : 2; /// High-Speed Transmission Delay on Clock Lane
						uint32_t HSTXDLL          : 2; /// High-Speed Transmission Delay on Data Lanes
						uint32_t                  : 2;
						uint32_t LPSRCL           : 2; /// Low-Power transmission Slew Rate Compensation on Clock Lane
						uint32_t LPSRDL           : 2; /// Low-Power transmission Slew Rate Compensation on Data Lanes
						uint32_t                  : 2;
						uint32_t SDCC             : 1; /// SDD Control
						uint32_t                  : 3;
						uint32_t HSTXSRCCL        : 2; /// High-Speed Transmission Slew Rate Control on Clock Lane
						uint32_t HSTXSRCDL        : 2; /// High-Speed Transmission Slew Rate Control on Data Lanes
						uint32_t                  : 2;
						uint32_t FLPRXLPM         : 1; /// Forces LP Receiver in Low-Power Mode
						uint32_t                  : 2;
						uint32_t LPRXFT           : 2; /// Low-Power RX low-pass Filtering Tuning
						uint32_t                  : 5;
					};
					#endif
				};
				//SOOL-DSI_WPCR2-DECLARATIONS
			};
			#endif
			#ifdef DSI_WPCR3
			struct WPCR3_t: public Reg32_t /// DSI Wrapper PHY Configuration Register 3
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef DSI_WPCR3_0
					struct
					{
						uint32_t THSZERO          : 8; /// tHS-ZERO
						uint32_t TLPXD            : 8; /// tLPX for Data lanes
						uint32_t THSEXIT          : 8; /// tHSEXIT
						uint32_t TLPXC            : 8; /// tLPXC for Clock lane
					};
					#endif
					#ifdef DSI_WPCR3_1
					struct
					{
						uint32_t TCLKPREP         : 8; /// tCLK-PREPARE
						uint32_t TCLKZEO          : 8; /// tCLK-ZERO
						uint32_t THSPREP          : 8; /// tHS-PREPARE
						uint32_t THSTRAIL         : 8; /// tHSTRAIL
					};
					#endif
				};
				//SOOL-DSI_WPCR3-DECLARATIONS
			};
			#endif
			#ifdef DSI_WPCR4
			struct WPCR4_t: public Reg32_t /// DSI Wrapper PHY Configuration Register 4
			{
				using Reg32_t::operator=;
				uint32_t THSZERO          : 8; /// tCLK-POST
				uint32_t DSI_WPCR4_TLPXD  : 8; /// tLPX for Data lanes
				uint32_t DSI_WPCR4_THSEXIT : 8; /// tHSEXIT
				uint32_t DSI_WPCR4_TLPXC  : 8; /// tLPXC for Clock lane
				//SOOL-DSI_WPCR4-DECLARATIONS
			};
			#endif
			#ifdef DSI_WPCR5
			struct WPCR5_t: public Reg32_t /// DSI Wrapper PHY Configuration Register 5
			{
				using Reg32_t::operator=;
				uint32_t THSZERO          : 8; /// tCLK-POST
				uint32_t                  : 24;
				//SOOL-DSI_WPCR5-DECLARATIONS
			};
			#endif
			union
			{
				struct
				{
					VR_t VR; /// DSI Host version register
					CR_t CR; /// DSI Host control register
					CCR_t CCR; /// DSI Host clock control register
					xVCIDR_t LVCIDR; /// DSI Host LTDC VCID register
					LCOLCR_t LCOLCR; /// DSI Host LTDC color coding register
					LPCR_t LPCR; /// DSI Host LTDC polarity configuration register
					LPMCxCR_t LPMCR; /// DSI Host low-power mode configuration register
					__SOOL_PERIPH_PADDING_16;
					DSI_MAP0_PCR; /// DSI Host protocol configuration register
					DSI_MAP0_GVCIDR; /// DSI Host generic VCID register
					DSI_MAP0_MCR; /// DSI Host mode configuration register
					DSI_MAP0_VMCR; /// DSI Host video mode configuration register
					DSI_MAP0_VPCR; /// DSI Host video packet configuration register
					DSI_MAP0_VCCR; /// DSI Host video chunks configuration register
					DSI_MAP0_VNPCR; /// DSI Host video null packet configuration register
					DSI_MAP0_VHSACR; /// DSI Host video HSA configuration register
					DSI_MAP0_VHBPCR; /// DSI Host video HBP configuration register
					DSI_MAP0_VLCR; /// DSI Host video line configuration register
					DSI_MAP0_VVSACR; /// DSI Host video VSA configuration register
					DSI_MAP0_VVBPCR; /// DSI Host video VBP configuration register
					DSI_MAP0_VVFPCR; /// DSI Host video VFP configuration register
					DSI_MAP0_VVACR; /// DSI Host video VA configuration register
					DSI_MAP0_LCCR; /// DSI Host LTDC command configuration register
					DSI_MAP0_CMCR; /// DSI Host command mode configuration register
					DSI_MAP0_GHCR; /// DSI Host generic header configuration register
					DSI_MAP0_GPDR; /// DSI Host generic payload data register
					DSI_MAP0_GPSR; /// DSI Host generic packet status register
					DSI_MAP0_TCCR0; /// DSI Host timeout counter configuration register 0
					DSI_MAP0_TCCR1; /// DSI Host timeout counter configuration register 1
					DSI_MAP0_TCCR2; /// DSI Host timeout counter configuration register 2
					DSI_MAP0_TCCR3; /// DSI Host timeout counter configuration register 3
					DSI_MAP0_TCCR4; /// DSI Host timeout counter configuration register 4
					DSI_MAP0_TCCR5; /// DSI Host timeout counter configuration register 5
					__SOOL_PERIPH_PADDING_4;
					DSI_MAP0_CLCR; /// DSI Host clock lane configuration register
					DSI_MAP0_CLTCR; /// DSI Host clock lane timer configuration register
					DSI_MAP0_DLTCR; /// DSI Host data lane timer configuration register
					DSI_MAP0_PCTLR; /// DSI Host PHY control register
					DSI_MAP0_PCONFR; /// DSI Host PHY configuration register
					DSI_MAP0_PUCR; /// DSI Host PHY ULPS control register
					DSI_MAP0_PTTCR; /// DSI Host PHY TX triggers configuration register
					DSI_MAP0_PSR; /// DSI Host PHY status register
					__SOOL_PERIPH_PADDING_8;
					DSI_MAP0_ISR0; /// DSI Host interrupt and status register 0
					DSI_MAP0_ISR1; /// DSI Host interrupt and status register 1
					DSI_MAP0_IER0; /// DSI Host interrupt enable register 0
					DSI_MAP0_IER1; /// DSI Host interrupt enable register 1
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					DSI_MAP0_FIR0; /// DSI Host force interrupt register 0
					DSI_MAP0_FIR1; /// DSI Host force interrupt register 1
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					DSI_MAP0_DLTRCR; /// DSI Host data lane timer read configuration register
					__SOOL_PERIPH_PADDING_8;
					DSI_MAP0_VSCR; /// DSI Host video shadow control register
					__SOOL_PERIPH_PADDING_8;
					DSI_MAP0_LCVCIDR; /// DSI Host LTDC current VCID register
					DSI_MAP0_LCCCR; /// DSI Host LTDC current color coding register
					__SOOL_PERIPH_PADDING_4;
					DSI_MAP0_LPMCCR; /// DSI Host low-power mode current configuration register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					DSI_MAP0_VMCCR; /// DSI Host video mode current configuration register
					DSI_MAP0_VPCCR; /// DSI Host video packet current configuration register
					DSI_MAP0_VCCCR; /// DSI Host video chunks current configuration register
					DSI_MAP0_VNPCCR; /// DSI Host video null packet current configuration register
					DSI_MAP0_VHSACCR; /// DSI Host video HSA current configuration register
					DSI_MAP0_VHBPCCR; /// DSI Host video HBP current configuration register
					DSI_MAP0_VLCCR; /// DSI Host video line current configuration register
					DSI_MAP0_VVSACCR; /// DSI Host video VSA current configuration register
					DSI_MAP0_VVBPCCR; /// DSI Host video VBP current configuration register
					DSI_MAP0_VVFPCCR; /// DSI Host video VFP current configuration register
					DSI_MAP0_VVACCR; /// DSI Host video VA current configuration register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_512;
					WCFGR_t WCFGR; /// DSI wrapper configuration register
					WCR_t WCR; /// DSI wrapper control register
					WIER_t WIER; /// DSI wrapper interrupt enable register
					WISR_t WISR; /// DSI wrapper interrupt and status register
					WIFCR_t WIFCR; /// DSI wrapper interrupt flag clear register
					__SOOL_PERIPH_PADDING_4;
					DSI_MAP0_WPCR0; /// DSI wrapper PHY configuration register 0
					DSI_MAP0_WPCR1; /// This register shall be programmed only when DSI is stopped (CR. DSIEN=0 and CR.EN = 0).
					__SOOL_PERIPH_PADDING_16;
					WRPCR_t WRPCR; /// DSI wrapper regulator and PLL control register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					DSI_MAP0_HWCFGR; /// DSI Host hardware configuration register
					DSI_MAP0_VERR; /// DSI Host version register
					DSI_MAP0_IPIDR; /// DSI Host identification register
					DSI_MAP0_SIDR; /// DSI Host size identification register
				};
				#ifdef DSI_MAP1
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					DSI_MAP1_PCR; /// DSI Host Protocol Configuration Register
					DSI_MAP1_GVCIDR; /// DSI Host Generic VCID Register
					DSI_MAP1_MCR; /// DSI Host mode Configuration Register
					DSI_MAP1_VMCR; /// DSI Host Video mode Configuration Register
					DSI_MAP1_VPCR; /// DSI Host Video Packet Configuration Register
					DSI_MAP1_VCCR; /// DSI Host Video Chunks Configuration Register
					DSI_MAP1_VNPCR; /// DSI Host Video Null Packet Configuration Register
					DSI_MAP1_VHSACR; /// DSI Host Video HSA Configuration Register
					DSI_MAP1_VHBPCR; /// DSI Host Video HBP Configuration Register
					DSI_MAP1_VLCR; /// DSI Host Video Line Configuration Register
					DSI_MAP1_VVSACR; /// DSI Host Video VSA Configuration Register
					DSI_MAP1_VVBPCR; /// DSI Host Video VBP Configuration Register
					DSI_MAP1_VVFPCR; /// DSI Host Video VFP Configuration Register
					DSI_MAP1_VVACR; /// DSI Host Video VA Configuration Register
					DSI_MAP1_LCCR; /// DSI Host LTDC Command Configuration Register
					DSI_MAP1_CMCR; /// DSI Host Command mode Configuration Register
					DSI_MAP1_GHCR; /// DSI Host Generic Header Configuration Register
					DSI_MAP1_GPDR; /// DSI Host Generic Payload Data Register
					DSI_MAP1_GPSR; /// DSI Host Generic Packet Status Register
					DSI_MAP1_TCCR0; /// DSI Host Timeout Counter Configuration Register 0
					DSI_MAP1_TCCR1; /// DSI Host Timeout Counter Configuration Register 1
					DSI_MAP1_TCCR2; /// DSI Host Timeout Counter Configuration Register 2
					DSI_MAP1_TCCR3; /// DSI Host Timeout Counter Configuration Register 3
					DSI_MAP1_TCCR4; /// DSI Host Timeout Counter Configuration Register 4
					DSI_MAP1_TCCR5; /// DSI Host Timeout Counter Configuration Register 5
					DSI_MAP1_CLCR; /// DSI Host Clock Lane Configuration Register
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					DSI_MAP1_DLTRC; /// DSI Host Data Lane Timer Configuration Register
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					DSI_MAP1_WPCR2; /// DSI Wrapper PHY Configuration Register 2
					DSI_MAP1_WPCR3; /// DSI Wrapper PHY Configuration Register 3
					DSI_MAP1_WPCR4; /// DSI Wrapper PHY Configuration Register 4
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
				#endif
				#ifdef DSI_MAP2
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_128;
					DSI_MAP2_DLTRC; /// DSI Host Data Lane Timer Configuration Register
					DSI_MAP2_PCTLR; /// DSI Host PHY Control Register
					DSI_MAP2_PCONFR; /// DSI Host PHY Configuration Register
					DSI_MAP2_PUCR; /// DSI Host PHY ULPS Control Register
					DSI_MAP2_PTTCR; /// DSI Host PHY TX Triggers Configuration Register
					DSI_MAP2_PSR; /// DSI Host PHY Status Register
					DSI_MAP2_ISR0; /// DSI Host Interrupt & Status Register 0
					DSI_MAP2_ISR1; /// DSI Host Interrupt & Status Register 1
					DSI_MAP2_IER0; /// DSI Host Interrupt Enable Register 0
					DSI_MAP2_IER1; /// DSI Host Interrupt Enable Register 1
					DSI_MAP2_FIR0; /// DSI Host Force Interrupt Register 0
					DSI_MAP2_FIR1; /// DSI Host Force Interrupt Register 1
					DSI_MAP2_VSCR; /// DSI Host Video Shadow Control Register
					DSI_MAP2_LCVCIDR; /// DSI Host LTDC Current VCID Register
					DSI_MAP2_LCCCR; /// DSI Host LTDC Current Color Coding Register
					DSI_MAP2_LPMCCR; /// DSI Host Low-Power mode Current Configuration Register
					DSI_MAP2_VMCCR; /// DSI Host Video mode Current Configuration Register
					DSI_MAP2_VPCCR; /// DSI Host Video Packet Current Configuration Register
					DSI_MAP2_VCCCR; /// DSI Host Video Chunks Current Configuration Register
					DSI_MAP2_VNPCCR; /// DSI Host Video Null Packet Current Configuration Register
					DSI_MAP2_VHSACCR; /// DSI Host Video HSA Current Configuration Register
					DSI_MAP2_VHBPCCR; /// DSI Host Video HBP Current Configuration Register
					DSI_MAP2_VLCCR; /// DSI Host Video Line Current Configuration Register
					DSI_MAP2_VVSACCR; /// DSI Host Video VSA Current Configuration Register
					DSI_MAP2_VVBPCCR; /// DSI Host Video VBP Current Configuration Register
					DSI_MAP2_VVFPCCR; /// DSI Host Video VFP Current Configuration Register
					DSI_MAP2_VVACCR; /// DSI Host Video VA Current Configuration Register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					WPCR1_t WPCR1; /// DSI Wrapper PHY Configuration Register 1
					WPCR2_t WPCR2; /// DSI Wrapper PHY Configuration Register 2
					WPCR3_t WPCR3; /// DSI Wrapper PHY Configuration Register 3
					WPCR4_t WPCR4; /// DSI Wrapper PHY Configuration Register 4
					WPCR5_t WPCR5; /// DSI Wrapper PHY Configuration Register 5
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
				#endif
				#ifdef DSI_MAP3
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_128;
					DSI_MAP3_CLTCR; /// DSI Host Clock Lane Timer Configuration Register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					DSI_MAP3_DLTCR; /// DSI Host Data Lane Timer Configuration Register
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
				};
				#endif
			};
			//SOOL-DSI-DECLARATIONS-BEGIN
			constexpr volatile Reg32_t &get_clock_enable_reg(const uintptr_t addr);
			constexpr uint32_t get_clock_enable_bit(const uintptr_t addr);
			
			void write_short(const int channel_id, const ShortWriteType mode, const uint8_t param1, const uint8_t  param2) volatile;
			
			/**
			 * In DCS mode, the first parameter is the location to write to.
			 * @param channel_id
			 * @param mode
			 * @param payload_length
			 * @param payload
			 */
			void write_long(const int channel_id, const DSI::LongWriteType mode, const unsigned int payload_length, const uint8_t *payload) volatile;
			//SOOL-DSI-DECLARATIONS-END
			#if __SOOL_DEBUG_NOPHY
				DSI(uintptr_t addr) : myaddr(addr){};
				const uintptr_t myaddr;
				inline const uintptr_t get_addr() const volatile {return myaddr;};
			#else
				inline const uintptr_t get_addr() const volatile {return reinterpret_cast<uintptr_t>(this);};
			private:
				DSI() = delete;
			#endif
		};

#if	defined(STM32MP1     )
#define DSI_BASE_ADDR ((uint32_t)0x5a000000U)
#define DSI_TMPL
#endif

#if	defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S9xx  )
#define DSI_BASE_ADDR ((uint32_t)0x40016c00U)
#define DSI_TMPL
#endif


//Instances for peripheral DSI
		#if __SOOL_DEBUG_NOPHY
			volatile class DSI * const DSI = new class DSI(DSI_BASE_ADDR);
		#else
			volatile class DSI * const DSI = reinterpret_cast<class DSI* const>(DSI_BASE_ADDR);
		#endif

		//SOOL-DSI-DEFINES
		//SOOL-DSI-DEFINITIONS-BEGIN
		constexpr volatile Reg32_t &DSI::get_clock_enable_reg(const uintptr_t addr)
		{
		switch (addr)
		{
		//Output for DSIEN
		#ifdef DSI_BASE_ADDR
		case DSI_BASE_ADDR :
		return RCC->APB2ENR;
		#endif
		}
		}
		
		constexpr uint32_t DSI::get_clock_enable_bit(const uintptr_t addr)
		{
		switch (addr)
		{
		//Output for DSIEN
		#ifdef DSI_BASE_ADDR
		case DSI_BASE_ADDR :
		return 1 << 27;
		#endif
		}
		}
		//SOOL-DSI-DEFINITIONS-END
	};
};
#undef DSI_MAP0_VVACR
#undef DSI_MAP0_IPIDR
#undef DSI_MAP2_IER0
#undef DSI_MAP2_PSR
#undef DSI_MAP0_VHSACR
#undef DSI_MAP0_VMCCR
#undef DSI_MAP2_FIR0
#undef DSI_MAP0_VCCR
#undef DSI_WPCR0_THSZEROEN
#undef DSI_TCCR4_0
#undef DSI_WPCR1_1_TLPXCEN
#undef DSI_MAP1_CMCR
#undef DSI_WPCR4_THSEXIT
#undef DSI_WPCR1_1
#undef DSI_MAP1_VVACR
#undef DSI_WPCR0_THSPREPEN
#undef DSI_MAP1_DLTRC
#undef DSI_MAP1_VNPCR
#undef DSI_MAP2_VHSACCR
#undef DSI_WPCR1_0_TCLKPOSTEN
#undef DSI_MAP0_GPDR
#undef DSI_WPCR1_0_HSTXSRUDL
#undef DSI_WPCR1_1_HSTXDCL
#undef DSI_WPCR1_0_SDDCCL
#undef DSI_MAP2_VHBPCCR
#undef DSI_MAP0_LCCR
#undef DSI_MAP2_ISR1
#undef DSI_WPCR0_THSTRAILEN
#undef DSI_WPCR2_0
#undef DSI_MAP0_VVACCR
#undef DSI_MAP2_PTTCR
#undef DSI_MAP2_LCCCR
#undef DSI_WPCR1_1_HSTXDLL
#undef DSI_TMPL
#undef DSI_WPCR1_0_LPTXSRCL
#undef DSI_MAP0_VVSACR
#undef DSI_MAP0_VHSACCR
#undef DSI_MAP2_ISR0
#undef DSI_WPCR1_0_TCLKZEROEN
#undef DSI_MAP2_IER1
#undef DSI_MAP1_GPSR
#undef DSI_MAP0_TCCR2
#undef DSI_MAP1_GHCR
#undef DSI_MAP0_VNPCCR
#undef DSI_MAP1_WPCR3
#undef DSI_MAP2_VCCCR
#undef DSI_WRPCR_BGREN
#undef DSI_WPCR1_0_HSTXSRDCL
#undef DSI_MAP0_VSCR
#undef DSI_WPCR1_1_LPSRDL
#undef DSI_MAP1_TCCR4
#undef DSI_MAP1_VLCR
#undef DSI_MAP0_IER0
#undef DSI_MAP3_CLTCR
#undef DSI_MAP0_VHBPCR
#undef DSI_WPCR1_0_HSTXSRUCL
#undef DSI_MAP1_TCCR2
#undef DSI_MAP0_VVFPCR
#undef DSI_MAP0_PUCR
#undef DSI_MAP0_GPSR
#undef DSI_MAP1_TCCR3
#undef DSI_WPCR0_TLPXDEN
#undef DSI_WPCR1_0_LPRXFT
#undef DSI_MAP2_FIR1
#undef DSI_MAP0_VHBPCCR
#undef DSI_TCCR4_1
#undef DSI_MAP2_LPMCCR
#undef DSI_WPCR1_1_LPSRCL
#undef DSI_MAP0_TCCR3
#undef DSI_MAP0_PCONFR
#undef DSI_MAP0_CLCR
#undef DSI_MAP0_FIR0
#undef DSI_MAP2_VPCCR
#undef DSI_MAP2_DLTRC
#undef DSI_MAP0_TCCR4
#undef DSI_MAP0_DLTRCR
#undef DSI_MAP0_GHCR
#undef DSI_MAP1_WPCR2
#undef DSI_WPCR3_0
#undef DSI_MAP0_TCCR0
#undef DSI_MAP1_VMCR
#undef DSI_MAP1_GVCIDR
#undef DSI_MAP2_PCONFR
#undef DSI_MAP0_CMCR
#undef DSI_MAP1_TCCR1
#undef DSI_WPCR1_0_THSZEROEN
#undef DSI_MAP0_VPCCR
#undef DSI_WPCR1_0_HSIDL0
#undef DSI_MAP0_IER1
#undef DSI_MAP0_TCCR1
#undef DSI_WPCR1_1_THSEXITEN
#undef DSI_WPCR2_1
#undef DSI_MAP2_VNPCCR
#undef DSI_MAP0_MCR
#undef DSI_WPCR1_0_HSIDL1
#undef DSI_MAP0_TCCR5
#undef DSI_MAP3_DLTCR
#undef DSI_WPCR0_THSEXITEN
#undef DSI_WPCR1_0_FLPRXLPM
#undef DSI_MAP1_LCCR
#undef DSI_WPCR1_0_SKEWDL
#undef DSI_MAP0_ISR1
#undef DSI_MAP1_VCCR
#undef DSI_MAP1_CLCR
#undef DSI_WPCR0_TLPXCEN
#undef DSI_WPCR1_0_TLPXDEN
#undef DSI_MAP0_PSR
#undef DSI_MAP0_ISR0
#undef DSI_MAP0_LCCCR
#undef DSI_MAP0_WPCR1
#undef DSI_WPCR3_1
#undef DSI_MAP1_VHBPCR
#undef DSI_MAP2_VLCCR
#undef DSI_MAP2_LCVCIDR
#undef DSI_MAP0_VVFPCCR
#undef DSI_MAP2_VSCR
#undef DSI_MAP1_PCR
#undef DSI_MAP0_VCCCR
#undef DSI_MAP2
#undef DSI_WPCR1_1_THSTRAILEN
#undef DSI_WPCR1_1_HSTXSRCDL
#undef DSI_MAP1_TCCR0
#undef DSI_MAP0_VVBPCCR
#undef DSI_MAP0_VMCR
#undef DSI_WPCR1_0_THSPREPEN
#undef DSI_MAP1
#undef DSI_WPCR1_1_FTXSMDL
#undef DSI_MAP0_VVSACCR
#undef DSI_MAP2_VMCCR
#undef DSI_MAP0_DLTCR
#undef DSI_MAP0_SIDR
#undef DSI_MAP0_PCR
#undef DSI_WPCR1_2
#undef DSI_MAP2_VVACCR
#undef DSI_WPCR1_0_SDDCDL
#undef DSI_MAP1_VPCR
#undef DSI_WPCR0_TCLKPOSTEN
#undef DSI_MAP0_VVBPCR
#undef DSI_MAP0_WPCR0
#undef DSI_WPCR0_TCLKPREPEN
#undef DSI_MAP0_FIR1
#undef DSI_MAP0_CLTCR
#undef DSI_MAP0_LCVCIDR
#undef DSI_MAP0_LPMCCR
#undef DSI_MAP0_VLCCR
#undef DSI_MAP1_VHSACR
#undef DSI_MAP1_MCR
#undef DSI_WPCR1_1_SDCC
#undef DSI_MAP0_VPCR
#undef DSI_MAP1_VVBPCR
#undef DSI_MAP1_TCCR5
#undef DSI_MAP0_GVCIDR
#undef DSI_MAP1_VVSACR
#undef DSI_MAP2_PCTLR
#undef DSI_WPCR1_0_CDOFFDL
#undef DSI_MAP2_PUCR
#undef DSI_WPCR4_TLPXC
#undef DSI_MAP1_VVFPCR
#undef DSI_MAP0_VNPCR
#undef DSI_WPCR1_0_HSTXSRDDL
#undef DSI_MAP2_VVBPCCR
#undef DSI_MAP0_VERR
#undef DSI_WPCR1_0_LPTXSRDL
#undef DSI_WPCR0_TCLKZEROEN
#undef DSI_MAP1_WPCR4
#undef DSI_WPCR0_PDEN
#undef DSI_WPCR1_0_SKEWCL
#undef DSI_MAP1_GPDR
#undef DSI_MAP2_VVFPCCR
#undef DSI_WPCR4_TLPXD
#undef DSI_MAP3
#undef DSI_MAP0_HWCFGR
#undef DSI_MAP0_VLCR
#undef DSI_MAP0_PCTLR
#undef DSI_MAP0_PTTCR
#undef DSI_MAP2_VVSACCR
#undef DSI_WPCR1_1_HSTXSRCCL

#endif

#endif //__SOOL_CORE_DSI_H