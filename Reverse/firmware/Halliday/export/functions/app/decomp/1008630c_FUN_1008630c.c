/* FUN_1008630c @ 0x1008630c */

undefined1 FUN_1008630c(uint param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_1 < 5) {
    uVar2 = FUN_1008686c(*(undefined4 *)(DAT_10086330 + param_1 * 4));
    if (uVar2 < 0x17) {
      uVar1 = *(undefined1 *)(DAT_10086334 + uVar2);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

