/* FUN_14074d80 @ 0x14074d80 */

void FUN_14074d80(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = thunk_FUN_140e5848();
  piVar2 = DAT_14074dbc;
  puVar1 = DAT_14074db8;
  uVar5 = *DAT_14074db8;
  if (uVar5 <= uVar3) {
    iVar4 = *DAT_14074dbc;
    *DAT_14074db8 = uVar3;
    *piVar2 = iVar4 + (uVar3 - uVar5 >> 4);
    return;
  }
  iVar4 = thunk_FUN_140291ac();
  *DAT_14074dbc = *DAT_14074dbc + ((uVar3 - *puVar1) + iVar4 >> 4);
  *puVar1 = uVar3;
  return;
}

