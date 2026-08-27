/* FUN_2c48a4d0 @ 0x2c48a4d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48a4d0(char param_1,undefined4 param_2,undefined2 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c48a5d0;
  if (*_LAB_2c48a5cc != '\0') {
    iVar2 = func_0x2c48a894(param_1);
    puVar1 = _LAB_2c48a5e4;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xd6,_LAB_2c48a5e0,_LAB_2c48a5dc,_LAB_2c48a5d8);
    }
    if (param_1 == '\x1a') {
      FUN_2c674668(&uStack_54,param_2,param_3);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xdc,_LAB_2c48a5e0,_LAB_2c48a5dc,_LAB_2c48a5ec,_LAB_2c48a5e8,*puVar1,(int)fStack_4c);
    }
    if (param_1 == '\x1b') {
      FUN_2c674668(&uStack_54,param_2,param_3);
      if ((code *)*_LAB_2c48a5d4 != (code *)0x0) {
        (*(code *)*_LAB_2c48a5d4)
                  (uStack_54,uStack_50,fStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,
                   uStack_34,uStack_30,uStack_2c,uStack_28,uStack_24,uStack_20);
      }
    }
  }
  if (*_LAB_2c48a5d0 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

