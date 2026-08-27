/* FUN_2c0a878c @ 0x2c0a878c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0a826e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0a878c(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  int unaff_r5;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int unaff_r7;
  int unaff_r9;
  int unaff_r11;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr7;
  
  *(short *)(param_1 + 0x30) = (short)param_1;
  *(short *)(unaff_r5 + 6) = (short)unaff_r5;
  *(undefined4 *)(unaff_r7 + 0x24) = 0x50;
  coprocessor_loadlong(6,in_cr2,unaff_r11 + -0x2f8);
  iVar1 = *(int *)(unaff_r7 - (unaff_r7 >> 0x1f));
  coprocessor_load(1,in_cr1,unaff_r9 + -0xe4);
  uVar2 = iVar1 >> 0x18;
  if (iVar1 != 0) {
    coprocessor_load(1,in_cr2,unaff_r9 + -0x3f8);
    piVar3 = (int *)((int)uVar2 >> (uVar2 & 0xff));
    uVar4 = piVar3[6];
    *(undefined2 *)(*piVar3 + 0x24) = 0xd;
    uVar2 = *(uint *)((uVar4 >> 0x1b) + 8);
    iVar1 = (int)uVar2 >> (uVar2 & 0xff);
    *(short *)(uVar4 + 6) = (short)iVar1;
    *(undefined1 *)(0x1b - (iVar1 >> 0x1f)) = 0x94;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _Reserved1 = 0xbb;
  coprocessor_function(0,0xe,5,in_cr0,in_cr0,in_cr7);
  func_0x2c629068(0,(uRam2c0a82b4 >> 0xe) << 5,0);
  *(undefined4 *)(0x50 - ((int)&stack0x00000340 * 4 >> 0x1f)) = extraout_r1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

