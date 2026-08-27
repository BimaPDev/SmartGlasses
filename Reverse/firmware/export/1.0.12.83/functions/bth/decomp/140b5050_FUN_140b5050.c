/* FUN_140b5050 @ 0x140b5050 */

undefined4 FUN_140b5050(int *param_1,code *param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_1402b0f8(DAT_140b5084,DAT_140b5080,param_3,param_4,param_4);
}

