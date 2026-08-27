/* FUN_1403ad40 @ 0x1403ad40 */

void FUN_1403ad40(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 uStack_20;
  int local_1c;
  undefined4 uStack_18;
  int local_14;
  
  local_14 = *DAT_1403adb8;
  FUN_1403a974();
  uVar2 = FUN_1403a958(2);
  local_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  uStack_18 = 0;
  FUN_140e50d8(uVar2,0,&local_24,0x10);
  puVar1 = DAT_1403adbc;
  if (local_1c == -0x55555556) {
    *DAT_1403adbc = DAT_1403add4;
  }
  else if (local_1c == -0x44444445) {
    *DAT_1403adbc = DAT_1403adc0;
  }
  FUN_1402a6e8(4,0x26b,DAT_1403add0,DAT_1403adcc,DAT_1403adc8,DAT_1403adc4,local_1c,*puVar1);
  if (*DAT_1403adb8 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

