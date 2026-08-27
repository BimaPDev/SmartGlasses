/* FUN_14069164 @ 0x14069164 */

byte FUN_14069164(uint param_1,undefined1 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  if (param_1 < 2) {
    iVar3 = *(int *)(DAT_1406918c + (param_1 + 0x22) * 4);
    bVar2 = 0;
    if ((iVar3 != 0) && (bVar1 = *(byte *)(iVar3 + 0x54), bVar2 = bVar1 & 2, (bVar1 & 2) != 0)) {
      *param_2 = 0;
      return 1;
    }
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}

