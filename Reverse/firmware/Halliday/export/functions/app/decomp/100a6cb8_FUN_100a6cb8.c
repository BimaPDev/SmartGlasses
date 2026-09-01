/* FUN_100a6cb8 @ 0x100a6cb8 */

int FUN_100a6cb8(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int extraout_r1_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 local_2c [2];
  
  uVar6 = param_1[2];
  iVar4 = param_1[3];
  param_1[8] = uVar6 + 0xc;
  param_1[9] = iVar4 + (uint)(0xfffffff3 < uVar6);
  param_1[6] = uVar6;
  param_1[7] = iVar4;
  uVar8 = FUN_100a6f9c(*param_1,uVar6 + 0xc,uVar6,iVar4,param_1[4]);
  uVar2 = DAT_100a6d6c;
  uVar1 = DAT_100a6d68;
  if ((int)uVar8 == 0) {
    uVar3 = uVar6 & DAT_100a6d68;
    local_2c[0] = DAT_100a6d6c;
    FUN_1012ddd6(*param_1,(int)((ulonglong)uVar8 >> 0x20),uVar3,0,local_2c,4);
    local_2c[0] = 0xfefefefe;
    FUN_1012ddd6(*param_1,extraout_r1,uVar3 + 4,0xfffffffb < uVar3,local_2c,4);
    uVar6 = uVar6 + 0x1000;
    iVar4 = extraout_r1_00;
    do {
      local_2c[0] = uVar2;
      FUN_1012ddd6(*param_1,iVar4,uVar6 & uVar1,0,local_2c,4);
      iVar4 = param_1[5];
      uVar6 = uVar6 + 0x1000;
      iVar5 = param_1[3] + iVar4 + (uint)CARRY4(param_1[2],param_1[4]);
      bVar7 = iVar5 == 0;
      if (iVar5 == 0) {
        bVar7 = (uint)(param_1[2] + param_1[4]) <= uVar6;
      }
    } while (!bVar7);
  }
  return (int)uVar8;
}

