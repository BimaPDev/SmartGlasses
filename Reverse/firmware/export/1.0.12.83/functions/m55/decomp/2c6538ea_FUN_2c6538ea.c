/* FUN_2c6538ea @ 0x2c6538ea */

undefined4 *
FUN_2c6538ea(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,undefined4 param_9)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [3];
  
  puVar1 = param_8;
  iVar3 = param_7;
  uStack_30 = param_3;
  uStack_2c = param_4;
  uVar2 = FUN_2c659a4c(param_7 + 0x6c);
  FUN_2c6592c4(uVar2,auStack_28);
  FUN_2c653130(&uStack_38,param_2,uStack_30,uStack_2c,param_5,param_6,iVar3,puVar1,param_9,
               auStack_28[0]);
  uStack_30 = uStack_38;
  uStack_2c = uStack_34;
  iVar3 = FUN_2c652d76(&uStack_30,&param_5);
  if (iVar3 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return param_1;
}

