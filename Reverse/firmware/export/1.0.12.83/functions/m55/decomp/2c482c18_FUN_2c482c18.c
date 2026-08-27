/* FUN_2c482c18 @ 0x2c482c18 */

void FUN_2c482c18(void)

{
  int iVar1;
  
  iVar1 = FUN_2c483ae8();
  if (iVar1 != 6) {
    *DAT_2c482c3c = 0;
    return;
  }
  iVar1 = FUN_2c46db38();
  (**(code **)(iVar1 + 0x14))();
  *DAT_2c482c3c = 0;
  return;
}

