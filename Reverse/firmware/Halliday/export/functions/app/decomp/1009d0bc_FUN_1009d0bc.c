/* FUN_1009d0bc @ 0x1009d0bc */

undefined4 FUN_1009d0bc(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_54;
  
  uVar1 = FUN_1012cce8(param_2);
  uVar2 = FUN_1009dbd4();
  iVar3 = FUN_1012cf1a(&local_84,uVar1,param_3,0x400);
  if (iVar3 == 1) {
    iVar3 = *param_1;
    iVar4 = param_1[1];
    if ((param_3 < 0xfd) || (param_4 != 0)) {
      local_7c = (undefined2)iVar4;
      local_7e = (undefined2)iVar3;
      local_70 = (undefined2)(param_1[3] + 1);
      local_80 = 2;
      local_78 = (undefined2)(param_1[2] + 1);
      local_7a = 4;
      local_74 = 4;
      local_6e = 4;
      local_68 = 4;
      local_62 = 0;
      local_76 = local_7c;
      local_72 = local_78;
      local_6c = local_7e;
      local_6a = local_70;
      local_66 = local_7e;
      local_64 = local_7c;
      uVar1 = FUN_1012cf78(param_4);
      fVar7 = (float)VectorSignedToFloat(param_1[3],(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = (float)VectorSignedToFloat(param_1[2],(byte)(in_fpscr >> 0x16) & 3);
      uVar6 = VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
      uVar5 = VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
      iVar3 = FUN_1010ef00(uVar5,uVar6,fVar8 + 1.0,fVar7 + 1.0,&local_60,1,3,0x20,&local_80);
      if (iVar3 == 0) {
        iVar3 = FUN_1010efdc(uVar2,&local_60,0x1900,0,uVar1,local_84);
        if (iVar3 == 0) {
          iVar3 = FUN_1009dc5c(param_1);
          if (iVar3 != 1) {
            return 0;
          }
          iVar3 = FUN_1013b79e(&local_60);
          if (iVar3 == 0) {
            return 1;
          }
          uVar2 = 0x9b;
          uVar1 = DAT_1009d23c;
        }
        else {
          uVar2 = 0x95;
          uVar1 = DAT_1009d238;
        }
      }
      else {
        uVar2 = 0x91;
        uVar1 = DAT_1009d234;
      }
    }
    else {
      local_54 = (param_1[3] + 1) - iVar4;
      local_58 = (param_1[2] + 1) - iVar3;
      local_60 = iVar3;
      iStack_5c = iVar4;
      iVar3 = FUN_1010d108(uVar2,&local_60,local_84);
      if (iVar3 == 0) {
        iVar3 = FUN_1009dc5c(param_1);
        if (iVar3 != 1) {
          return 0;
        }
        return 1;
      }
      uVar2 = 0x7a;
      uVar1 = DAT_1009d228;
    }
    FUN_10094174(3,DAT_1009d230,uVar2,DAT_1009d22c,uVar1,iVar3);
  }
  return 0;
}

