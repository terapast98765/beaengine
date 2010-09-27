/* automatically generated from ./regs.dat - do not edit */

#include "tables.h"
#include "nasm.h"

const opflags_t nasm_reg_flags[] = {
    0,
    REG_HIGH,       /* ah    */
    REG_AL,         /* al    */
    REG_AX,         /* ax    */
    REG_HIGH,       /* bh    */
    REG8NA,         /* bl    */
    REG16NA,        /* bp    */
    REG8NA,         /* bpl   */
    REG16NA,        /* bx    */
    REG_HIGH,       /* ch    */
    REG_CL,         /* cl    */
    REG_CREG,       /* cr0   */
    REG_CREG,       /* cr1   */
    REG_CREG,       /* cr10  */
    REG_CREG,       /* cr11  */
    REG_CREG,       /* cr12  */
    REG_CREG,       /* cr13  */
    REG_CREG,       /* cr14  */
    REG_CREG,       /* cr15  */
    REG_CREG,       /* cr2   */
    REG_CREG,       /* cr3   */
    REG_CREG,       /* cr4   */
    REG_CREG,       /* cr5   */
    REG_CREG,       /* cr6   */
    REG_CREG,       /* cr7   */
    REG_CREG,       /* cr8   */
    REG_CREG,       /* cr9   */
    REG_CS,         /* cs    */
    REG_CX,         /* cx    */
    REG_HIGH,       /* dh    */
    REG16NA,        /* di    */
    REG8NA,         /* dil   */
    REG_DL,         /* dl    */
    REG_DREG,       /* dr0   */
    REG_DREG,       /* dr1   */
    REG_DREG,       /* dr10  */
    REG_DREG,       /* dr11  */
    REG_DREG,       /* dr12  */
    REG_DREG,       /* dr13  */
    REG_DREG,       /* dr14  */
    REG_DREG,       /* dr15  */
    REG_DREG,       /* dr2   */
    REG_DREG,       /* dr3   */
    REG_DREG,       /* dr4   */
    REG_DREG,       /* dr5   */
    REG_DREG,       /* dr6   */
    REG_DREG,       /* dr7   */
    REG_DREG,       /* dr8   */
    REG_DREG,       /* dr9   */
    REG_DESS,       /* ds    */
    REG_DX,         /* dx    */
    REG_EAX,        /* eax   */
    REG32NA,        /* ebp   */
    REG32NA,        /* ebx   */
    REG_ECX,        /* ecx   */
    REG32NA,        /* edi   */
    REG_EDX,        /* edx   */
    REG_DESS,       /* es    */
    REG32NA,        /* esi   */
    REG32NA,        /* esp   */
    REG_FSGS,       /* fs    */
    REG_FSGS,       /* gs    */
    MMXREG,         /* mm0   */
    MMXREG,         /* mm1   */
    MMXREG,         /* mm2   */
    MMXREG,         /* mm3   */
    MMXREG,         /* mm4   */
    MMXREG,         /* mm5   */
    MMXREG,         /* mm6   */
    MMXREG,         /* mm7   */
    REG64NA,        /* r10   */
    REG8NA,         /* r10b  */
    REG32NA,        /* r10d  */
    REG16NA,        /* r10w  */
    REG64NA,        /* r11   */
    REG8NA,         /* r11b  */
    REG32NA,        /* r11d  */
    REG16NA,        /* r11w  */
    REG64NA,        /* r12   */
    REG8NA,         /* r12b  */
    REG32NA,        /* r12d  */
    REG16NA,        /* r12w  */
    REG64NA,        /* r13   */
    REG8NA,         /* r13b  */
    REG32NA,        /* r13d  */
    REG16NA,        /* r13w  */
    REG64NA,        /* r14   */
    REG8NA,         /* r14b  */
    REG32NA,        /* r14d  */
    REG16NA,        /* r14w  */
    REG64NA,        /* r15   */
    REG8NA,         /* r15b  */
    REG32NA,        /* r15d  */
    REG16NA,        /* r15w  */
    REG64NA,        /* r8    */
    REG8NA,         /* r8b   */
    REG32NA,        /* r8d   */
    REG16NA,        /* r8w   */
    REG64NA,        /* r9    */
    REG8NA,         /* r9b   */
    REG32NA,        /* r9d   */
    REG16NA,        /* r9w   */
    REG_RAX,        /* rax   */
    REG64NA,        /* rbp   */
    REG64NA,        /* rbx   */
    REG_RCX,        /* rcx   */
    REG64NA,        /* rdi   */
    REG_RDX,        /* rdx   */
    REG64NA,        /* rsi   */
    REG64NA,        /* rsp   */
    REG_SEG67,      /* segr6 */
    REG_SEG67,      /* segr7 */
    REG16NA,        /* si    */
    REG8NA,         /* sil   */
    REG16NA,        /* sp    */
    REG8NA,         /* spl   */
    REG_DESS,       /* ss    */
    FPU0,           /* st0   */
    FPUREG,         /* st1   */
    FPUREG,         /* st2   */
    FPUREG,         /* st3   */
    FPUREG,         /* st4   */
    FPUREG,         /* st5   */
    FPUREG,         /* st6   */
    FPUREG,         /* st7   */
    REG_TREG,       /* tr0   */
    REG_TREG,       /* tr1   */
    REG_TREG,       /* tr2   */
    REG_TREG,       /* tr3   */
    REG_TREG,       /* tr4   */
    REG_TREG,       /* tr5   */
    REG_TREG,       /* tr6   */
    REG_TREG,       /* tr7   */
    XMM0,           /* xmm0  */
    XMMREG,         /* xmm1  */
    XMMREG,         /* xmm10 */
    XMMREG,         /* xmm11 */
    XMMREG,         /* xmm12 */
    XMMREG,         /* xmm13 */
    XMMREG,         /* xmm14 */
    XMMREG,         /* xmm15 */
    XMMREG,         /* xmm2  */
    XMMREG,         /* xmm3  */
    XMMREG,         /* xmm4  */
    XMMREG,         /* xmm5  */
    XMMREG,         /* xmm6  */
    XMMREG,         /* xmm7  */
    XMMREG,         /* xmm8  */
    XMMREG,         /* xmm9  */
    YMM0,           /* ymm0  */
    YMMREG,         /* ymm1  */
    YMMREG,         /* ymm10 */
    YMMREG,         /* ymm11 */
    YMMREG,         /* ymm12 */
    YMMREG,         /* ymm13 */
    YMMREG,         /* ymm14 */
    YMMREG,         /* ymm15 */
    YMMREG,         /* ymm2  */
    YMMREG,         /* ymm3  */
    YMMREG,         /* ymm4  */
    YMMREG,         /* ymm5  */
    YMMREG,         /* ymm6  */
    YMMREG,         /* ymm7  */
    YMMREG,         /* ymm8  */
    YMMREG,         /* ymm9  */
};
