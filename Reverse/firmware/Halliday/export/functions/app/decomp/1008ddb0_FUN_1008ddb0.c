/* FUN_1008ddb0 @ 0x1008ddb0 */

void FUN_1008ddb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar2;
  
  FUN_1012b008(DAT_1008de20,0x14,param_3,param_4,param_1,param_2,param_3,param_4);
  puVar1 = (undefined4 *)FUN_1008dd3c();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = FUN_10094174(3,DAT_1008de30,0x40,DAT_1008de34,DAT_1008de2c,DAT_1008de28,DAT_1008de24);
    FUN_10119dc2(DAT_1008de3c,DAT_1008de38,DAT_1008de30,0x40,uVar2);
    FUN_10119dc2(DAT_1008de40);
    FUN_1011a1f0(DAT_1008de30,0x40,extraout_r2,extraout_r3);
    FUN_10094174(2,DAT_1008de30,0x42,DAT_1008de34,DAT_1008de44);
  }
  else {
    *puVar1 = DAT_1008de48;
    puVar1[1] = DAT_1008de4c;
    puVar1[2] = DAT_1008de50;
    puVar1[3] = DAT_1008de54;
  }
  return;
}

