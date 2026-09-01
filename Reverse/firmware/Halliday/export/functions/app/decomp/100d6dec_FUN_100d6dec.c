/* FUN_100d6dec @ 0x100d6dec */

void FUN_100d6dec(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    FUN_100d6950(param_1,0,param_3,param_4,param_1,param_2);
    uVar1 = 1;
    break;
  case 1:
  case 3:
  case 6:
  case 8:
  case 10:
  case 0x10:
    FUN_100d490c();
    FUN_100d6950(param_1,param_2);
    FUN_100d6468(param_1,param_2);
    thunk_FUN_100d88cc(0);
    if (-1 < (int)((DAT_100d6e6c >> (param_2 & 0xff)) << 0x1f)) goto switchD_100d6df4_caseD_b;
    goto LAB_100d6e4e;
  case 2:
  case 4:
    FUN_100d6950();
    goto switchD_100d6df4_caseD_b;
  case 5:
  case 7:
  case 9:
  case 0xf:
    FUN_100d6950();
    FUN_100d6468(param_1,param_2);
LAB_100d6e4e:
    FUN_100d6c90();
  default:
    goto switchD_100d6df4_caseD_b;
  case 0xc:
  case 0xe:
    FUN_100d490c();
    uVar1 = 0;
  }
  thunk_FUN_100d88cc(uVar1);
switchD_100d6df4_caseD_b:
  FUN_100d6694();
  return;
}

