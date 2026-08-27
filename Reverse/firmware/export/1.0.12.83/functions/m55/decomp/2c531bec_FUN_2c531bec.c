/* FUN_2c531bec @ 0x2c531bec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c531bec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uStack_18;
  uint uStack_14;
  
  iVar1 = _LAB_2c531c38;
  iVar4 = _LAB_2c531c38 + 0x40;
  uStack_14 = *_LAB_2c531c3c;
  iVar2 = FUN_2c48e424(param_1,_LAB_2c531c40,param_3,0);
  uStack_18 = *(undefined4 *)(iVar2 + 0x10);
  uVar5 = FUN_2c531984(iVar1,iVar4,&uStack_18);
  if ((int)uVar5 == iVar4) {
    uVar3 = 0xfe;
  }
  else {
    uVar3 = ((int)uVar5 - iVar1 & 0x7ffU) >> 3;
  }
  if ((*_LAB_2c531c3c ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar3,(int)((ulonglong)uVar5 >> 0x20),*_LAB_2c531c3c ^ uStack_14,0);
}

