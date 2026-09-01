/* FUN_1005f510 @ 0x1005f510 */

int FUN_1005f510(ushort param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_1005f55c;
  iVar4 = 0;
  if (*(int *)(DAT_1005f55c + 0x28) != 0) {
    if (*(int *)(DAT_1005f55c + 0x5c) == 0) {
      iVar4 = 1;
    }
    else {
      if (*(int *)(DAT_1005f55c + 0x90) != 0) {
        return -0x69;
      }
      iVar4 = 2;
    }
  }
  uVar3 = DAT_1005f564;
  if ((param_1 & 2) == 0) {
    uVar3 = DAT_1005f560;
  }
  iVar5 = iVar4 * 0x34;
  iVar2 = DAT_1005f55c + iVar5;
  *(ushort *)(DAT_1005f55c + iVar5) = param_1;
  *(undefined4 *)(iVar2 + 0x28) = uVar3;
  FUN_1013ca1a(iVar5 + 0xc + iVar1,0,1);
  *(undefined1 *)(iVar1 + iVar5 + 0x24) = 0;
  return iVar4;
}

