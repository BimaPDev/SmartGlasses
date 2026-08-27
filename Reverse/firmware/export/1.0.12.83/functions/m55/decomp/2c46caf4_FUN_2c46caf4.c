/* FUN_2c46caf4 @ 0x2c46caf4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c46caf4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c46cb74;
  piStack_1c = (int *)0x0;
  iStack_18 = 0;
  if (param_1 != 0) {
    FUN_2c46c9d8(&piStack_1c,8,param_3,0);
    piVar2 = piStack_1c;
    if (piStack_1c != (int *)0x0) {
      iVar1 = FUN_2c66c4ec(param_1);
      piVar2[1] = iVar1 + 1;
      FUN_2c46c9d8(&iStack_18);
      if (iStack_18 == 0) {
        FUN_2c46c9ec(piStack_1c);
        piVar2 = (int *)0x0;
      }
      else {
        *(undefined1 *)(iStack_18 + piStack_1c[1] + -1) = 0;
        FUN_2c674668(iStack_18,param_1,piStack_1c[1] + -1);
        *piStack_1c = iStack_18;
        piVar2 = piStack_1c;
      }
      goto LAB_2c46cb4e;
    }
  }
  piVar2 = (int *)0x0;
LAB_2c46cb4e:
  if (*_LAB_2c46cb74 == iStack_14) {
    return piVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

