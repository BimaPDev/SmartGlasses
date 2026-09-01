/* FUN_10092778 @ 0x10092778 */

void FUN_10092778(int param_1,undefined4 param_2)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_10094174(3,DAT_100927d4,0x33,DAT_100927d8,DAT_100927d0,DAT_100927cc,DAT_100927c8);
    FUN_10119dc2(DAT_100927e0,DAT_100927dc,DAT_100927d4,0x33,uVar1);
    FUN_10119dc2(DAT_100927e4);
    FUN_1011a1f0(DAT_100927d4,0x33,extraout_r2,extraout_r3);
  }
                    /* WARNING: Could not recover jumptable at 0x100927c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 4))(param_1,param_2);
  return;
}

