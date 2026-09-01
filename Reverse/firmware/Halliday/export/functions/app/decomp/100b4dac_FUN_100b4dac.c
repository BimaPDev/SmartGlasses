/* FUN_100b4dac @ 0x100b4dac */

int FUN_100b4dac(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_100a5b78(DAT_100b4e4c | (DAT_100b4e48 - DAT_100b4e44) * 0x20 & 0xff00U,DAT_100b4e54,
                 DAT_100b4e50);
    iVar2 = -5;
  }
  else {
    *(int *)(param_1 + 0xc) = param_4;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x14) = param_2;
    param_1[0x20] = 0xff;
    if (param_4 != 0) {
      uVar1 = FUN_1013110e(*(int *)(param_1 + 8) + 5,1,4,param_2,param_1,param_2);
      uVar1 = FUN_1013110e(uVar1,2,4,param_3);
      iVar2 = FUN_1013110e(uVar1,3,1,0);
      iVar2 = FUN_100b4a9c(param_1,3,*(int *)(param_1 + 8),iVar2 - *(int *)(param_1 + 8));
      if (iVar2 != 0) {
        FUN_100a5b78(DAT_100b4e58 | (DAT_100b4e48 - DAT_100b4e44) * 0x20 & 0xff00U,DAT_100b4e54,
                     DAT_100b4e5c,3,iVar2);
        return iVar2;
      }
    }
    iVar2 = 0;
    *param_1 = 0;
  }
  return iVar2;
}

