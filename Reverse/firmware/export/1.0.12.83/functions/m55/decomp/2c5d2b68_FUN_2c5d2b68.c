/* FUN_2c5d2b68 @ 0x2c5d2b68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d2b68(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uStack_10;
  int iStack_c;
  
  iStack_c = *_LAB_2c5d2bb4;
  if (((param_2 != (int *)0x0) && (iVar1 = FUN_2c621080(param_2,param_2,param_3,0), iVar1 != 0)) &&
     (*param_2 == 0x3f7)) {
    uStack_10 = (uint)*(byte *)(iVar1 + 0xe0);
    FUN_2c620fa4(0x3f8,&uStack_10);
  }
  if (*_LAB_2c5d2bb4 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

