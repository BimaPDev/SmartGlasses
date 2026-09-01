/* FUN_10064c60 @ 0x10064c60 */

void FUN_10064c60(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar1 = DAT_10064d00;
  puVar3 = (undefined4 *)*DAT_10064d00;
  if ((puVar3 != (undefined4 *)0x0) && (iVar2 = puVar3[0x14], puVar3[0x14] = iVar2 + -1, iVar2 == 1)
     ) {
    uVar4 = (DAT_10064d08 - DAT_10064d04) * 0x20 & 0xff00;
    if (*(ushort *)(puVar3 + 4) + 1 != (uint)*(ushort *)((int)puVar3 + 0x12)) {
      FUN_100a5b78(DAT_10064d0c | uVar4,DAT_10064d14,DAT_10064d10,*puVar3,
                   (uint)*(ushort *)(puVar3 + 4),(uint)*(ushort *)((int)puVar3 + 0x12));
    }
    (**(code **)(*(int *)(puVar3[3] + 8) + 0x18))();
    (**(code **)(*(int *)(puVar3[3] + 8) + 4))();
    if (puVar3[7] != 0) {
      FUN_1011dd74(puVar3[3],0);
    }
    if (puVar3[8] != 0) {
      FUN_1011dd74(puVar3[3],1);
    }
    (**(code **)(*(int *)(puVar3[3] + 8) + 0x28))(puVar3[3],0);
    FUN_100a5b78(uVar4 | 0x1560032,DAT_10064d14,DAT_10064d18,*puVar3,puVar3[1]);
    FUN_10064b84(*puVar1);
    *puVar1 = 0;
  }
  return;
}

