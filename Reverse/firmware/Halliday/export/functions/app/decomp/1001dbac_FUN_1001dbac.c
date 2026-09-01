/* FUN_1001dbac @ 0x1001dbac */

void FUN_1001dbac(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 3) {
    uVar1 = *(undefined4 *)(DAT_1001dbdc + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  if (*DAT_1001dbd8 != *DAT_1001dbd8) {
    FUN_1013cdc0(uVar1);
  }
  return;
}

