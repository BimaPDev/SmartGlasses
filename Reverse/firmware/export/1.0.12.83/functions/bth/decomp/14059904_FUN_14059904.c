/* FUN_14059904 @ 0x14059904 */

void FUN_14059904(int param_1)

{
  undefined1 auStack_1c [4];
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 local_14;
  undefined1 uStack_13;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  
  local_c = *DAT_14059968;
  uStack_13 = 0;
  uStack_12 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  local_14 = 9;
  FUN_14062974(auStack_1c,0);
  uStack_12 = auStack_1c._0_2_;
  uStack_10 = auStack_1c._2_2_;
  uStack_13 = uStack_16;
  uStack_e = uStack_18;
  FUN_14058860(param_1 + 4,30000);
  FUN_14059434(*(undefined1 *)(param_1 + 0x184),&local_14);
  if (*DAT_14059968 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

