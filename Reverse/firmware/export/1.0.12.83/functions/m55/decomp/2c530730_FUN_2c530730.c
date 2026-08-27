/* FUN_2c530730 @ 0x2c530730 */

void FUN_2c530730(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  *DAT_2c53074c = (char)param_2;
  puVar2 = DAT_2c53075c;
  puVar1 = DAT_2c530754;
  if (param_2 != 0) {
    *DAT_2c530750 = param_1;
    *puVar1 = 0;
    return;
  }
  *DAT_2c530758 = param_1;
  *puVar2 = 0;
  return;
}

