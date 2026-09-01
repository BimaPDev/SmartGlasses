/* FUN_100dd61c @ 0x100dd61c */

int * FUN_100dd61c(int param_1,uint param_2)

{
  int iVar1;
  
  if ((*(byte *)((int)DAT_100dd64c + 5) == param_2) && (param_1 == *DAT_100dd64c)) {
    iVar1 = 0;
  }
  else {
    if ((*(byte *)((int)DAT_100dd64c + 0x21) != param_2) || (param_1 != DAT_100dd64c[7])) {
      return (int *)0x0;
    }
    iVar1 = 1;
  }
  return DAT_100dd64c + iVar1 * 7;
}

