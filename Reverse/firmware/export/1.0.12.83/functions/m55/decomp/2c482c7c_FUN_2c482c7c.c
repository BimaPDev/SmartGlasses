/* FUN_2c482c7c @ 0x2c482c7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c482c7c(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *_LAB_2c482d00;
  *_LAB_2c482cfc = 1;
  func_0x2c4775a8(param_1,0);
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_2c483b08(&uStack_14,param_1);
  iVar1 = FUN_2c46db38();
  (**(code **)(iVar1 + 0x18))(&uStack_14);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xfe,_LAB_2c482d10,_LAB_2c482d0c,_LAB_2c482d08,_LAB_2c482d04,0);
}

