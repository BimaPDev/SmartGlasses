/* FUN_140ccb20 @ 0x140ccb20 */

undefined4 FUN_140ccb20(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_140c03c0(DAT_140ccb50);
  if (uVar1 < *(uint *)(*param_1 + 8)) {
    iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
    uVar3 = 0;
    if ((iVar2 != 0) &&
       (iVar2 = FUN_140d7e50(iVar2,DAT_140ccb58,DAT_140ccb54,0), uVar3 = 0, iVar2 != 0)) {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

