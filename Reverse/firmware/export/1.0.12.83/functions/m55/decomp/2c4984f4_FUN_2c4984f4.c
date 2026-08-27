/* FUN_2c4984f4 @ 0x2c4984f4 */

void FUN_2c4984f4(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_2c49852c;
  if (*DAT_2c49852c == 0) {
    if (*(char *)(DAT_2c498530 + 0x43) != '\x01') {
      return;
    }
    iVar2 = FUN_2c64418c(DAT_2c498534,1,0);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_2c6448f0();
  FUN_2c6448b4(*piVar1,11000);
  return;
}

