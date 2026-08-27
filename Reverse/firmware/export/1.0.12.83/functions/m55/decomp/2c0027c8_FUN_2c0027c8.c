/* FUN_2c0027c8 @ 0x2c0027c8 */

void FUN_2c0027c8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  int iVar4;
  
  uVar3 = DAT_2c002838;
  puVar1 = DAT_2c002828;
  iVar4 = DAT_2c002828[0x1b];
  uVar2 = DAT_2c00283c;
  if (iVar4 << 0x17 < 0) {
    DAT_2c002828[0x1b] = DAT_2c002838;
    DataSynchronizationBarrier(0xf);
    FUN_2c003718(0x10,param_2,uVar3,*puVar1);
    param_2 = extraout_r1;
    puVar1 = DAT_2c002828;
    uVar2 = DAT_2c00283c;
  }
  DAT_2c002828 = puVar1;
  DAT_2c00283c = uVar2;
  if (iVar4 << 0x1c < 0) {
    puVar1[0x1b] = uVar2;
    DataSynchronizationBarrier(0xf);
    FUN_2c003718(0x10,param_2,uVar2,*puVar1);
  }
  if (iVar4 << 0x1d < 0) {
    DAT_2c002828[0x1b] = DAT_2c00282c;
  }
  if (iVar4 << 0x1e < 0) {
    DAT_2c002828[0x1b] = DAT_2c002830;
  }
  if (iVar4 << 0x1f < 0) {
    DAT_2c002828[0x1b] = DAT_2c002834;
  }
  DataSynchronizationBarrier(0xf);
  return;
}

