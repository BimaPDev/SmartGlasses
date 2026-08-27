/* FUN_14034238 @ 0x14034238 */

void FUN_14034238(uint param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_140e5848();
  piVar1 = DAT_140342e0;
  iVar4 = *DAT_140342e0;
  if (iVar4 == 0) {
    FUN_1402e55c();
    iVar4 = *piVar1;
  }
  *piVar1 = iVar4 + 1;
  iVar5 = *DAT_140342e4;
  if (iVar5 == 0) {
    FUN_1402a6e8(4,0x808,DAT_140342f4,DAT_140342f0,DAT_140342f8,param_1);
    iVar4 = *piVar1 + -1;
  }
  else if (*(byte *)(iVar5 + 0x19) == param_1) {
    FUN_1402a6e8(4,0x810,DAT_140342f4,DAT_140342f0,DAT_140342fc,param_1);
    iVar4 = *piVar1;
    *(byte *)(iVar5 + 0x19) = (byte)param_1 ^ 1;
    iVar4 = iVar4 + -1;
  }
  *piVar1 = iVar4;
  if (iVar4 == 0) {
    FUN_1402e5f8();
  }
  iVar4 = FUN_140e5848();
  uVar3 = (iVar4 - iVar2) * 1000;
  if (uVar3 < 0x1f50) {
    return;
  }
  FUN_1402a6e8(4,0x818,DAT_140342f4,DAT_140342f0,DAT_140342ec,DAT_140342e8,uVar3 >> 4);
  return;
}

