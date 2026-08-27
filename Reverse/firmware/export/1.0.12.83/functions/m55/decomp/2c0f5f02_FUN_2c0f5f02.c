/* FUN_2c0f5f02 @ 0x2c0f5f02 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0f5f02(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_lr;
  undefined8 in_d7;
  undefined8 in_d21;
  
  do {
    iVar1 = _DAT_2c0f5f0c;
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r5;
    *(int *)((int)register0x00000054 + -0xc) = param_3;
    *(int *)((int)register0x00000054 + -0x10) = param_1;
    unaff_r5 = 0xff;
    VectorAbsoluteDifference(in_d7,in_d21,1,1);
    register0x00000054 = (BADSPACEBASE *)(param_1 + 0x842);
    uVar2 = param_1 + 6;
    *(int *)(unaff_r4 + 1) = _DAT_2c0f5f0c << 3;
    *(undefined4 *)(unaff_r4 + 5) = 0xff;
    *(int *)(unaff_r4 + 9) = iVar1;
    *(undefined4 *)(unaff_r4 + 0xd) = unaff_r7;
    param_3 = unaff_r4 + 0x11;
    param_1 = 0;
    unaff_r4 = uVar2 >> 0x11;
  } while( true );
}

