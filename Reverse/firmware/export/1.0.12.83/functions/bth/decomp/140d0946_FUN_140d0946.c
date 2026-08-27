/* FUN_140d0946 @ 0x140d0946 */

undefined4 *
FUN_140d0946(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,undefined4 param_9)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28 [3];
  
  puVar1 = param_8;
  iVar3 = param_7;
  local_30 = param_3;
  uStack_2c = param_4;
  uVar2 = FUN_140ccaa8(param_7 + 0x6c);
  FUN_140cc314(uVar2,local_28);
  FUN_140ce404(&local_38,param_2,local_30,uStack_2c,param_5,param_6,iVar3,puVar1,param_9,local_28[0]
              );
  local_30 = local_38;
  uStack_2c = uStack_34;
  iVar3 = FUN_140c5efe(&local_30,&param_5);
  if (iVar3 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  return param_1;
}

