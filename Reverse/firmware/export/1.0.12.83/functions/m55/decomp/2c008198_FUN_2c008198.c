/* FUN_2c008198 @ 0x2c008198 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c008198(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  
  FUN_2c007a78(0);
  FUN_2c007b6c(1);
  _DAT_50000000 = 0x8000;
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  _DAT_50000160 = 0x100;
  DataSynchronizationBarrier(0xf);
  _DAT_50000178 = 0x80;
  DataSynchronizationBarrier(0xf);
  _DAT_50000034 = 0x4000;
  FUN_2c013870(1,extraout_r1,extraout_r2,0x8000);
  _DAT_50000038 = 0x4000;
  DataSynchronizationBarrier(0xf);
  _DAT_50000034 = 0x2000;
  FUN_2c013870(1,extraout_r1_00,extraout_r2_00,_DAT_50000000);
  _DAT_50000038 = 0x2000;
  DataSynchronizationBarrier(0xf);
  _DAT_50000034 = 0x8000;
  FUN_2c013870(1,extraout_r1_01,extraout_r2_01,_DAT_50000000);
  _DAT_50000038 = 0x8000;
  DataSynchronizationBarrier(0xf);
  _DAT_50000188 = 0x40;
  FUN_2c013870(1,extraout_r1_02,extraout_r2_02,_DAT_50000000);
  _DAT_5000018c = 0x40;
  DataSynchronizationBarrier(0xf);
  _DAT_50000188 = 0x80;
  FUN_2c013870(1,extraout_r1_03,extraout_r2_03,_DAT_50000000);
  _DAT_5000018c = 0x80;
  DataSynchronizationBarrier(0xf);
  _DAT_50000170 = 0x80;
  FUN_2c013870(1,extraout_r1_04,extraout_r2_04,_DAT_50000000);
  DataSynchronizationBarrier(0xf);
  _DAT_50000174 = 0x80;
  DataSynchronizationBarrier(0xf);
  return;
}

