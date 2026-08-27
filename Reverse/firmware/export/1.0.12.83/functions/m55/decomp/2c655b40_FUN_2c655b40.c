/* FUN_2c655b40 @ 0x2c655b40 */

int * FUN_2c655b40(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2[6] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c655b68);
  }
  iVar2 = *param_2;
  iVar1 = param_2[1];
  *param_1 = (int)(param_1 + 2);
  FUN_2c654a10(param_1,iVar2,iVar2 + iVar1 * 4);
  return param_1;
}

