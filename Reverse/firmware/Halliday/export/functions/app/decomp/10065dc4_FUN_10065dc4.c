/* FUN_10065dc4 @ 0x10065dc4 */

undefined4 FUN_10065dc4(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar2 = FUN_1011df5e();
  if (iVar2 < 6) {
    return 0;
  }
  iVar3 = FUN_1011dfb2(param_1);
  if ((iVar3 == DAT_10065f44) && (8 < iVar2)) {
    FUN_1011dfde(param_1,2);
    iVar5 = *(int *)(param_1 + 8);
    iVar3 = FUN_1011df5e(param_1);
    pcVar7 = DAT_10065f50;
    pcVar1 = DAT_10065f48;
    if (iVar3 != 0x4d4d) {
      pcVar7 = DAT_10065f54;
      pcVar1 = DAT_10065f4c;
    }
    FUN_1011dfde(param_1,2);
    iVar3 = (*pcVar1)(param_1);
    if (iVar3 == 8) {
      iVar3 = (*pcVar7)(param_1);
      iVar6 = 0;
      for (iVar9 = 0; iVar9 < iVar3; iVar9 = iVar9 + 1) {
        iVar8 = (*pcVar7)(param_1);
        if (iVar8 == 0x132) {
          FUN_1011dfde(param_1,6);
          iVar6 = (*pcVar1)(param_1);
        }
        else {
          FUN_1011dfde(param_1,10);
        }
      }
      iVar9 = (*pcVar7)(param_1);
      if (iVar9 == 0) {
        iVar9 = (*pcVar7)(param_1);
        iVar3 = iVar3 * 0xc + 0xe;
        if (iVar9 == 0) {
          iVar2 = (iVar2 + -8) - iVar3;
          goto LAB_10065de6;
        }
      }
      else {
        iVar3 = iVar3 * 0xc + 0xc;
      }
      if ((iVar6 == 0) || (iVar9 < iVar6)) {
        iVar3 = iVar9 - iVar3;
      }
      else {
        FUN_1011dfde(param_1,iVar6 - iVar3);
        FUN_1011e166(param_1,param_1 + 0xdc,0x14);
        iVar3 = (iVar9 - iVar6) + -0x14;
      }
      FUN_1011dfde(param_1,iVar3);
      iVar3 = (*pcVar7)(param_1);
      iVar8 = 0;
      for (iVar10 = 0; iVar10 < iVar3; iVar10 = iVar10 + 1) {
        iVar4 = (*pcVar7)(param_1);
        if (iVar4 == 0x201) {
          FUN_1011dfde(param_1,6);
          iVar8 = (*pcVar1)(param_1);
        }
        else {
          FUN_1011dfde(param_1,10);
        }
      }
      if (iVar9 < iVar6) {
        FUN_1011dfde(param_1,((iVar6 + -2) - iVar9) + iVar3 * -0xc);
        FUN_1011e166(param_1,param_1 + 0xdc,0x14);
        iVar6 = (iVar2 + -0x1c) - iVar6;
      }
      else {
        iVar6 = iVar3 * -0xc + ((iVar2 + -10) - iVar9);
      }
      if (0 < iVar6) {
        FUN_1011dfde(param_1);
      }
      *(int *)(param_1 + 0xc) = iVar5 + iVar8;
      return 0;
    }
    iVar2 = iVar2 + -0x10;
  }
  else {
    iVar2 = iVar2 + -6;
  }
LAB_10065de6:
  FUN_1011dfde(param_1,iVar2);
  return 0;
}

