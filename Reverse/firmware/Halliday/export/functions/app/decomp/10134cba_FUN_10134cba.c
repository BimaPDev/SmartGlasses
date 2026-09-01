/* FUN_10134cba @ 0x10134cba */

void FUN_10134cba(undefined4 param_1,int param_2,undefined2 *param_3,uint param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined1 local_40 [2];
  undefined2 local_3e;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 *local_34;
  uint local_30;
  uint uStack_2c;
  undefined4 *local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((param_2 == 0) && (uVar4 = param_4 & 3, uVar4 == 0)) {
    puVar2 = (undefined2 *)((int)param_3 + (param_4 & 0x3fc));
    uVar3 = 0;
    do {
      if (param_3 == puVar2) {
        FUN_10134c80(param_1,uVar3,param_5);
        return;
      }
      uVar3 = param_3[1];
      if (*(char *)(param_5 + 4) == '\0') {
        local_3e = 0x2800;
      }
      else {
        local_3e = 0x2801;
      }
      local_3c = *param_5;
      local_24 = *param_3;
      local_28 = &local_3c;
      local_40[0] = 0;
      local_22 = 0;
      local_38 = uVar3;
      local_34 = local_40;
      local_30 = uVar4;
      uStack_2c = uVar4;
      iVar1 = (*(code *)param_5[1])(param_1,&local_34,param_5);
      param_3 = param_3 + 2;
    } while (iVar1 != 0);
  }
  else {
    (*(code *)param_5[1])(param_1,0,param_5);
  }
  return;
}

