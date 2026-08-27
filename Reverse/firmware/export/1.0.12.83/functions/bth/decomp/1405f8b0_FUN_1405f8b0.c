/* FUN_1405f8b0 @ 0x1405f8b0 */

void FUN_1405f8b0(int param_1,undefined2 *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_1406393c(0);
  if (iVar2 != 0) {
    uVar1 = *(undefined1 *)(param_2 + 1);
    *(undefined2 *)(iVar2 + 0x11) = *param_2;
    *(undefined1 *)(iVar2 + 0x13) = uVar1;
    if (param_1 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 + 0x90;
    }
    FUN_1406d6c0(DAT_14063938,param_3,param_1);
    return;
  }
  return;
}

