/* FUN_100ce4e8 @ 0x100ce4e8 */

undefined4 FUN_100ce4e8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  
  uVar4 = CONCAT44(param_2,param_1);
  iVar7 = param_1;
  piVar6 = param_2;
  uVar1 = param_3;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100ce59c,DAT_100ce598,DAT_100ce594,0xf85,0,param_2,param_3,param_4,0,param_2,
                 param_3);
    FUN_10119dc2(DAT_100ce5a0);
    uVar4 = FUN_1011a1f0(DAT_100ce594,0xf85,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if ((param_2 == (int *)0x0) || (param_4 = 0, *param_2 == 0)) {
    FUN_10119dc2(DAT_100ce59c,DAT_100ce5a4,DAT_100ce594,0xf86,uVar4,param_3,param_4,iVar7,piVar6,
                 uVar1);
    FUN_10119dc2(DAT_100ce5a0);
    FUN_1011a1f0(DAT_100ce594,0xf86,param_3,param_4);
  }
  if (*(char *)(param_1 + 0xd) == '\a') {
    uVar2 = param_2[1];
    uVar1 = DAT_100ce5ac;
    if (uVar2 == 0) {
      uVar5 = 8;
      iVar7 = 4;
      uVar3 = DAT_100ce5a8;
    }
    else if (uVar2 < 2) {
      if (*(short *)((int)param_2 + 10) == 0) {
        uVar5 = 10;
        iVar7 = 2;
        uVar3 = DAT_100ce5bc;
      }
      else {
        uVar5 = 0xc;
        iVar7 = 4;
        uVar3 = DAT_100ce5b8;
      }
    }
    else {
      iVar7 = uVar2 << 1;
      uVar5 = 0xe;
      uVar1 = DAT_100ce5b0;
      uVar3 = DAT_100ce5b4;
    }
    uVar1 = FUN_10134ab0(param_1,uVar1,param_2,uVar3,uVar5,iVar7);
  }
  else {
    uVar1 = 0xffffff80;
  }
  return uVar1;
}

