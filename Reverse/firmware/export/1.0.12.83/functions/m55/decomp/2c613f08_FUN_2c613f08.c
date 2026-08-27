/* FUN_2c613f08 @ 0x2c613f08 */

undefined4 FUN_2c613f08(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar1 = DAT_2c613f40 + 4;
  iVar5 = DAT_2c613f40 + 0x80;
  iVar2 = DAT_2c613f40;
  do {
    while (*(int *)(iVar2 + 4) == param_1) {
      uVar4 = *(undefined4 *)(iVar1 + -4);
      iVar3 = iVar2 + 8;
      *(undefined4 *)(iVar1 + -4) = 0;
      iVar1 = iVar1 + 8;
      *(undefined4 *)(iVar2 + 4) = 0;
      iVar2 = iVar3;
      if (iVar3 == iVar5) {
        return uVar4;
      }
    }
    iVar2 = iVar2 + 8;
    iVar1 = iVar1 + 8;
  } while (iVar2 != iVar5);
  return uVar4;
}

