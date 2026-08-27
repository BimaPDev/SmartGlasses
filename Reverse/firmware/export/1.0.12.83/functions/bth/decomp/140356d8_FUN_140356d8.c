/* FUN_140356d8 @ 0x140356d8 */

void FUN_140356d8(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar3 = FUN_140e5848();
  piVar1 = DAT_14035760;
  iVar5 = *DAT_14035760;
  if (iVar5 == 0) {
    FUN_1402e55c();
    iVar5 = *piVar1;
    puVar6 = (undefined4 *)*DAT_14035764;
    if (puVar6 != (undefined4 *)0x0) goto LAB_14035714;
  }
  else {
    puVar6 = (undefined4 *)*DAT_14035764;
    if (puVar6 == (undefined4 *)0x0) goto LAB_140356ee;
LAB_14035714:
    puVar2 = DAT_14035768;
    *puVar6 = *DAT_14035768;
    puVar6[4] = puVar2[4];
    *(undefined2 *)(puVar6 + 7) = *(undefined2 *)(puVar2 + 7);
    puVar6[1] = puVar2[1];
    puVar6[2] = puVar2[2];
    puVar6[3] = puVar2[3];
    puVar6[5] = puVar2[5];
    puVar6[6] = puVar2[6];
  }
  if (iVar5 == 0) {
    FUN_1402e5f8();
  }
LAB_140356ee:
  iVar5 = FUN_140e5848();
  uVar4 = (iVar5 - iVar3) * 1000;
  if (uVar4 < 0x1f50) {
    return;
  }
  FUN_1402a6e8(4,0x104b,DAT_14035778,DAT_14035774,DAT_14035770,DAT_1403576c,uVar4 >> 4);
  return;
}

