/* FUN_2c10bbd6 @ 0x2c10bbd6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c10bbd6(uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  short extraout_r1;
  int *piVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_r9;
  undefined4 unaff_pc;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr8;
  undefined1 in_q7 [16];
  undefined1 in_q11 [16];
  undefined1 in_stack_00000380;
  
  cVar1 = *(char *)(param_1 * 2);
  uVar7 = (uint)cVar1;
  uVar6 = uVar7 >> 0x18;
  uVar2 = param_1 - uVar7;
  *(ushort *)((param_1 >> 0x18) + param_2) = (ushort)(byte)(param_1 >> 0x18);
  coprocessor_function2(3,0xd,2,in_cr1,in_cr8,in_cr2);
  uVar5 = (undefined1)((uint)param_2 >> 0x18);
  iVar4 = *(int *)((param_1 >> 0x18) + uVar2 + uVar6);
  *(undefined4 *)(iVar4 + -0x184) = unaff_pc;
  *(undefined4 *)(iVar4 + -0x180) = unaff_r9;
  *(int *)(uVar7 + 0x54) = iVar4;
  VectorShiftRightAccumulate(in_q11,in_q7,0x1c);
  if ((uVar2 & 0x8000) == 0 || (uVar2 & 0x7fff) == 0) {
    *(short *)(uVar2 * 0x40000) = (short)cVar1;
    if (uVar2 * 0x10000 == 0 || (int)(uVar2 * 0x10000) < 0 != SBORROW4(param_2,0xd8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar7 = (int)uVar6 >> 5;
    *(short *)(uVar6 + 8) = (short)uVar2;
    uVar5 = in_stack_00000380;
  }
  *(uint *)(uVar6 + 0x24) = uVar6 << 5;
  *(undefined1 *)(((int)uVar7 >> 0xc) + 0x1c) = uVar5;
  *(char *)(uVar2 + uVar6 + 0x1d) = (char)(uVar6 << 5);
  func_0x2c0cb94e((int)uVar7 >> 0xc,0x71);
  piVar3 = (int *)(int)extraout_r1;
  *piVar3 = (int)&stack0x00000240;
  piVar3[1] = (int)piVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

