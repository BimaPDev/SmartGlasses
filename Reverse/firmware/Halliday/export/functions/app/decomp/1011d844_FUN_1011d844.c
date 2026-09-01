/* FUN_1011d844 @ 0x1011d844 */

void FUN_1011d844(int param_1,byte *param_2,int param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = param_2 + param_3;
  pbVar2 = (byte *)(param_1 + -1);
  for (; param_2 != pbVar3; param_2 = param_2 + 1) {
    pbVar2[1] = *param_2 ^ 0x36;
    pbVar2[0x41] = *param_2 ^ 0x5c;
    pbVar2 = pbVar2 + 1;
  }
  for (puVar1 = (undefined1 *)(param_3 + param_1); (uint)((int)puVar1 - param_1) < 0x40;
      puVar1 = puVar1 + 1) {
    *puVar1 = 0x36;
    puVar1[0x40] = 0x5c;
  }
  return;
}

