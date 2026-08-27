/* FUN_140dc344 @ 0x140dc344 */

int FUN_140dc344(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *local_80 [2];
  int local_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined1 *local_70;
  int local_6c;
  
  puVar2 = (undefined4 *)*DAT_140dc3a8;
  if (param_2 < 0) {
    iVar1 = -1;
    *puVar2 = 0x8b;
  }
  else {
    local_74 = 0x208;
    if (param_2 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = param_2 + -1;
    }
    local_72 = 0xffff;
    local_80[0] = param_1;
    local_70 = param_1;
    local_6c = local_78;
    iVar1 = FUN_140e1084(puVar2,local_80,param_3);
    if (iVar1 < -1) {
      *puVar2 = 0x8b;
    }
    if (param_2 != 0) {
      *local_80[0] = 0;
    }
  }
  return iVar1;
}

