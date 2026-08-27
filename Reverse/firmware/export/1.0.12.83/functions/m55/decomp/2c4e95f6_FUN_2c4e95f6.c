/* FUN_2c4e95f6 @ 0x2c4e95f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e95f6(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  uVar2 = *(undefined4 *)(param_4 + 4);
  iStack_c = *param_3;
  iVar1 = FUN_2c66b624(*(undefined4 *)(param_4 + 8),param_2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_2c66b624(uVar2,_LAB_2c4e971c);
    if (iVar1 == 0) {
      iStack_1c = *_LAB_2c4e9720;
      iStack_18 = _LAB_2c4e9720[1];
      iStack_14 = _LAB_2c4e9720[2];
      iStack_10 = _LAB_2c4e9720[3];
      (**(code **)(_LAB_2c4e9724 + 0x68))(&iStack_1c,0x10);
    }
    else {
      iVar1 = FUN_2c66b624(uVar2,_LAB_2c4e9728);
      if (iVar1 == 0) {
        iStack_1c = *_LAB_2c4e9720;
        iStack_18 = _LAB_2c4e9720[1];
        iStack_14 = _LAB_2c4e9720[2];
        iStack_10 = _LAB_2c4e9720[3];
        (**(code **)(_LAB_2c4e9724 + 0x70))(&iStack_1c,0x10);
      }
    }
LAB_2c4e962c:
    if (*_LAB_2c4e9714 == iStack_c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  iVar1 = FUN_2c66b624(uVar2,_LAB_2c4e971c);
  if (iVar1 == 0) {
    iStack_1c = iVar1;
    iStack_18 = iVar1;
    iStack_14 = iVar1;
    iStack_10 = iVar1;
    (**(code **)(_LAB_2c4e9724 + 0x6c))(&iStack_1c,0x10);
    uVar2 = 0x324;
  }
  else {
    iVar1 = FUN_2c66b624(uVar2,_LAB_2c4e9728);
    if (iVar1 != 0) goto LAB_2c4e962c;
    iStack_1c = iVar1;
    iStack_18 = iVar1;
    iStack_14 = iVar1;
    iStack_10 = iVar1;
    (**(code **)(_LAB_2c4e9724 + 0x74))(&iStack_1c,0x10);
    uVar2 = 0x32e;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,uVar2,_LAB_2c4e9734,_LAB_2c4e9730,_LAB_2c4e972c);
}

