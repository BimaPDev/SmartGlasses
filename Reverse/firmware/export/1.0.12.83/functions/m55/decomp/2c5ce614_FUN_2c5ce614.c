/* FUN_2c5ce614 @ 0x2c5ce614 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ce614(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *_LAB_2c5ce698;
  iVar1 = FUN_2c621080(param_2,param_2,param_3,0);
  if (iVar1 != 0) {
    if (*param_2 == 0x138c) {
      *(undefined1 *)(iVar1 + 0x76) = 1;
      if (*(char *)(iVar1 + 0x52) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5ce6a4,0x23d,_LAB_2c5ce6a0,_LAB_2c5ce69c);
      }
    }
    else {
      *(undefined1 *)(iVar1 + 0x76) = 0;
    }
  }
  if (*_LAB_2c5ce698 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

