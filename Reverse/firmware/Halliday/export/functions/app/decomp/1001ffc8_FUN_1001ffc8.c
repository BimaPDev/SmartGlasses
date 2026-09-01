/* FUN_1001ffc8 @ 0x1001ffc8 */

void FUN_1001ffc8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 != 0) {
    if (*DAT_10020008 != *DAT_10020008) goto LAB_1001ffe4;
    if (param_2 < 0x31) {
      if (*DAT_1001ff8c == *DAT_1001ff8c) goto LAB_1001fe50;
LAB_1001ff72:
      FUN_1013cdc0();
    }
    else if (*DAT_1001ff8c != *DAT_1001ff8c) goto LAB_1001ff72;
    param_2 = 1;
    goto LAB_1001fe50;
  }
  if (*DAT_10020008 != *DAT_10020008) {
LAB_1001ffe4:
    param_2 = FUN_1013cdc0();
  }
  if (param_2 < 0x31) {
    if (*DAT_1001ffc4 == *DAT_1001ffc4) goto LAB_1001fe50;
LAB_1001ffaa:
    FUN_1013cdc0();
  }
  else if (*DAT_1001ffc4 != *DAT_1001ffc4) goto LAB_1001ffaa;
  param_2 = 0;
LAB_1001fe50:
  iVar3 = *DAT_1001fe8c;
  iVar1 = (**(code **)(DAT_1001fe90 + 0xc))();
  puVar4 = DAT_1001fe98;
  if (iVar1 != 3) {
    puVar4 = DAT_1001fe94;
  }
  if (param_2 < 0x31) {
    uVar2 = puVar4[param_2];
  }
  else {
    uVar2 = *puVar4;
  }
  if (*DAT_1001fe8c != iVar3) {
    FUN_1013cdc0(uVar2);
  }
  return;
}

