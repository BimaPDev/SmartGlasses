/* FUN_2c6037b0 @ 0x2c6037b0 */

void FUN_2c6037b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(ushort *)(param_2 + 0x22) & 0x1f8) != 0) {
    if (param_1 == 0) {
LAB_2c6037d8:
      if (*DAT_2c603810 != '\0') {
        FUN_2c603540(param_2,0xf0000,0xffff,*DAT_2c603810,param_4);
      }
    }
    else {
      uVar3 = 0;
      do {
        iVar2 = uVar3 * 8;
        uVar3 = uVar3 + 1;
        if (*(int *)(*(int *)(param_2 + 0xc) + iVar2) == param_1) goto LAB_2c6037d8;
      } while (uVar3 != (*(ushort *)(param_2 + 0x22) & 0x1ff) >> 3);
    }
  }
  iVar2 = FUN_2c6041fc(param_2);
  if (iVar2 != 0) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      FUN_2c6037b0(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar1));
    } while (iVar2 != iVar4);
  }
  return;
}

