/* FUN_2c66232c @ 0x2c66232c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_2c66232c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,uint *param_8,
            undefined4 param_9)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  puVar1 = param_8;
  uStack_28 = _LAB_2c6623b4;
  uStack_30 = param_3;
  uStack_2c = param_4;
  FUN_2c6510f6(&uStack_28,0x20);
  FUN_2c661fa0(&uStack_38,param_2,uStack_30,uStack_2c,param_5,param_6,param_7,puVar1,&uStack_28);
  uVar2 = uStack_28;
  uStack_30 = uStack_38;
  uStack_2c = uStack_34;
  auStack_24[0] = FUN_2c64ce10();
  FUN_2c66558c(uVar2,param_9,puVar1,auStack_24);
  iVar3 = FUN_2c656bf6(&uStack_30,&param_5);
  if (iVar3 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  FUN_2c650e60(&uStack_28);
  return param_1;
}

