/* FUN_1409dc50 @ 0x1409dc50 */

void FUN_1409dc50(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_1402a6e8(4,0x30f,DAT_1409dcac,DAT_1409dca8,DAT_1409dca4,DAT_1409dca0);
  puVar1 = DAT_1409dcb0;
  iVar4 = DAT_1409dcb0[2];
  *DAT_1409dcb0 = 0xff00ff00;
  *(undefined2 *)(puVar1 + 1) = 0xff00;
  piVar2 = DAT_1409dcb4;
  if (iVar4 != 0) {
    return;
  }
  if (*DAT_1409dcb4 == 0) {
    iVar4 = FUN_140e5668(DAT_1409dcbc);
    *piVar2 = iVar4;
  }
  uVar3 = FUN_140b4ca8(DAT_1409dcb8,0);
  puVar1[2] = uVar3;
  return;
}

