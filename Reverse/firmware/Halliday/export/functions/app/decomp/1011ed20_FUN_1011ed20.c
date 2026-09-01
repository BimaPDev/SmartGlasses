/* FUN_1011ed20 @ 0x1011ed20 */

int FUN_1011ed20(uint param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_c;
  
  if ((0xc < param_1) || (param_2 == (int *)0x0)) {
    return -1;
  }
  if (param_1 == 0) {
    uVar3 = 5;
    uVar2 = 0x10;
  }
  else if (param_1 == 1) {
    uVar3 = 5;
    uVar2 = 0x15;
  }
  else if (param_1 == 2) {
    uVar3 = 6;
    uVar2 = 0x1a;
  }
  else if (param_1 == 3) {
    uVar3 = 5;
    uVar2 = 0xc0;
  }
  else if (param_1 == 4) {
    uVar3 = 5;
    uVar2 = 0xc5;
  }
  else if (param_1 == 5) {
    uVar2 = 0xd1;
    uVar3 = 5;
  }
  else if (param_1 == 6) {
    uVar3 = 8;
    uVar2 = 0x178;
  }
  else if (param_1 == 7) {
    uVar3 = 5;
    uVar2 = 0x110;
  }
  else if (param_1 == 8) {
    uVar3 = 1;
    uVar2 = 0x115;
  }
  else {
    if (param_1 == 9) {
LAB_1011edb2:
      local_c = 0;
      goto LAB_1011ed3e;
    }
    if (param_1 == 10) {
      uVar3 = 5;
      uVar2 = 0xca;
    }
    else {
      if (param_1 != 0xb) goto LAB_1011edb2;
      uVar3 = 2;
      uVar2 = 0xcf;
    }
  }
  local_c = (int)param_2;
  iVar1 = FUN_1011ec80(&local_c,uVar2,uVar3,param_4,param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
LAB_1011ed3e:
  *param_2 = local_c;
  return 0;
}

