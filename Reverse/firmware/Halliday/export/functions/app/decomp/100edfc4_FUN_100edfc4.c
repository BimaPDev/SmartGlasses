/* FUN_100edfc4 @ 0x100edfc4 */

void FUN_100edfc4(void)

{
  int *piVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 extraout_r2_00;
  undefined4 in_r3;
  int *piVar4;
  
  FUN_1011dbf4(DAT_100edff0,0xffffffff);
  piVar1 = DAT_100edff4;
  piVar4 = DAT_100edff4 + 7;
  uVar2 = extraout_r1;
  uVar3 = extraout_r2;
  while (*piVar1 != 0) {
    FUN_1011dbde(piVar4,0xffffffff);
    uVar2 = extraout_r1_00;
    uVar3 = extraout_r2_00;
  }
  FUN_10113e2c(DAT_100edff0,uVar2,uVar3,in_r3);
  return;
}

