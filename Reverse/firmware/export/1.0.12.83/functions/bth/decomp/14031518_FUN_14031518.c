/* FUN_14031518 @ 0x14031518 */

void FUN_14031518(undefined4 param_1)

{
  undefined4 uVar1;
  ushort local_e;
  int local_c;
  
  uVar1 = DAT_14031598;
  local_c = *DAT_140315ac;
  *DAT_14031594 = 1;
  FUN_1402e1fc(0x2309,uVar1);
  FUN_1402a6e8(4,0x58b,DAT_140315a8,DAT_140315a4,DAT_140315a0,DAT_1403159c);
  FUN_140348d4(param_1);
  FUN_1402e1fc(0x2309,&local_e);
  local_e = local_e & 0xf7ff;
  FUN_1402e37c(0x2309);
  if (*DAT_140315ac == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

