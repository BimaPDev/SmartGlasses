/* FUN_10056824 @ 0x10056824 */

void FUN_10056824(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (0xc000000 < param_2 + 0xcc000000U) {
    return;
  }
  uVar5 = FUN_10056814();
  piVar1 = DAT_10056898;
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  switch((int)uVar5) {
  case 1:
    *DAT_10056898 = iVar2;
    piVar1[1] = param_3 + -1 + iVar2;
    iVar3 = 0x13;
    break;
  case 2:
    *DAT_10056898 = iVar2;
    piVar1[1] = param_3 + -1 + iVar2;
    iVar3 = 0xb;
    break;
  case 3:
    uVar4 = 0x1f;
    goto LAB_1005686c;
  case 4:
    uVar4 = 0x11;
    goto LAB_1005687a;
  case 5:
    uVar4 = 9;
LAB_1005686c:
    *DAT_1005689c = uVar4;
    goto LAB_1005686e;
  case 6:
    *DAT_10056898 = iVar2;
    iVar3 = 0x1b;
    piVar1[1] = param_3 + -1 + iVar2;
    break;
  case 7:
    uVar4 = 0x19;
LAB_1005687a:
    *DAT_1005689c = uVar4;
switchD_1005683c_default:
    return;
  default:
    goto switchD_1005683c_default;
  }
  piVar1[-1] = iVar3;
LAB_1005686e:
  FUN_10056814();
  return;
}

