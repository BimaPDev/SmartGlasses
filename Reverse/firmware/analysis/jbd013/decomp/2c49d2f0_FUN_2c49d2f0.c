/* FUN_2c49d2f0 @ 0x2c49d2f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49d2f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bStack_16;
  undefined1 uStack_15;
  uint uStack_14;
  
  iVar1 = _LAB_2c49d37c;
  uStack_14 = *_LAB_2c49d378;
  if (*(int *)(_LAB_2c49d37c + 0x48) == 1) {
    uStack_15 = 0;
    uVar3 = FUN_2c4bd450(*(undefined1 *)(_LAB_2c49d37c + 4),*(undefined2 *)(_LAB_2c49d37c + 8),
                         &uStack_15,1,&bStack_16,1);
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xdf,_LAB_2c49d388,_LAB_2c49d384,_LAB_2c49d380,uStack_15,(int)uVar3);
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
    uVar2 = (uint)bStack_16;
    *(uint *)(iVar1 + 0x10) = uVar2;
    if (uVar2 != 0xa0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  if ((*_LAB_2c49d378 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar2,param_2,*_LAB_2c49d378 ^ uStack_14,0);
}

