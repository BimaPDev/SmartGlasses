/* FUN_2c50eb88 @ 0x2c50eb88 */

undefined4 * FUN_2c50eb88(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  param_1[0x25] = param_2;
  param_1[0x26] = param_3;
  FUN_2c62e7b4(param_1 + 3);
  puVar5 = (undefined4 *)param_1[0x25];
  param_1[3] = param_1;
  uVar3 = DAT_2c50ec18;
  param_1[0xe] = *puVar5;
  param_1[0xf] = -puVar5[1];
  bVar1 = *(byte *)(puVar5 + 2);
  bVar2 = *(byte *)((int)puVar5 + 9);
  param_1[5] = uVar3;
  uVar3 = DAT_2c50ec1c;
  param_1[0xd] = (uint)bVar2;
  param_1[7] = uVar3;
  uVar3 = DAT_2c50ec20;
  param_1[0xb] = (uint)bVar1;
  param_1[0xc] = (uint)bVar1;
  uVar4 = DAT_2c50ec24;
  param_1[6] = uVar3;
  param_1[4] = uVar4;
  if (puVar5[3] != puVar5[4]) {
    param_1[10] = DAT_2c50ec28;
  }
  FUN_2c62e7b4(param_1 + 0x14);
  puVar5 = (undefined4 *)param_1[0x26];
  param_1[0x14] = param_1;
  uVar3 = DAT_2c50ec2c;
  param_1[0x1f] = *puVar5;
  param_1[0x20] = -puVar5[1];
  bVar1 = *(byte *)(puVar5 + 2);
  bVar2 = *(byte *)((int)puVar5 + 9);
  param_1[0x16] = uVar3;
  uVar3 = DAT_2c50ec30;
  param_1[0x1e] = (uint)bVar2;
  param_1[0x18] = uVar3;
  uVar3 = DAT_2c50ec34;
  param_1[0x1c] = (uint)bVar1;
  param_1[0x1d] = (uint)bVar1;
  uVar4 = DAT_2c50ec38;
  param_1[0x17] = uVar3;
  param_1[0x15] = uVar4;
  if (puVar5[4] != puVar5[3]) {
    param_1[0x1b] = DAT_2c50ec3c;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}

