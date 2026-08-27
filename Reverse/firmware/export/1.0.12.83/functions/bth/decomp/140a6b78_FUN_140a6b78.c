/* FUN_140a6b78 @ 0x140a6b78 */

void FUN_140a6b78(void)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_140a6bd8;
  local_14 = 0xe1000;
  uStack_10 = 0;
  local_1c = 0x30000;
  local_18 = 0x201;
  iVar1 = FUN_14029f8c();
  if (iVar1 == 1) {
    FUN_14029f4c();
  }
  FUN_1402c6c8(0,&local_1c);
  if (*DAT_140a6bd8 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

