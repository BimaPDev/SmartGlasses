/* FUN_140c8994 @ 0x140c8994 */

int * FUN_140c8994(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2[6] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140cb800(DAT_140c89b8);
  }
  iVar2 = *param_2;
  iVar1 = param_2[1];
  *param_1 = (int)(param_1 + 2);
  FUN_140c7be0(param_1,iVar2,iVar1 + iVar2);
  return param_1;
}

