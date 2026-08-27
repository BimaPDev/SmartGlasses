/* FUN_140e02f4 @ 0x140e02f4 */

undefined4 FUN_140e02f4(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_1;
  do {
    pbVar3 = pbVar3 + 1;
    bVar1 = *param_2;
    if (bVar1 == 0) {
      *param_1 = pbVar3;
      return 1;
    }
    uVar2 = (uint)*pbVar3;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
    param_2 = param_2 + 1;
  } while (uVar2 == bVar1);
  return 0;
}

