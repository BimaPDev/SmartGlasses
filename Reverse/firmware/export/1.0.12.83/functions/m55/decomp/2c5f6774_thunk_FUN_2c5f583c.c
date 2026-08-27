/* thunk_FUN_2c5f583c @ 0x2c5f6774 */

void thunk_FUN_2c5f583c(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5f5928,0x1cd,DAT_2c5f5930,DAT_2c5f592c,DAT_2c5f5924);
  }
  uVar4 = (uint)*(byte *)(param_2 + 0x34);
  uVar2 = param_3 - 0xeU & 0xff;
  uVar3 = ~(0x3d9U >> uVar2) & 1;
  if (9 < uVar2) {
    uVar3 = 1;
  }
  uVar3 = uVar3 ^ 1;
  if (uVar4 == 0xb) {
    if (param_3 == 0xc) goto LAB_2c5f58d6;
  }
  else if (uVar4 == 0xc) {
    if (param_3 == 0xd) goto LAB_2c5f58d6;
  }
  else {
    if (uVar4 != 0xd) {
      if ((uVar4 - 1 < 2) || (uVar4 == 4)) goto LAB_2c5f58d6;
      if (uVar4 == 3 && param_3 == 4) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    if (uVar3 != 0) {
LAB_2c5f58d6:
      iVar1 = FUN_2c5f5250(*param_1,param_3,param_1[4],param_4);
      *(int *)(iVar1 + 0xc) = param_2;
      if (*(int *)(param_2 + 0x14) == 0) {
        *(int *)(param_2 + 0x10) = iVar1;
        *(undefined4 *)(iVar1 + 8) = 0;
        *(int *)(param_2 + 0x14) = iVar1;
        return;
      }
      *(int *)(*(int *)(param_2 + 0x14) + 4) = iVar1;
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 0x14);
      *(int *)(param_2 + 0x14) = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5f5928,0x1d2,DAT_2c5f5930,DAT_2c5f5934);
}

