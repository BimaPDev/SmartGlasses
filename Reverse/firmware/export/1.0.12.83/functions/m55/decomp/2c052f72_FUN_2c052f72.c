/* FUN_2c052f72 @ 0x2c052f72 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c052f84) overlaps instruction at (ram,0x2c052f82)
    */

void FUN_2c052f72(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  undefined1 unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r11;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  uRamfffffcb0 = param_3 >> 0xd;
  if ((param_3 >> 0xc & 1) == 0 || uRamfffffcb0 == 0) {
    *(char *)(unaff_r6 + param_1) = (char)param_3;
    *(char *)(unaff_r6 + param_1) = (char)param_3 + '\x03';
    *(undefined1 *)(unaff_r7 + 0x10) = unaff_r5;
    coprocessor_load(4,in_cr12,param_3 - 0xfb);
    unaff_r4 = (uint)*(char *)(param_3 + 5 + (unaff_r4 >> 0x14));
    uRamfffffcb0 = unaff_r4 >> 0x1c;
    param_1 = 0xf0;
  }
  coprocessor_load(0xb,in_cr11,unaff_r11 + -0x138);
  coprocessor_store(0,in_cr2,unaff_r7 * 0x10000 + -0x3c0);
  *(char *)(unaff_r7 * 0x10000 + -0x3a5) = (char)param_1;
  uVar1 = (uint)*(ushort *)(param_1 * 0x1000000 + 0x38);
  do {
    uVar3 = uVar1;
    iVar2 = *(int *)(uVar3 + 0x6c);
    uVar1 = uVar3 + 6;
  } while (0xfffffff9 < uVar3);
  uRamfffffcb4 = unaff_r4;
  *(uint *)(iVar2 + 0x60) = uRamfffffcb0 << 8;
  *(short *)(uVar3 + 0x14) = (short)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

