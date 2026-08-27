/* FUN_2c525e8c @ 0x2c525e8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c525e8c(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char acStack_7c [45];
  char acStack_4f [40];
  char cStack_27;
  uint uStack_c;
  
  uStack_c = *_LAB_2c525f04;
  iVar2 = FUN_2c478b68();
  (**(code **)(iVar2 + 0xbc))(acStack_7c);
  if (((acStack_7c[0] == '\0') || (acStack_4f[0] == '\0')) || (cStack_27 == '\0')) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2b,_LAB_2c525f18,_LAB_2c525f14,_LAB_2c525f10);
  }
  uVar4 = FUN_2c66b624(acStack_4f,_LAB_2c525f08);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    uVar1 = 2;
  }
  else {
    uVar4 = FUN_2c66b624(acStack_4f,_LAB_2c525f0c);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar1 = (int)uVar4 == 0;
  }
  if ((*_LAB_2c525f04 ^ uStack_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar1,uVar3,*_LAB_2c525f04 ^ uStack_c,0);
}

