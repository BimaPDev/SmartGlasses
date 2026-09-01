/* FUN_100dabf8 @ 0x100dabf8 */

void FUN_100dabf8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar5 = param_1;
  uVar6 = param_2;
  iVar7 = param_3;
  iVar2 = FUN_10136580();
  puVar1 = DAT_100dad60;
  if (iVar2 == 0) {
    if (param_3 == 8) {
      FUN_100da9c4();
      (*(code *)*puVar1)(0x10,0,0);
    }
    (*(code *)*puVar1)(param_2,0);
    uVar4 = 0xffffffff;
    goto switchD_100dac64_caseD_6;
  }
  if (iVar2 == param_1) {
    FUN_10136574();
    uVar4 = FUN_100d55bc();
    switch(param_3 + -2) {
    case 0:
    case 1:
    case 2:
switchD_100dac64_caseD_0:
      switch(uVar4) {
      case 0:
      case 1:
        goto switchD_100dac64_caseD_4;
      case 2:
      case 3:
      case 4:
      case 5:
      case 8:
switchD_100dac9e_caseD_6:
        (*(code *)*DAT_100dad60)(8,0);
        param_2 = 8;
        goto switchD_100dac64_caseD_6;
      case 6:
      case 7:
switchD_100dac9e_caseD_7:
        (*(code *)*DAT_100dad60)(10,0);
        param_2 = 10;
      default:
        goto switchD_100dac64_caseD_6;
      }
    case 3:
switchD_100dac64_caseD_3:
      if (4 < (int)uVar4) {
        if (3 < uVar4 - 5) goto switchD_100dac64_caseD_6;
        goto switchD_100dac9e_caseD_7;
      }
      if (1 < (int)uVar4) goto switchD_100dac9e_caseD_6;
      if (1 < uVar4) goto switchD_100dac64_caseD_6;
    case 4:
    case 5:
switchD_100dac64_caseD_4:
      pcVar3 = (code *)*DAT_100dad60;
      break;
    case 6:
      goto switchD_100dac64_caseD_6;
    default:
switchD_100dac64_default:
      switch(uVar4) {
      case 0:
      case 1:
        goto switchD_100dac64_caseD_4;
      case 2:
        (*(code *)*DAT_100dad60)(5,0);
        param_2 = 5;
        break;
      case 3:
        (*(code *)*DAT_100dad60)(6,0);
        param_2 = 6;
        break;
      case 4:
        (*(code *)*DAT_100dad60)(0xb,0);
        param_2 = 0xb;
        break;
      case 5:
        (*(code *)*DAT_100dad60)(9,0);
        param_2 = 9;
        break;
      case 6:
        goto switchD_100dac9e_caseD_6;
      case 7:
        goto switchD_100dac9e_caseD_7;
      case 8:
        (*(code *)*DAT_100dad60)(0x10,0);
        param_2 = 0x10;
      }
      goto switchD_100dac64_caseD_6;
    }
  }
  else {
    uVar4 = FUN_100d55bc();
    switch(param_3) {
    case 2:
    case 3:
    case 4:
      goto switchD_100dac64_caseD_0;
    case 5:
      goto switchD_100dac64_caseD_3;
    case 6:
    case 7:
      goto switchD_100dac64_caseD_4;
    case 8:
      FUN_100da9c4();
      puVar1 = DAT_100dad60;
      (*(code *)*DAT_100dad60)(0x10,0,0,(code *)*DAT_100dad60,iVar5,uVar6,iVar7);
      pcVar3 = (code *)*puVar1;
      break;
    default:
      goto switchD_100dac64_default;
    }
  }
  (*pcVar3)(param_2,0);
switchD_100dac64_caseD_6:
  FUN_100a5b78(DAT_100dad6c | (DAT_100dad68 - DAT_100dad64) * 0x20 & 0xff00U,DAT_100dad74,
               DAT_100dad70,param_2,param_3,uVar4);
  return;
}

