/* FUN_14049be0 @ 0x14049be0 */

void FUN_14049be0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_14049c24;
  if ((*(int *)(DAT_14049c24 + 0x158) != 0) &&
     (iVar2 = DAT_14049c24 + 0x158, *(int *)(DAT_14049c24 + 0x158) != iVar2)) {
    FUN_1402a6e8(4,0xe1b,DAT_14049c30,DAT_14049c2c,DAT_14049c28);
    iVar1 = *(int *)(iVar1 + 0x158);
    if ((iVar1 != 0) && (iVar1 != iVar2)) {
      FUN_14048958(iVar1,0,DAT_14049c34);
      return;
    }
  }
  return;
}

