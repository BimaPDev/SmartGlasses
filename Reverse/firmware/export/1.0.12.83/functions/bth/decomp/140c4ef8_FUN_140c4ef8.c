/* FUN_140c4ef8 @ 0x140c4ef8 */

undefined4 * FUN_140c4ef8(int param_1,undefined4 *param_2,undefined4 *param_3,byte *param_4)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar5;
  undefined4 *puVar4;
  
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    pbVar5 = (byte *)(param_1 + 0x490);
    bVar2 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x4a0);
    do {
      puVar4 = puVar3 + 1;
      iVar1 = FUN_140db490(*param_2,*puVar3);
      if (iVar1 != 0) {
        bVar2 = bVar2 | *pbVar5;
      }
      pbVar5 = pbVar5 + 1;
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(param_1 + 0x4c0));
    *param_4 = bVar2;
    param_4 = param_4 + 1;
  }
  return param_3;
}

