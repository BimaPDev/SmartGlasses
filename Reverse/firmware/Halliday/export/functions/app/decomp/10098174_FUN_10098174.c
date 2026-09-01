/* FUN_10098174 @ 0x10098174 */

void FUN_10098174(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = FUN_10094174(3,DAT_10098260,0x281,DAT_10098264,DAT_1009825c,DAT_10098258,DAT_10098254);
    FUN_10119dc2(DAT_1009826c,DAT_10098268,DAT_10098260,0x281,uVar3);
    FUN_10119dc2(DAT_10098270);
    FUN_1011a1f0(DAT_10098260,0x281,extraout_r2,extraout_r3);
  }
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x54) << 0x1c)) {
    FUN_10125af4(param_1);
    iVar1 = FUN_1011ea10(*(undefined4 *)(param_1 + 0x2c));
    iVar2 = FUN_1011ea10(param_3);
    iVar1 = FUN_10094280(*(undefined4 *)(param_1 + 0x2c),iVar2 + iVar1 + 1,DAT_10098264);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 == 0) {
      uVar3 = FUN_10094174(3,DAT_10098260,0x28f,DAT_10098264,DAT_1009825c,DAT_10098278,DAT_10098274)
      ;
      FUN_10119dc2(DAT_1009826c,DAT_10098268,DAT_10098260,0x28f,uVar3);
      FUN_10119dc2(DAT_10098270);
      FUN_1011a1f0(DAT_10098260,0x28f,extraout_r2_00,extraout_r3_00);
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (param_2 == 0xffff) {
        param_2 = (*(code *)*DAT_1009827c)();
      }
      FUN_10094f64(*(undefined4 *)(param_1 + 0x2c),param_2,param_3);
      FUN_10097998(param_1,0);
      return;
    }
  }
  return;
}

