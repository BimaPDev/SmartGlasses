/* FUN_100eb1c0 @ 0x100eb1c0 */

void FUN_100eb1c0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  int *extraout_r2;
  int *piVar4;
  int *extraout_r2_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = DAT_100eb29c;
  uVar7 = DAT_100eb29c[1];
  uVar8 = 0;
  while( true ) {
    uVar5 = uVar7;
    if (uVar5 == 0) {
      return;
    }
    if (*(int *)(uVar5 + 0x20) == param_1) break;
    uVar7 = *(uint *)(uVar5 + 0x3c);
    uVar8 = uVar5;
  }
  uVar7 = *DAT_100eb29c;
  if (uVar7 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100eb184(uVar5);
    param_3 = extraout_r2;
  }
  if (1 < *(uint *)(uVar5 + 0xc)) {
    *(uint *)(uVar5 + 0xc) = *(uint *)(uVar5 + 0xc) - 1;
    return;
  }
  if (*(int *)(uVar5 + 0x24) != 0) {
    return;
  }
  if (uVar8 == 0) {
    puVar1[1] = *(uint *)(uVar5 + 0x3c);
  }
  else {
    *(uint *)(uVar8 + 0x3c) = *(uint *)(uVar5 + 0x3c);
  }
  if (uVar2 != 0) {
    if (*(uint *)(uVar5 + 8) == 0x40) {
      FUN_100eaf40(param_1);
      *DAT_100eb2a0 = *DAT_100eb2a0 + -1;
      *(undefined4 *)(uVar5 + 0x20) = 0;
      return;
    }
    if (uVar2 < 2) {
      return;
    }
    uVar8 = 0;
    do {
      uVar6 = uVar7;
      uVar5 = uVar8;
      uVar7 = *(uint *)(uVar6 + 0x10);
      uVar8 = uVar6;
    } while (uVar2 != uVar6);
    if (uVar5 == 0) {
      *puVar1 = uVar7;
    }
    else {
      *(uint *)(uVar5 + 0x10) = uVar7;
    }
    if (*(int *)(uVar6 + 4) + *(int *)(uVar6 + 8) == *DAT_100eb2a4) {
      FUN_100eaf40(*(undefined4 *)(uVar6 + 0xc));
      piVar4 = DAT_100eb2a0;
      *DAT_100eb2a0 = *DAT_100eb2a0 + -1;
      uVar3 = extraout_r1;
    }
    else {
      FUN_10138fd0(0);
      uVar3 = extraout_r1_00;
      piVar4 = extraout_r2_00;
    }
    FUN_10138fbc(uVar6,uVar3,piVar4,param_4);
    return;
  }
  if (*(uint *)(uVar5 + 8) < 0x41) {
    FUN_100eaf40(param_1);
    param_3 = DAT_100eb2a0;
    *DAT_100eb2a0 = *DAT_100eb2a0 + -1;
  }
  FUN_10138fd0(0,uVar5,param_3,param_4);
  return;
}

