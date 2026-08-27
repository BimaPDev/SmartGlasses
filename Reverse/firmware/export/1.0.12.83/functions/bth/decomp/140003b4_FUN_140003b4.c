/* FUN_140003b4 @ 0x140003b4 */

void FUN_140003b4(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 in_r3;
  int iVar6;
  
  puVar4 = DAT_1400045c;
  FUN_14000760();
  iVar6 = DAT_14000460;
  puVar4[0x5d] = puVar4[0x5d] & 0xfffffffb;
  uVar5 = DAT_14000464;
  *(uint *)(iVar6 + 0xb0) = *(uint *)(iVar6 + 0xb0) & 0xdffffdff | 0x80000;
  *(uint *)(iVar6 + 0xe8) = uVar5 & *(uint *)(iVar6 + 0xe8) | 0xffc00;
  puVar4[0x5a] = puVar4[0x5a] | 0xca000000;
  FUN_14000780();
  iVar6 = puVar4[0xc];
  uVar1 = extraout_r1;
  puVar2 = DAT_1400045c;
  uVar3 = DAT_14000478;
  if (iVar6 << 0x17 < 0) {
    puVar4[0xc] = DAT_14000474;
    DataSynchronizationBarrier(0xf);
    FUN_14000770(0x10);
    uVar1 = extraout_r1_00;
    puVar2 = DAT_1400045c;
    uVar3 = DAT_14000478;
  }
  DAT_1400045c = puVar2;
  DAT_14000478 = uVar3;
  if (iVar6 << 0x1c < 0) {
    puVar2[0xc] = uVar3;
    DataSynchronizationBarrier(0xf);
    FUN_14000770(0x10,uVar1,uVar3,*puVar2,in_r3);
  }
  if (iVar6 << 0x1d < 0) {
    DAT_1400045c[0xc] = DAT_14000468;
  }
  if (iVar6 << 0x1e < 0) {
    DAT_1400045c[0xc] = DAT_1400046c;
  }
  if (iVar6 << 0x1f < 0) {
    DAT_1400045c[0xc] = DAT_14000470;
  }
  DataSynchronizationBarrier(0xf);
  return;
}

