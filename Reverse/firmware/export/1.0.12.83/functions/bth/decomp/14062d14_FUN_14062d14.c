/* FUN_14062d14 @ 0x14062d14 */

void FUN_14062d14(undefined4 param_1,undefined1 param_2,byte *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*param_3;
  if (uVar1 == 0) {
    if (*(short *)(param_3 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14062d58,0x13b,DAT_14062d5c,param_4);
    }
    FUN_14070aa4(*(undefined2 *)(param_3 + 2));
    uVar1 = (uint)*param_3;
    if (uVar1 == 0) {
      iVar2 = 0;
      goto LAB_14063928;
    }
  }
  iVar2 = uVar1 + 0x90;
LAB_14063928:
  FUN_1406d6c0(DAT_14063938,param_2,iVar2);
  return;
}

