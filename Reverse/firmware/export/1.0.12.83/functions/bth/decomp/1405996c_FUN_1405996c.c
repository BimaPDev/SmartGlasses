/* FUN_1405996c @ 0x1405996c */

void FUN_1405996c(int param_1)

{
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  int local_c;
  
  local_c = *DAT_140599c4;
  local_20 = 6;
  local_1f = *(undefined4 *)(param_1 + 0x38);
  local_17 = *(undefined4 *)(param_1 + 0x40);
  local_1b = *(undefined4 *)(param_1 + 0x3c);
  local_13 = *(undefined4 *)(param_1 + 0x44);
  FUN_14058860(param_1 + 4,30000);
  FUN_14059434(*(undefined1 *)(param_1 + 0x184),&local_20);
  if (*DAT_140599c4 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

