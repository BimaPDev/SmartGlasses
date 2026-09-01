/* FUN_100c9aac @ 0x100c9aac */

void FUN_100c9aac(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  
  puVar1 = param_2 + 0x10;
  if (param_2 < param_1) {
    bVar2 = puVar1 <= param_1;
LAB_100c9abc:
    if (bVar2) goto LAB_100c9ae0;
  }
  else if (param_1 != param_2) {
    param_4 = param_1 + 0x10;
    bVar2 = param_4 <= param_2;
    goto LAB_100c9abc;
  }
  FUN_10119dc2(DAT_100c9b04,DAT_100c9b00,DAT_100c9afc,0x217,param_1,param_2);
  FUN_10119dc2(DAT_100c9b08);
  FUN_1011a1f0(DAT_100c9afc,0x217,param_3,param_4);
LAB_100c9ae0:
  param_1 = param_1 + -1;
  do {
    puVar1 = puVar1 + -1;
    param_1 = param_1 + 1;
    *param_1 = *puVar1;
  } while (puVar1 != param_2);
  return;
}

