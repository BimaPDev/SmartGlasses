/* FUN_2c4e865c @ 0x2c4e865c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e865c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uStack_54;
  undefined1 uStack_53;
  char cStack_52;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined1 auStack_30 [36];
  uint uStack_c;
  
  uStack_c = *_LAB_2c4e8724;
  bVar1 = func_0x2c4efeec(*param_2,param_2,param_3,0);
  uStack_34 = 0;
  FUN_2c674268(auStack_30,0,0x24);
  if (bVar1 < 5) {
    uVar3 = extraout_r1;
    if (bVar1 == 0) {
      FUN_2c489114(0,&uStack_54);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x35,DAT_2c4e8730,DAT_2c4e872c,DAT_2c4e8728,uStack_53,(int)cStack_52,uStack_50,
            uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c);
    }
  }
  else {
    uVar4 = FUN_2c4e861c();
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar2 = _LAB_2c4e8734;
    if ((int)uVar4 == 0) goto LAB_2c4e86c8;
  }
  uVar2 = _LAB_2c4e8738;
LAB_2c4e86c8:
  if ((*_LAB_2c4e8724 ^ uStack_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar2,uVar3,*_LAB_2c4e8724 ^ uStack_c,0);
  }
  return;
}

