/* FUN_1404ce50 @ 0x1404ce50 */

undefined4 FUN_1404ce50(int param_1)

{
  int iVar1;
  undefined1 local_18 [4];
  int local_14;
  
  local_14 = *DAT_1404ceb0;
  if (param_1 != 0) {
    if ((*(char *)(DAT_1404ceb4 + 6) != '\0') &&
       (iVar1 = FUN_140db784(DAT_1404ceb4,param_1,6), iVar1 == 0)) {
      FUN_14095008(param_1);
    }
  }
  FUN_140a16e0();
  FUN_140a0f2c();
  local_18[0] = 0;
  FUN_14095558(param_1,0x100d,local_18);
  if (*DAT_1404ceb0 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

