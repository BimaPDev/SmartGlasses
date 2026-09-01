/* FUN_100dd2dc @ 0x100dd2dc */

int * FUN_100dd2dc(int param_1,uint param_2)

{
  int iVar1;
  
  if ((*(byte *)((int)DAT_100dd308 + 5) == param_2) && (param_1 == *DAT_100dd308)) {
    iVar1 = 0;
  }
  else {
    if ((*(byte *)((int)DAT_100dd308 + 0x19) != param_2) || (param_1 != DAT_100dd308[5])) {
      return (int *)0x0;
    }
    iVar1 = 1;
  }
  return DAT_100dd308 + iVar1 * 5;
}

