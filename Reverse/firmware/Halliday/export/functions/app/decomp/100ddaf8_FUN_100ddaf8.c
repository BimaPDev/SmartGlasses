/* FUN_100ddaf8 @ 0x100ddaf8 */

int FUN_100ddaf8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint extraout_r2;
  int *piVar7;
  uint uVar8;
  
  piVar1 = DAT_100ddbdc;
  if (param_2 - 1U < 2) {
    if (param_1 != 0) {
      piVar7 = DAT_100ddbdc;
      for (uVar2 = 0; (uVar2 & 0xff) < (*DAT_100ddbd8 & 0x7f) >> 4; uVar2 = uVar2 + 1) {
        if ((*piVar7 == 0) && (param_1 == piVar7[0x1a])) {
          if (-1 < (char)DAT_100ddbdc[uVar2 * 0x52 + 0x18]) {
            if ((char)DAT_100ddbdc[uVar2 * 0x52 + 0x32] < '\0') {
              FUN_10119dc2(DAT_100ddbec);
              FUN_1013751e(piVar1 + uVar2 * 0x52 + 0x1a);
            }
            else {
              FUN_10119dc2(DAT_100ddbf8);
            }
            uVar8 = (DAT_100ddbe0 - DAT_100ddbe4) * 0x20 & 0xff00;
            uVar4 = DAT_100ddbf0 | uVar8;
            uVar6 = DAT_100ddbf4;
            uVar2 = DAT_100ddbe4;
            goto LAB_100ddb86;
          }
          break;
        }
        piVar7 = piVar7 + 0x52;
      }
    }
    iVar3 = FUN_100dd8a8(param_1);
    if (iVar3 != 0) {
      uVar4 = (DAT_100ddbe0 - DAT_100ddbe4) * 0x20 & 0xff00 | 0x1340031;
      uVar6 = DAT_100ddbe8;
      uVar2 = extraout_r2;
      uVar8 = DAT_100ddbe4;
LAB_100ddb86:
      FUN_100a5b78(uVar4,uVar6,uVar2,uVar8,param_4);
      return 0;
    }
  }
  iVar3 = FUN_100dd8ec(param_1);
  if (iVar3 == 0) {
    uVar2 = (DAT_100ddbe0 - DAT_100ddbe4) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100ddbfc | uVar2,DAT_100ddc00,DAT_100ddbe4,uVar2,param_4);
    return -5;
  }
  iVar5 = FUN_100de8b4(param_1,iVar3,param_2);
  if (-1 < iVar5) {
    return 0;
  }
  FUN_1011ea48(iVar3,0,0x68);
  return iVar5;
}

