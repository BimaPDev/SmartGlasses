/* FUN_2c6646dc @ 0x2c6646dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c6646dc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7,int param_8,undefined4 param_9,
            undefined4 *param_10)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int aiStack_2c [2];
  
  uStack_38 = param_3;
  uStack_34 = param_4;
  uVar2 = FUN_2c65faf0(param_8 + 0x6c);
  aiStack_2c[0] = _LAB_2c664780;
  if (param_7 == '\0') {
    FUN_2c664260(&uStack_40,param_2,uStack_38,uStack_34,param_5,param_6,param_8,param_9,aiStack_2c);
  }
  else {
    FUN_2c663e68();
  }
  iVar3 = *(int *)(aiStack_2c[0] + -0xc);
  uStack_38 = uStack_40;
  uStack_34 = uStack_3c;
  if (iVar3 != 0) {
    func_0x2c651998(param_10,iVar3);
    iVar1 = aiStack_2c[0];
    iVar3 = aiStack_2c[0] + iVar3;
    FUN_2c65169c(param_10);
    FUN_2c6565d4(uVar2,iVar1,iVar3,*param_10);
  }
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  FUN_2c650e60(aiStack_2c);
  return param_1;
}

