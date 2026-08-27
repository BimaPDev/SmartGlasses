/* FUN_2c124cfc @ 0x2c124cfc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c124b3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c124cfc(uint *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int unaff_r4;
  uint unaff_r5;
  uint uVar2;
  int unaff_r6;
  uint uVar3;
  int unaff_r7;
  undefined4 unaff_r9;
  undefined4 in_cr5;
  undefined4 in_cr10;
  
  *param_1 = unaff_r5;
  *param_3 = param_1;
  param_3[1] = param_3;
  param_3[2] = unaff_r5;
  uRam00000025 = (short)unaff_r4;
  *(undefined2 *)(unaff_r4 + 4) = 0;
  *(int *)(unaff_r4 + 0x28) = param_4;
  *(char *)(param_4 + unaff_r6) = (char)unaff_r6;
  coprocessor_load(5,in_cr5,&stack0x0000029c);
  if (0 < param_2 << 0xd) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 << 0x1a < 1) {
    uVar3 = (uint)*(ushort *)(unaff_r7 + -0x121);
    if (0 < param_4 << 0xd) goto LAB_2c12551c;
    *(ushort *)(unaff_r7 + -0x121) = *(ushort *)(unaff_r7 + -0x121);
    uVar2 = _DAT_2c125830;
    if ((unaff_r4 << 0xd < 1) &&
       (uVar3 = *(uint *)(unaff_r7 + 0x20), uVar2 = unaff_r5, (int)(unaff_r5 << 0xd) < 1)) {
      *(uint *)(unaff_r7 + 0x20) = uVar3;
      iVar1 = uVar3 << 0xd;
      if (iVar1 < 1) {
        uVar3 = (uint)*(byte *)(unaff_r7 + 8);
        iVar1 = unaff_r7 << 0xd;
        if (iVar1 < 1) {
          *(byte *)(unaff_r7 + 8) = *(byte *)(unaff_r7 + 8);
          uRam0000000e = 0x60;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      goto LAB_2c125534;
    }
  }
  else {
    uVar3 = 0x2c12555c;
LAB_2c12551c:
    uVar2 = _DAT_2c125830;
    if (0xffffff0f < unaff_r5) {
      *(short *)(unaff_r7 + 0x10) = (short)unaff_r4;
      *(int *)(param_2 + unaff_r7) = param_2;
      *(char *)(unaff_r7 + -0x121) = (char)uVar3;
      (*(code *)0xfffffedf)(0xfffffedf,param_2,0x4e);
      return;
    }
  }
  iVar1 = unaff_r4 << 8;
  unaff_r7 = uVar2 + 4;
LAB_2c125534:
  *(int *)(uVar3 + 0x20) = iVar1;
  *(char *)(unaff_r7 + 4) = (char)uVar3;
  coprocessor_loadlong(1,in_cr10,unaff_r9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

