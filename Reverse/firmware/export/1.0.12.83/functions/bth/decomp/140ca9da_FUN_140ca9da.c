/* FUN_140ca9da @ 0x140ca9da */

undefined4 *
FUN_140ca9da(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,undefined4 param_9,
            byte param_10,byte param_11)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  uint local_34;
  uint uStack_30;
  undefined4 local_2c;
  
  puVar1 = param_8;
  iVar3 = param_7;
  uVar4 = (uint)param_11;
  uVar5 = (uint)param_10;
  local_40 = param_3;
  uStack_3c = param_4;
  uVar2 = FUN_140d2a04(param_7 + 0x6c);
  *puVar1 = 0;
  local_38 = FUN_140c9d5e(uVar2,0x25);
  if (uVar4 == 0) {
    local_34 = uVar5;
    uStack_30 = 0;
  }
  else {
    local_2c = 0;
    local_34 = uVar4;
    uStack_30 = uVar5;
  }
  FUN_140ca144(&local_48,param_2,local_40,uStack_3c,param_5,param_6,iVar3,puVar1,param_9,&local_38);
  local_40 = local_48;
  uStack_3c = uStack_44;
  iVar3 = FUN_140c9d82(&local_40,&param_5);
  if (iVar3 != 0) {
    *puVar1 = *puVar1 | 2;
  }
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  return param_1;
}

