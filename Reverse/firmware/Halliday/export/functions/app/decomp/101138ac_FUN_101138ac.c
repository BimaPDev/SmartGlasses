/* FUN_101138ac @ 0x101138ac */

void FUN_101138ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_r2;
  undefined4 extraout_r2_00;
  int iVar5;
  int extraout_r2_01;
  int extraout_r2_02;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar6;
  undefined4 extraout_r3_01;
  int *piVar7;
  undefined8 uVar8;
  
  uVar6 = DAT_1011399c;
  piVar1 = DAT_10113988;
  uVar8 = CONCAT44(param_2,param_1);
  piVar7 = DAT_1011398c;
  while( true ) {
    if (piVar1 < piVar7) {
      FUN_10119dc2(DAT_10113994,DAT_10113990,uVar6,0x319,uVar8);
      FUN_10119dc2(DAT_10113998);
      FUN_1011a1f0(uVar6,0x319,param_3,param_4);
    }
    if (piVar1 <= piVar7) break;
    uVar8 = FUN_101136cc(*piVar7,piVar7[1],piVar7[2],piVar7[3],piVar7[4],piVar7[5],piVar7[6],
                         piVar7[7],piVar7[8],piVar7[0xb]);
    param_4 = *piVar7;
    *(int **)(param_4 + 0x54) = piVar7;
    param_3 = extraout_r2_00;
    piVar7 = piVar7 + 0xc;
  }
  uVar8 = FUN_10114a38();
  uVar4 = DAT_1011399c;
  uVar3 = DAT_10113994;
  uVar2 = DAT_10113990;
  iVar5 = extraout_r2;
  uVar6 = extraout_r3;
  piVar7 = DAT_1011398c;
  while( true ) {
    if (piVar1 < piVar7) {
      FUN_10119dc2(uVar3,uVar2,uVar4,0x338,uVar8);
      FUN_10119dc2(DAT_10113998);
      uVar8 = FUN_1011a1f0(uVar4,0x338,iVar5,uVar6);
    }
    if (piVar1 <= piVar7) break;
    iVar5 = piVar7[9];
    uVar6 = 0;
    if (iVar5 != -1) {
      if (iVar5 < 1) {
        uVar8 = FUN_10114d90();
        iVar5 = extraout_r2_01;
        uVar6 = extraout_r3_00;
      }
      else {
        uVar8 = FUN_10115740(*piVar7 + 0x18,DAT_101139a0,iVar5,iVar5 >> 0x1f);
        iVar5 = extraout_r2_02;
        uVar6 = extraout_r3_01;
      }
    }
    piVar7 = piVar7 + 0xc;
  }
  FUN_101150e0();
  return;
}

