/* FUN_100a6ab8 @ 0x100a6ab8 */

uint FUN_100a6ab8(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_2c [2];
  
  uVar5 = param_1[8];
  iVar6 = param_1[9];
  if ((param_3 & 3) != 0) {
    FUN_10119dc2(DAT_100a6cb0,DAT_100a6cac,DAT_100a6ca8,0x26c,param_1,param_2);
    FUN_1011a1f0(DAT_100a6ca8,0x26c,param_3,param_4);
  }
  if ((int)((uint)*(byte *)(param_1 + 10) << 0x1f) < 0) {
    uVar7 = FUN_100a6950(*param_1,uVar5);
    uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar1 = (uint)uVar7;
    if (uVar1 != 3) {
      if (uVar1 < 2) {
        uVar4 = 0x1000 - (uVar5 - param_1[2] & 0xfff);
        if (param_3 < uVar4) {
          uVar1 = FUN_1012ddd6(*param_1,uVar2,uVar5,iVar6,param_2,param_3);
          param_1[8] = uVar5 + param_3;
          param_1[9] = iVar6 + (uint)CARRY4(uVar5,param_3);
          return uVar1;
        }
        if (-1 < (int)((uint)*(byte *)(param_1 + 10) << 0x1e)) {
          return 0xf4;
        }
        uVar1 = FUN_1012ddd6(*param_1,uVar2,uVar5,iVar6,param_2,uVar4);
        if (uVar1 != 0) {
          return uVar1;
        }
        local_2c[0] = 0xfcfcfcfc;
        uVar1 = FUN_1012ddd6(*param_1,local_2c,(uVar5 & 0xfffff000) + 8,
                             iVar6 + (uint)(0xfffffff7 < (uVar5 & 0xfffff000)),local_2c,4);
        if (uVar1 != 0) {
          return uVar1;
        }
      }
      else {
        uVar4 = 0;
      }
      uVar4 = param_3 - uVar4;
      while( true ) {
        uVar1 = FUN_1012dd0c(param_1,uVar5 - 4);
        uVar2 = 0;
        if (param_1[7] == 0 && param_1[6] == uVar1) {
          uVar7 = FUN_1012dd0c(param_1,uVar1);
          uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
          param_1[6] = (int)uVar7;
          param_1[7] = 0;
        }
        uVar5 = FUN_100a6f9c(*param_1,uVar2,uVar1,0,0x1000);
        if (uVar5 != 0) {
          return uVar5;
        }
        local_2c[0] = DAT_100a6cb4;
        FUN_1012ddd6(*param_1);
        local_2c[0] = 0xfefefefe;
        uVar7 = FUN_1012ddd6(*param_1,0xfefefefe,(uVar1 & 0xfffff000) + 4,
                             0xfffffffb < (uVar1 & 0xfffff000),local_2c,4);
        uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if ((uint)uVar7 != 0) {
          return (uint)uVar7;
        }
        uVar3 = uVar1 + 0xc;
        uVar5 = (uint)(0xfffffff3 < uVar1);
        iVar6 = (param_3 - uVar4 & 0xfffffffc) + param_2;
        if (uVar4 < 0xff4) break;
        uVar7 = FUN_1012ddd6(*param_1,uVar2,uVar3,uVar5,iVar6,0xff4);
        if ((uint)uVar7 != 0) {
          return (uint)uVar7;
        }
        local_2c[0] = 0xfcfcfcfc;
        uVar5 = FUN_1012ddd6(*param_1,(int)((ulonglong)uVar7 >> 0x20),(uVar3 & 0xfffff000) + 8,
                             uVar5 + (0xfffffff7 < (uVar3 & 0xfffff000)),local_2c,4);
        uVar4 = uVar4 - 0xff4;
        if (uVar5 != 0) {
          return uVar5;
        }
        uVar5 = uVar1 + 0x1000;
        param_1[8] = uVar5;
        param_1[9] = (uint)(0xffffefff < uVar1);
      }
      uVar1 = FUN_1012ddd6(*param_1,uVar2,uVar3,uVar5,iVar6,uVar4);
      if (uVar1 == 0) {
        param_1[8] = uVar3 + uVar4;
        param_1[9] = uVar5 + CARRY4(uVar3,uVar4);
      }
    }
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}

