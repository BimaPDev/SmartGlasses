/* FUN_2c5739f0 @ 0x2c5739f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5739f0(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_20;
  uint uStack_14;
  
  uStack_14 = *_LAB_2c573a50;
  uVar2 = FUN_2c5c561c();
  uStack_20 = FUN_2c672a48((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1000,0);
  iVar1 = FUN_2c669224(&uStack_20);
  iVar1 = *(int *)(iVar1 + 0x10);
  uVar2 = FUN_2c669224(&uStack_20);
  if ((*_LAB_2c573a50 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(iVar1 + 1 == param_1 && *(int *)((int)uVar2 + 0xc) + 1 == param_2,
                 (int)((ulonglong)uVar2 >> 0x20),*_LAB_2c573a50 ^ uStack_14,0);
}

