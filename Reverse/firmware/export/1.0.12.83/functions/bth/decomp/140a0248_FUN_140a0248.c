/* FUN_140a0248 @ 0x140a0248 */

void FUN_140a0248(undefined1 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = DAT_140a0290;
  if (*DAT_140a0290 != 0) {
    uVar2 = FUN_140a047c();
    iVar3 = *piVar1;
    *(undefined1 *)(iVar3 + 0x15d) = param_1;
    *(undefined2 *)(iVar3 + 0x160) = param_2;
    *(undefined2 *)(iVar3 + 0x162) = param_3;
    *(undefined2 *)(iVar3 + 0x164) = param_4;
    FUN_140a0ebc();
    FUN_140a04dc(uVar2);
    return;
  }
  return;
}

