/* FUN_10068bf4 @ 0x10068bf4 */

void FUN_10068bf4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_10119dc2(DAT_10068c54,DAT_10068c50,DAT_10068c4c,0x178,0,param_2);
    FUN_1011a1f0(DAT_10068c4c,0x178,param_3,param_4);
  }
  uVar1 = FUN_10117e44(0x14);
  *param_1 = (int)uVar1;
  if ((int)uVar1 == 0) {
    FUN_10119dc2(DAT_10068c54,DAT_10068c58,DAT_10068c4c,0x180,0,(int)((ulonglong)uVar1 >> 0x20));
    FUN_10119dc2(DAT_10068c5c);
    FUN_1011a1f0(DAT_10068c4c,0x180,extraout_r2,extraout_r3);
  }
  FUN_1013c856(*param_1);
  return;
}

