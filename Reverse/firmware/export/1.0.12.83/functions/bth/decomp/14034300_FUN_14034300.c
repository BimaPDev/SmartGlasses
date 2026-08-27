/* FUN_14034300 @ 0x14034300 */

void FUN_14034300(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = FUN_140e5848();
  piVar1 = DAT_140343a0;
  iVar5 = *DAT_140343a0;
  if (iVar5 == 0) {
    FUN_1402e55c();
    iVar5 = *piVar1;
  }
  iVar6 = *DAT_140343a4;
  *piVar1 = iVar5 + 1;
  if (iVar6 != 0) {
    FUN_1402a6e8(4,0x8cd,DAT_140343b4,DAT_140343b0,DAT_140343b8);
    *(undefined4 *)(iVar6 + 0x1c) = 0x4e2;
    *(undefined4 *)(iVar6 + 0x20) = 0;
    *(undefined1 *)(iVar6 + 0x2c) = 1;
    *(undefined1 *)(iVar6 + 0x14) = 1;
    *(undefined1 *)(iVar6 + 0x24) = 0xc;
    uVar2 = DAT_140343bc;
    iVar5 = *piVar1 + -1;
    *(undefined2 *)(iVar6 + 0x26) = 0x271;
    *(undefined4 *)(iVar6 + 0x28) = uVar2;
  }
  *piVar1 = iVar5;
  if (iVar5 == 0) {
    FUN_1402e5f8();
  }
  iVar5 = FUN_140e5848();
  uVar4 = (iVar5 - iVar3) * 1000;
  if (uVar4 < 0x1f50) {
    return;
  }
  FUN_1402a6e8(4,0x8e0,DAT_140343b4,DAT_140343b0,DAT_140343ac,DAT_140343a8,uVar4 >> 4);
  return;
}

