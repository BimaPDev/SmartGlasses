/* FUN_10122592 @ 0x10122592 */

uint FUN_10122592(uint param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  bVar1 = *(byte *)(param_2 + 0x1b);
  bVar3 = param_1 == 3;
  uVar2 = (uint)*(ushort *)(param_2 + 0x1a);
  if (bVar3) {
    param_1 = (uint)*(byte *)(param_2 + 0x15);
    bVar1 = *(byte *)(param_2 + 0x14);
  }
  if (bVar3) {
    uVar2 = uVar2 | ((uint)bVar1 | param_1 << 8) << 0x10;
  }
  return uVar2;
}

