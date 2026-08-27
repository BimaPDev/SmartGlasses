/* FUN_2c47c43a @ 0x2c47c43a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47c43a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uStack_10;
  undefined1 uStack_e;
  undefined4 uStack_c;
  
  uVar1 = _LAB_2c47c4b8;
  uStack_c = *param_1;
  uStack_10 = (undefined2)param_2;
  uStack_e = (undefined1)((uint)param_2 >> 0x10);
  param_4[4] = param_3;
  param_4[5] = param_3;
  *param_4 = param_3;
  param_4[1] = param_3;
  param_4[2] = param_3;
  param_4[3] = param_3;
  iVar2 = FUN_2c46db90();
  (**(code **)(iVar2 + 0x10))(&uStack_10,3);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x1b9,_LAB_2c47c4c4,_LAB_2c47c4c0,_LAB_2c47c4bc,uVar1,(undefined1)uStack_10,
        uStack_10._1_1_,uStack_e,3);
}

