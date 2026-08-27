/* FUN_2c671a5c @ 0x2c671a5c */

uint FUN_2c671a5c(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *local_80 [2];
  int local_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 *local_70;
  int local_6c;
  
  puVar2 = (undefined4 *)*DAT_2c671ac0;
  if (param_2 < 0x20000000) {
    local_74 = 0x208;
    if (param_2 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (param_2 - 1) * 4;
    }
    local_72 = 0xffff;
    local_80[0] = param_1;
    local_70 = param_1;
    local_6c = local_78;
    uVar1 = FUN_2c671c18(puVar2,local_80,param_3);
    if ((param_2 != 0) && (*local_80[0] = 0, uVar1 < param_2)) {
      return uVar1;
    }
  }
  *puVar2 = 0x8b;
  return 0xffffffff;
}

