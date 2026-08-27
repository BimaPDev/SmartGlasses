/* FUN_2c4858f0 @ 0x2c4858f0 */

undefined4 FUN_2c4858f0(int *param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != (code *)0x0)) {
    piVar3 = (int *)*param_1;
    do {
      piVar1 = piVar3;
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      piVar3 = (int *)*piVar1;
      iVar2 = (*param_2)(piVar1[1],param_3);
    } while (iVar2 == 0);
    return piVar1[1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(LAB_2c485924,DAT_2c485920,param_3,param_4,param_4);
}

