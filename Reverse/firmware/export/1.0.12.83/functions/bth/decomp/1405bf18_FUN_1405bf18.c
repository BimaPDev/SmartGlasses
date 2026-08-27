/* FUN_1405bf18 @ 0x1405bf18 */

void FUN_1405bf18(uint param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = DAT_1405bf54;
  *param_2 = 0;
  bVar2 = (byte)((int)(uint)*(byte *)((param_1 >> 3) + iVar1) >> (param_1 & 7)) & 1;
  *param_2 = bVar2;
  if (-1 < ((int)(uint)*(byte *)((param_1 >> 3) + iVar1 + 1) >> (param_1 & 7)) << 0x1f) {
    bVar2 = bVar2 | 2;
  }
  *param_2 = bVar2;
  return;
}

