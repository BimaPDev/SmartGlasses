/* FUN_140a001c @ 0x140a001c */

void FUN_140a001c(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = DAT_140a0048;
  if (*DAT_140a0048 != 0) {
    uVar2 = FUN_140a047c();
    *(undefined4 *)(*piVar1 + 0x130) = param_1;
    FUN_140a0ebc();
    FUN_140a04dc(uVar2);
    return;
  }
  return;
}

