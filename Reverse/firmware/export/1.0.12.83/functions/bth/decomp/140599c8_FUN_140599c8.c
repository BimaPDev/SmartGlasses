/* FUN_140599c8 @ 0x140599c8 */

void FUN_140599c8(int param_1)

{
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_14059a1c;
  local_14 = *(undefined4 *)(param_1 + 0x4a);
  uStack_10 = *(undefined4 *)(param_1 + 0x4e);
  local_18 = 7;
  local_16 = *(undefined2 *)(param_1 + 0x48);
  FUN_14058860(param_1 + 4,30000,local_16,&local_c);
  FUN_14059434(*(undefined1 *)(param_1 + 0x184),&local_18);
  if (*DAT_14059a1c == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

