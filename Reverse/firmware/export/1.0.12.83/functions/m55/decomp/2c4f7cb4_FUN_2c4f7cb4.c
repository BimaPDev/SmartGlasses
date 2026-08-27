/* FUN_2c4f7cb4 @ 0x2c4f7cb4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f7cb4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = _DAT_2c4f800c;
  if (2 < *_LAB_2c4f7fb4) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x5d3,_FUN_2c4f7fd0,uRam2c4f7fd4,_FUN_2c4f7ff8,_DAT_2c4f800c,param_2,param_3);
  }
  if (1 < param_2 - 1U) {
    if ((*_LAB_2c4f7fb0 ^ *_LAB_2c4f7fb0) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(0,param_2,*_LAB_2c4f7fb0 ^ *_LAB_2c4f7fb0,0);
  }
  func_0x2c673bd8(5);
  FUN_2c673cc8(3,1);
  FUN_2c4969dc(0x14,0xf);
  FUN_2c4967a0(1);
  *_LAB_2c4f7fb8 = 0;
  if (*_LAB_2c4f7fbc == '\0') {
    uVar3 = func_0x2c490748();
    uVar5 = func_0x2c490750();
    FUN_2c4c3288(uVar3,uVar5);
    FUN_2c4c34d4(0);
  }
  *_LAB_2c4f8010 = (char)param_2;
  puVar1 = _LAB_2c4f7fcc;
  uVar3 = _DAT_2c4f7fc4;
  if (param_2 == 2) {
    uVar6 = 16000;
    uVar5 = 0xb40;
    uVar4 = _DAT_2c4f8164;
  }
  else {
    uVar6 = 8000;
    uVar5 = 0x5a0;
    uVar4 = _DAT_2c4f7fc0;
  }
  *_LAB_2c4f7fc8 = uVar4;
  *puVar1 = uVar6;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x61a,_FUN_2c4f7fd0,uRam2c4f7fd4,uVar3,uVar2,param_2,3,uVar5);
}

