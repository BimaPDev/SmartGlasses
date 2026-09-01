/* FUN_10084408 @ 0x10084408 */

undefined4 FUN_10084408(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = DAT_10084440;
  uVar3 = param_1 - 1;
  if (0xf < uVar3) {
    return 2;
  }
  iVar4 = DAT_10084440 + uVar3 * 0x10;
  sVar1 = *(short *)(iVar4 + 0xc);
  if (sVar1 == 0x100) {
    *(undefined2 *)(iVar4 + 0xc) = 0;
  }
  else if ((sVar1 != 0) && (*(short *)(iVar4 + 0xc) = sVar1 + -1, sVar1 != 1)) {
    return 0;
  }
  *(undefined4 *)(iVar2 + uVar3 * 0x10) = 0;
  return 0;
}

