/* FUN_2c00907c @ 0x2c00907c */

void FUN_2c00907c(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_3 == 0) {
    bVar1 = *(byte *)(param_2 + 3);
    puVar2 = *(undefined4 **)(DAT_2c0090c4 + param_1 * 4);
    *puVar2 = *param_2;
    puVar2[0x22] = (uint)bVar1;
    return;
  }
  uVar3 = param_2[1];
  bVar1 = *(byte *)((int)param_2 + 0xd);
  puVar2 = *(undefined4 **)(DAT_2c0090c4 + param_1 * 4);
  if (*(char *)((int)param_2 + 0xf) != '\0') {
    puVar2[10] = (uint)*(byte *)((int)param_2 + 0xe);
    puVar2[0xb] = *(byte *)((int)param_2 + 0xf) | 0x40000;
    *puVar2 = uVar3;
    puVar2[0x22] = (uint)bVar1;
    return;
  }
  puVar2[0xb] = 0;
  *puVar2 = uVar3;
  puVar2[0x22] = (uint)bVar1;
  return;
}

