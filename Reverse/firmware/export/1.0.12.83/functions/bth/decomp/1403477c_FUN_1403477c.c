/* FUN_1403477c @ 0x1403477c */

undefined2 FUN_1403477c(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  uVar2 = FUN_14032d34();
  piVar1 = DAT_140347fc;
  iVar4 = *DAT_140347fc;
  if (iVar4 == 0) {
    FUN_1402e55c();
    iVar4 = *piVar1;
  }
  iVar3 = *DAT_14034800;
  *piVar1 = iVar4 + 1;
  if ((iVar3 == 0) || (iVar4 = *(int *)((short)uVar2 * 4 + iVar3), iVar4 == 0)) {
    FUN_1402a6e8(4,0xa0a,DAT_1403480c,DAT_14034808,DAT_14034804,uVar2);
    uVar5 = 0;
    iVar4 = *piVar1 + -1;
    *piVar1 = iVar4;
  }
  else {
    uVar5 = *(undefined2 *)(iVar4 + 0xb6);
    FUN_1402a6e8(4,0xa06,DAT_1403480c,DAT_14034808,DAT_14034814,DAT_14034810,uVar5);
    iVar4 = *piVar1 + -1;
    *piVar1 = iVar4;
  }
  if (iVar4 != 0) {
    return uVar5;
  }
  FUN_1402e5f8();
  return uVar5;
}

