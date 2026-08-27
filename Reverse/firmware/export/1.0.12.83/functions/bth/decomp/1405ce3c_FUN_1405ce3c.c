/* FUN_1405ce3c @ 0x1405ce3c */

void FUN_1405ce3c(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
  iVar2 = *DAT_1405ce80;
  iVar1 = FUN_1405b26c();
  if (iVar1 == 0) {
    *(undefined4 *)(local_10 + 0x18) = 0;
    *(undefined4 *)(local_10 + 0x1c) = 0x2a000000;
  }
  if (*DAT_1405ce80 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

