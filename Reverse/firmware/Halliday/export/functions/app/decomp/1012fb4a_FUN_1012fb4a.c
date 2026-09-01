/* FUN_1012fb4a @ 0x1012fb4a */

int FUN_1012fb4a(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = (param_1[2] + *param_1) - param_1[1], iVar1 <= param_2)) {
    param_2 = iVar1;
  }
  return param_2;
}

