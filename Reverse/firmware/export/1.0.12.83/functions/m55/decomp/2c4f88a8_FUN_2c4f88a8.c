/* FUN_2c4f88a8 @ 0x2c4f88a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f88a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a4 [128];
  undefined4 uStack_24;
  
  uStack_24 = *_LAB_2c4f8944;
  FUN_2c674268(&uStack_a8,0,0x84);
  uStack_b0 = (undefined2)param_1;
  uStack_ae = (undefined2)param_2;
  iStack_ac = param_5;
  if (param_5 != 0) {
    uStack_a8 = param_3;
    FUN_2c674668(auStack_a4,param_4,param_5);
  }
  func_0x2c4f6890(1,0x15,&uStack_b0,param_5 + 8U & 0xffff);
  if (*_LAB_2c4f8948 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_2c6471b4(*_LAB_2c4f8948,3000);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xb8,_LAB_2c4f8954,_LAB_2c4f8958,_LAB_2c4f894c,_LAB_2c4f8950,param_1,param_2,param_3,
        param_5 + 8U,uVar1);
}

