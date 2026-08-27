/* FUN_2c58a34c @ 0x2c58a34c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c58a34c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_2c;
  undefined4 uStack_28;
  
  iStack_2c = *_LAB_2c58a608;
  FUN_2c52f5f4(_LAB_2c58a60c,param_2,param_3,0);
  if (param_2[1] == 0) {
    uStack_5c = *(undefined4 *)(_LAB_2c58a628 + 4);
LAB_2c58a3ba:
    uStack_60 = _LAB_2c58a624;
    FUN_2c593c2c(param_1,&uStack_60,0);
    if (*_LAB_2c58a608 == iStack_2c) {
      uStack_28 = DAT_2c5921fc;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c592204,0xc4,DAT_2c592200);
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  iVar1 = FUN_2c66b624(*param_2,_LAB_2c58a610);
  if (iVar1 == 0) {
    uVar2 = FUN_2c5c55d8();
    iVar1 = FUN_2c5c5d50(uVar2,_LAB_2c58a610);
    if (iVar1 == 0) {
      uStack_5c = *(undefined4 *)(_LAB_2c58a638 + 4);
      goto LAB_2c58a3ba;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

