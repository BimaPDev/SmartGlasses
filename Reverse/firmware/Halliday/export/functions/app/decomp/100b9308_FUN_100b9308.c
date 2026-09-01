/* FUN_100b9308 @ 0x100b9308 */

undefined1 FUN_100b9308(uint param_1)

{
  undefined1 uVar1;
  
  if ((uint)DAT_100b931c[3] < param_1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*DAT_100b931c + (DAT_100b931c[3] - param_1));
  }
  return uVar1;
}

