/* FUN_140598a0 @ 0x140598a0 */

void FUN_140598a0(int param_1)

{
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  int local_c;
  
  local_c = *DAT_14059900;
  local_20 = 8;
  local_1f = *(undefined4 *)(param_1 + 0x21);
  local_17 = *(undefined4 *)(param_1 + 0x29);
  local_1b = *(undefined4 *)(param_1 + 0x25);
  local_13 = *(undefined4 *)(param_1 + 0x2d);
  FUN_14058860(param_1 + 4,30000);
  FUN_14059434(*(undefined1 *)(param_1 + 0x184),&local_20);
  if (*DAT_14059900 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

