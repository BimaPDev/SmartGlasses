/* FUN_140a004c @ 0x140a004c */

void FUN_140a004c(undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = DAT_140a00a8;
  if (*DAT_140a00a8 != 0) {
    uVar2 = FUN_140a047c();
    iVar3 = *piVar1;
    *(undefined1 *)(iVar3 + 0x13c) = param_3;
    *(undefined4 *)(iVar3 + 0x140) = param_1;
    *(undefined2 *)(iVar3 + 0x144) = param_2;
    *(undefined1 *)(iVar3 + 0x148) = param_4;
    *(undefined1 *)(iVar3 + 0x149) = param_5;
    *(undefined1 *)(iVar3 + 0x14a) = param_6;
    *(undefined1 *)(iVar3 + 0x14b) = 0;
    *(undefined2 *)(iVar3 + 0x14c) = 0;
    FUN_140a0ebc();
    FUN_140a04dc(uVar2);
    return;
  }
  return;
}

