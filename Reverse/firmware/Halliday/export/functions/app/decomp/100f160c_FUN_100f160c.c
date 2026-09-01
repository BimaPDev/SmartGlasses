/* FUN_100f160c @ 0x100f160c */

undefined2 FUN_100f160c(void)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (*(int *)(DAT_100f1618 + 0x44) != 0) {
    uVar1 = *(undefined2 *)(*(int *)(*(int *)(DAT_100f1618 + 0x44) + 4) + 0xc);
  }
  return uVar1;
}

