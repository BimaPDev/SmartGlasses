/* FUN_2c4e5df0 @ 0x2c4e5df0 */

int FUN_2c4e5df0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_2c4c32b8(0x60);
  FUN_2c6741e8(0x42,DAT_2c4e5e40,param_1,param_2);
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(int *)(iVar1 + 0xc) = param_3;
  if (0 < param_3) {
    iVar3 = 0;
    iVar2 = iVar1;
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      iVar2 = iVar2 + 0xc;
    } while (param_3 != iVar3);
  }
  FUN_2c4e5c18(iVar1,param_4);
  return iVar1;
}

