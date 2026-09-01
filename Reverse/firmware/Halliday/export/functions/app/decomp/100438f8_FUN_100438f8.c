/* FUN_100438f8 @ 0x100438f8 */

void FUN_100438f8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_10043924;
  iVar1 = (**(code **)(DAT_10043928 + 8))();
  if (*DAT_10043924 != iVar2) {
    FUN_1013cdc0(iVar1 == 1);
  }
  return;
}

