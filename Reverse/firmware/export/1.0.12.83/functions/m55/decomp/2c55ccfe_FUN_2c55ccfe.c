/* FUN_2c55ccfe @ 0x2c55ccfe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c55ccfe(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  int iStack_14;
  
  iStack_24 = *param_4;
  iStack_14 = *_LAB_2c55cd60;
  uStack_20 = (undefined2)param_4[1];
  uStack_28 = 7;
  uStack_1e = (undefined1)((uint)param_4[1] >> 0x10);
  uStack_1d = 0;
  piStack_2c = &iStack_24;
  func_0x2c65e4c0(param_1,&piStack_2c);
  if (piStack_2c != &iStack_24) {
    thunk_FUN_2c669588(piStack_2c,iStack_24 + 1);
  }
  if (*_LAB_2c55cd60 == iStack_14) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

