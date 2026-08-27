/* FUN_2c4e118c @ 0x2c4e118c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e118c(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = _LAB_2c4e121c;
  uVar2 = _LAB_2c4e1218;
  FUN_2c4e0504(_LAB_2c4e1220,7,0,0,_LAB_2c4e121c,0xa4,_LAB_2c4e1218,0x1300,_LAB_2c4e1214,param_2);
  if (param_2 < (uint)param_1[0x2c]) {
                    /* WARNING: Could not recover jumptable at 0x2c4e11d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x54))(param_1,param_2);
    return uVar2;
  }
  FUN_2c4e0504(_LAB_2c4e1220,7,0,0,uVar1,0xa6,uVar2,0x1300,_LAB_2c4e1228,_LAB_2c4e1224);
  param_1[0x23] = param_1[0x2b];
  param_1[0x24] = param_1[0x2c];
  param_1[0x22] = param_1[0x2a];
  return 1;
}

