/* FUN_2c4db1e0 @ 0x2c4db1e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4db1e0(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar2 = 0;
  if (param_1 != 0) {
    pbVar3 = (byte *)(param_1 + -1);
    uVar2 = _LAB_2c4db20c;
    while( true ) {
      pbVar3 = pbVar3 + 1;
      bVar1 = *pbVar3;
      uVar4 = (uint)(char)bVar1;
      if (uVar4 == 0) break;
      if (bVar1 - 0x41 < 0x1a) {
        uVar4 = (uint)(char)(bVar1 + 0x20);
      }
      uVar2 = _LAB_2c4db208 * (uVar2 ^ uVar4);
    }
  }
  return uVar2;
}

