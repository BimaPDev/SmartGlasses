/* FUN_2c6392b0 @ 0x2c6392b0 */

void FUN_2c6392b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  short sStack_14;
  short sStack_12;
  undefined4 uStack_10;
  
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 100;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) & 0xfc;
  *(int *)(param_2 + 0x3c) = param_2;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  *(int *)(param_2 + 0x50) = param_2;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0xffffffff;
  uStack_10 = param_4;
  FUN_2c606abc(param_2,8);
  FUN_2c606abc(param_2,0x10);
  if (*(uint *)(param_2 + 0x24) != 0) {
    uVar1 = *(uint *)(param_2 + 0x2c) & (int)*(uint *)(param_2 + 0x2c) >> 0x1f;
    uVar3 = *(uint *)(param_2 + 0x28);
    if ((int)*(uint *)(param_2 + 0x28) < (int)*(uint *)(param_2 + 0x30)) {
      uVar3 = *(uint *)(param_2 + 0x30);
    }
    if ((int)uVar3 < (int)uVar1) {
      uVar3 = uVar1;
    }
    if (*(uint *)(param_2 + 0x24) != uVar3) {
      *(uint *)(param_2 + 0x24) = uVar3;
      iVar2 = *DAT_2c607e4c;
      sStack_14 = FUN_2c600c2c();
      sStack_12 = *(short *)(param_2 + 0x16) - sStack_14;
      uStack_10 = CONCAT22(*(short *)(param_2 + 0x1a) + sStack_14,
                           sStack_14 + *(short *)(param_2 + 0x18));
      sStack_14 = *(short *)(param_2 + 0x14) - sStack_14;
      FUN_2c6078f0(param_2,&sStack_14);
      if (*DAT_2c607e4c == iVar2) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
  return;
}

