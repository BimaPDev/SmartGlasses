/* FUN_2c6539ce @ 0x2c6539ce */

undefined4 *
FUN_2c6539ce(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,undefined4 param_9,
            char param_10,char param_11)

{
  char cVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 local_2c;
  char local_2b;
  char local_2a;
  undefined1 local_29;
  
  cVar1 = param_11;
  cVar2 = param_10;
  puVar3 = param_8;
  iVar5 = param_7;
  local_38 = param_3;
  uStack_34 = param_4;
  uVar4 = FUN_2c659524(param_7 + 0x6c);
  *puVar3 = 0;
  local_2c = FUN_2c6523b2(uVar4,0x25);
  if (cVar1 == '\0') {
    local_2b = cVar2;
    local_2a = cVar1;
  }
  else {
    local_29 = 0;
    local_2b = cVar1;
    local_2a = cVar2;
  }
  FUN_2c653130(&local_40,param_2,local_38,uStack_34,param_5,param_6,iVar5,puVar3,param_9,&local_2c);
  local_38 = local_40;
  uStack_34 = uStack_3c;
  iVar5 = FUN_2c652d76(&local_38,&param_5);
  if (iVar5 != 0) {
    *puVar3 = *puVar3 | 2;
  }
  *param_1 = local_38;
  param_1[1] = uStack_34;
  return param_1;
}

