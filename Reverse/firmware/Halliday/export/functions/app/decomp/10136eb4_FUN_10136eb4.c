/* FUN_10136eb4 @ 0x10136eb4 */

void FUN_10136eb4(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_100dd2dc();
  if ((iVar1 == 0) || (param_3 == (undefined1 *)0x0)) {
switchD_10136eca_default:
    return;
  }
  switch(*param_3) {
  case 0:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x10);
    uVar3 = *(undefined1 *)(iVar1 + 4);
    uVar4 = 2;
    uVar2 = 3;
    param_3 = param_3 + 4;
    goto LAB_10136ee2;
  case 1:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x10);
    uVar3 = *(undefined1 *)(iVar1 + 4);
    uVar4 = param_3[4];
    uVar2 = 5;
    param_3 = *(undefined1 **)(param_3 + 8);
    goto LAB_10136ee2;
  case 2:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x10);
    uVar3 = *(undefined1 *)(iVar1 + 4);
    uVar2 = 4;
    break;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x10);
    uVar3 = *(undefined1 *)(iVar1 + 4);
    uVar4 = param_3[4];
    uVar2 = 6;
    param_3 = *(undefined1 **)(param_3 + 8);
    goto LAB_10136ee2;
  case 4:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x10);
    uVar3 = *(undefined1 *)(iVar1 + 4);
    uVar2 = 7;
    break;
  case 5:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x10);
    uVar3 = *(undefined1 *)(iVar1 + 4);
    uVar2 = 8;
    break;
  case 6:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x10);
    uVar3 = *(undefined1 *)(iVar1 + 4);
    uVar2 = 9;
    break;
  default:
    goto switchD_10136eca_default;
  }
  param_3 = (undefined1 *)0x0;
  uVar4 = 0;
LAB_10136ee2:
                    /* WARNING: Could not recover jumptable at 0x10136ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,uVar3,param_3,uVar4);
  return;
}

