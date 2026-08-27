/* FUN_14059a20 @ 0x14059a20 */

void FUN_14059a20(int param_1)

{
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  int local_c;
  
  local_c = *DAT_14059a78;
  local_20 = 10;
  local_1f = *(undefined4 *)(param_1 + 0x54);
  local_17 = *(undefined4 *)(param_1 + 0x5c);
  local_1b = *(undefined4 *)(param_1 + 0x58);
  local_13 = *(undefined4 *)(param_1 + 0x60);
  FUN_14058860(param_1 + 4,30000);
  FUN_14059434(*(undefined1 *)(param_1 + 0x184),&local_20);
  if (*DAT_14059a78 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

