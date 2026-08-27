/* FUN_1406d5c0 @ 0x1406d5c0 */

void FUN_1406d5c0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406d618,0x75,DAT_1406d61c);
  }
  iVar1 = *(int *)(param_1 + 4);
  FUN_140739f0((int *)(param_1 + 4),param_2);
  if (iVar1 != 0) {
    return;
  }
  FUN_140739f0(DAT_1406d620,param_1);
  if (param_3 == 0) {
    FUN_14072a44(0,DAT_1406d624);
    return;
  }
  FUN_14072a44(1,DAT_1406d624);
  return;
}

