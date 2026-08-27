/* FUN_2c531b04 @ 0x2c531b04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c531b04(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iStack_18;
  uint uStack_14;
  
  uStack_14 = *_LAB_2c531bb8;
  if (param_1 != 0) {
    iVar1 = FUN_2c48e424(param_1,_LAB_2c531bbc,param_3,0);
    if (iVar1 == 0) {
      uVar4 = 0x88;
      uVar5 = _LAB_2c531be4;
LAB_2c531b94:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c531bd8,uVar4,_LAB_2c531be0,uVar5);
    }
    iVar2 = FUN_2c48e424(iVar1,_LAB_2c531bc0);
    if (iVar2 == 0) {
      uVar4 = 0x8c;
      uVar5 = _LAB_2c531bdc;
      goto LAB_2c531b94;
    }
    uVar5 = *(undefined4 *)(iVar2 + 0x10);
    iVar2 = FUN_2c66b624(uVar5,_LAB_2c531bc4);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c531bd8,0x6d,_LAB_2c531bd0,_LAB_2c531bd4,_LAB_2c531bd0,uVar5);
    }
    uVar6 = FUN_2c48e424(iVar1,_LAB_2c531bc8);
    iVar1 = _LAB_2c531bcc;
    param_2 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      uVar4 = 0x91;
      uVar5 = _LAB_2c531be8;
      goto LAB_2c531b94;
    }
    iStack_18 = *(int *)((int)uVar6 + 0x10);
    if (iStack_18 != 0) {
      iVar2 = _LAB_2c531bcc + 0x48;
      uVar6 = FUN_2c531984(_LAB_2c531bcc,iVar2,&iStack_18);
      param_2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != iVar2) {
        uVar3 = ((int)uVar6 - iVar1 & 0x7ffU) >> 3;
        goto LAB_2c531b64;
      }
    }
  }
  uVar3 = 0xfe;
LAB_2c531b64:
  if ((*_LAB_2c531bb8 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar3,param_2,*_LAB_2c531bb8 ^ uStack_14,0);
}

