/* FUN_2c0b6d30 @ 0x2c0b6d30 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0b6d62) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0b6d30(undefined4 param_1,uint param_2,int param_3,uint param_4)

{
  int *piVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar2;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_lr;
  undefined4 in_cr2;
  undefined4 in_cr6;
  
  while( true ) {
    *(uint *)((int)register0x00000054 + -4) = unaff_lr;
    *(uint *)((int)register0x00000054 + -8) = unaff_r7;
    *(uint *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(uint *)((int)register0x00000054 + -0x10) = unaff_r5;
    *(uint *)((int)register0x00000054 + -0x14) = unaff_r4;
    *(uint *)((int)register0x00000054 + -0x18) = param_2;
    *(char *)(unaff_r5 + 0x11) = (char)param_2 + '\'';
    uVar2 = unaff_r5 & unaff_r6;
    piVar1 = *(int **)((int)register0x00000054 + 0x38c);
    *piVar1 = param_3;
    piVar1[1] = unaff_r6 - 0x5e;
    unaff_r6 = unaff_r6 - 0x204;
    if (unaff_r7 == 0x18b) break;
    unaff_r5 = uVar2 - 0xe1;
    param_4 = coprocessor_movefromRt(0xe,3,2,in_cr2,in_cr6);
    param_2 = unaff_r5 * 2;
    unaff_r7 = unaff_r7 + 0x2c0b6ba0;
    unaff_r4 = _DAT_2c0b6dec;
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
  }
  *(uint *)(param_3 + 0x60) = param_4 & param_2;
  uRam2c0b6f12 = 0x6ed8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

