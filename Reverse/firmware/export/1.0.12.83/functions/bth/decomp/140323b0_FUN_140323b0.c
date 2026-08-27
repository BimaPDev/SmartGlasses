/* FUN_140323b0 @ 0x140323b0 */

void FUN_140323b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined4 local_124;
  undefined1 local_120;
  uint uStack_11f;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined4 local_118;
  undefined1 uStack_114;
  undefined1 auStack_113 [247];
  int local_1c;
  
  pcVar1 = DAT_14032480;
  local_124 = *DAT_14032478;
  local_1c = *DAT_1403247c;
  local_118 = DAT_14032478[3];
  local_120 = (undefined1)DAT_14032478[1];
  uStack_11f = (uint)DAT_14032478[1] >> 8 & 0xff;
  uStack_11b = 0;
  uStack_11a = 0;
  FUN_140e5658(auStack_113,0,0xf7);
  FUN_140e5658(&uStack_114,0,0xf8);
  FUN_140e5278(&uStack_114,param_1,param_2);
  if (*pcVar1 == '\0') {
    FUN_1403666c(&local_118,0xfc);
    FUN_140e5398(800);
  }
  else {
    FUN_140313b0(&local_118,0xfc);
  }
  FUN_140e5398(800);
  uStack_11f = *param_3;
  uStack_11b = (undefined1)*(undefined2 *)(param_3 + 1);
  uStack_11a = (undefined1)((ushort)*(undefined2 *)(param_3 + 1) >> 8);
  if (*pcVar1 == '\0') {
    FUN_1403666c(&local_124,0xb);
    FUN_140e5398(800);
  }
  else {
    FUN_140313b0(&local_124,0xb);
  }
  FUN_140e5398(0x140);
  if (*DAT_1403247c == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

