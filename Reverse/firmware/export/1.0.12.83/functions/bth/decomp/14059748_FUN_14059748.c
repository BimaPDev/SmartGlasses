/* FUN_14059748 @ 0x14059748 */

void FUN_14059748(int param_1)

{
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  int local_c;
  
  local_c = *DAT_140597a4;
  local_20 = 4;
  local_1f = *(undefined4 *)(param_1 + 0x74);
  local_17 = *(undefined4 *)(param_1 + 0x7c);
  local_1b = *(undefined4 *)(param_1 + 0x78);
  local_13 = *(undefined4 *)(param_1 + 0x80);
  FUN_14058860(param_1 + 4,30000);
  FUN_14059434(*(undefined1 *)(param_1 + 0x184),&local_20);
  if (*DAT_140597a4 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

