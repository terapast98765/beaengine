/* Copyright 2006-2009, BeatriX
 * File coded by BeatriX
 *
 * This file is part of BeaEngine.
 *
 *    BeaEngine is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    BeaEngine is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public License
 *    along with BeaEngine.  If not, see <http://www.gnu.org/licenses/>. */

/* ====================================================================
 *
 * ==================================================================== */
void __bea_callspec__ G12_(PDISASM pMyDisasm)
{
    long MyNumber;

    REGOPCODE = ((*((UInt8*)(UIntPtr) (EIP_+1))) >> 3) & 0x7;
    if (REGOPCODE == 2) {
        if (OperandSize == 16) {
            (*pMyDisasm).Instruction.Category = SSE_INSTRUCTION+SHIFT_ROTATE;
            OpSize = 8;
            SSE_ = 1;
            MOD_RM(&(*pMyDisasm).Argument1);
            SSE_ = 0;
            if (MOD_ == 0x3) {
                (void) strcpy ((*pMyDisasm).Instruction.Mnemonic, "psrlw ");
            }
            else {
                FailDecode(pMyDisasm);
            }
            EIP_ += DECALAGE_EIP+3;
            if (!Security(0)) return;
            ImmediatSize = 8;
            MyNumber = *((UInt8*)(UIntPtr) (EIP_-1));
            (void) CopyFormattedNumber((char*) &(*pMyDisasm).Argument2.ArgMnemonic,"%.2X",(Int64) MyNumber);
            (*pMyDisasm).Instruction.Immediat = MyNumber;
            (*pMyDisasm).Argument2.ArgType = CONSTANT_TYPE+ABSOLUTE_;
            (*pMyDisasm).Argument2.ArgSize = 8;
        }
        else {
            (*pMyDisasm).Instruction.Category = MMX_INSTRUCTION+SHIFT_ROTATE;
            OpSize = 4;
            MMX_ = 1;
            MOD_RM(&(*pMyDisasm).Argument1);
            MMX_ = 0;
            if (MOD_ == 0x3) {
                (void) strcpy ((*pMyDisasm).Instruction.Mnemonic, "psrlw ");
            }
            else {
                FailDecode(pMyDisasm);
            }
            EIP_ += DECALAGE_EIP+3;
            if (!Security(0)) return;
            ImmediatSize = 8;
            MyNumber = *((UInt8*)(UIntPtr) (EIP_-1));
            (void) CopyFormattedNumber((char*) &(*pMyDisasm).Argument2.ArgMnemonic,"%.2X",(Int64) MyNumber);
            (*pMyDisasm).Instruction.Immediat = MyNumber;
            (*pMyDisasm).Argument2.ArgType = CONSTANT_TYPE+ABSOLUTE_;
            (*pMyDisasm).Argument2.ArgSize = 8;
        }
    }
    else if (REGOPCODE == 4) {
        if (OperandSize == 16) {
            (*pMyDisasm).Instruction.Category = SSE_INSTRUCTION+SHIFT_ROTATE;
            OpSize = 8;
            SSE_ = 1;
            MOD_RM(&(*pMyDisasm).Argument1);
            SSE_ = 0;
            if (MOD_ == 0x3) {
                (void) strcpy ((*pMyDisasm).Instruction.Mnemonic, "psraw ");
            }
            else {
                FailDecode(pMyDisasm);
            }
            EIP_ += DECALAGE_EIP+3;
            if (!Security(0)) return;
            ImmediatSize = 8;
            MyNumber = *((UInt8*)(UIntPtr) (EIP_-1));
            (void) CopyFormattedNumber((char*) &(*pMyDisasm).Argument2.ArgMnemonic,"%.2X",(Int64) MyNumber);
            (*pMyDisasm).Instruction.Immediat = MyNumber;
            (*pMyDisasm).Argument2.ArgType = CONSTANT_TYPE+ABSOLUTE_;
            (*pMyDisasm).Argument2.ArgSize = 8;
        }
        else {
            (*pMyDisasm).Instruction.Category = MMX_INSTRUCTION+SHIFT_ROTATE;
            OpSize = 4;
            MMX_ = 1;
            MOD_RM(&(*pMyDisasm).Argument1);
            MMX_ = 0;
            if (MOD_ == 0x3) {
                (void) strcpy ((*pMyDisasm).Instruction.Mnemonic, "psraw ");
            }
            else {
                FailDecode(pMyDisasm);
            }
            EIP_ += DECALAGE_EIP+3;
            if (!Security(0)) return;
            ImmediatSize = 8;
            MyNumber = *((UInt8*)(UIntPtr) (EIP_-1));
            (void) CopyFormattedNumber((char*) &(*pMyDisasm).Argument2.ArgMnemonic,"%.2X",(Int64) MyNumber);
            (*pMyDisasm).Instruction.Immediat = MyNumber;
            (*pMyDisasm).Argument2.ArgType = CONSTANT_TYPE+ABSOLUTE_;
            (*pMyDisasm).Argument2.ArgSize = 8;
        }

    }
    else if (REGOPCODE == 6) {
        if (OperandSize == 16) {
            (*pMyDisasm).Instruction.Category = SSE_INSTRUCTION+SHIFT_ROTATE;
            OpSize = 8;
            SSE_ = 1;
            MOD_RM(&(*pMyDisasm).Argument1);
            SSE_ = 0;
            if (MOD_ == 0x3) {
                (void) strcpy ((*pMyDisasm).Instruction.Mnemonic, "psllw ");
            }
            else {
                FailDecode(pMyDisasm);
            }
            EIP_ += DECALAGE_EIP+3;
            if (!Security(0)) return;
            ImmediatSize = 8;
            MyNumber = *((UInt8*)(UIntPtr) (EIP_-1));
            (void) CopyFormattedNumber((char*) &(*pMyDisasm).Argument2.ArgMnemonic,"%.2X",(Int64) MyNumber);
            (*pMyDisasm).Instruction.Immediat = MyNumber;
            (*pMyDisasm).Argument2.ArgType = CONSTANT_TYPE+ABSOLUTE_;
            (*pMyDisasm).Argument2.ArgSize = 8;
        }
        else {
            (*pMyDisasm).Instruction.Category = MMX_INSTRUCTION+SHIFT_ROTATE;
            OpSize = 4;
            MMX_ = 1;
            MOD_RM(&(*pMyDisasm).Argument1);
            MMX_ = 0;
            if (MOD_ == 0x3) {
                (void) strcpy ((*pMyDisasm).Instruction.Mnemonic, "psllw ");
            }
            else {
                FailDecode(pMyDisasm);
            }
            EIP_ += DECALAGE_EIP+3;
            if (!Security(0)) return;
            ImmediatSize = 8;
            MyNumber = *((UInt8*)(UIntPtr) (EIP_-1));
            (void) CopyFormattedNumber((char*) &(*pMyDisasm).Argument2.ArgMnemonic,"%.2X",(Int64) MyNumber);
            (*pMyDisasm).Instruction.Immediat = MyNumber;
            (*pMyDisasm).Argument2.ArgType = CONSTANT_TYPE+ABSOLUTE_;
            (*pMyDisasm).Argument2.ArgSize = 8;
        }
    }

    else {
        FailDecode(pMyDisasm);
    }

}