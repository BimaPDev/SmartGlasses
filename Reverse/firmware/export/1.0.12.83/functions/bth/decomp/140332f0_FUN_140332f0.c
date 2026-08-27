/* FUN_140332f0 @ 0x140332f0 */

void FUN_140332f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_140e5848();
  piVar1 = DAT_14033364;
  if (*DAT_14033364 == 0) {
    FUN_1402e55c();
    puVar5 = (undefined4 *)*DAT_14033368;
    iVar3 = *piVar1;
    *puVar5 = *param_1;
    *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(param_1 + 1);
    if (iVar3 == 0) {
      FUN_1402e5f8();
    }
  }
  else {
    puVar5 = (undefined4 *)*DAT_14033368;
    *puVar5 = *param_1;
    *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(param_1 + 1);
  }
  iVar3 = FUN_140e5848();
  uVar4 = (iVar3 - iVar2) * 1000;
  if (uVar4 < 0x1f50) {
    return;
  }
  FUN_1402a6e8(4,0x100f,DAT_14033378,DAT_14033374,DAT_14033370,DAT_1403336c,uVar4 >> 4);
  return;
}

