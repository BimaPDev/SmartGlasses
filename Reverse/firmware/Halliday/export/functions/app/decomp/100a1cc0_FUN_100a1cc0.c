/* FUN_100a1cc0 @ 0x100a1cc0 */

void FUN_100a1cc0(void)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = DAT_100a1cdc + 0x18;
  *DAT_100a1cdc = *DAT_100a1cdc | 1;
  FUN_10116598(pbVar3);
  piVar1 = DAT_10067f6c;
  FUN_100a5b78((DAT_10067f68 - DAT_10067f64) * 0x20 & 0xff00U | 0x420031,DAT_10067f74,DAT_10067f70);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 8) + 4))();
    *piVar1 = 0;
  }
  return;
}

