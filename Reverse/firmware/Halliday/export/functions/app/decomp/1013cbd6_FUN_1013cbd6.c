/* FUN_1013cbd6 @ 0x1013cbd6 */

int FUN_1013cbd6(int param_1,int param_2)

{
  int iVar1;
  
  if ((int)*(char *)(param_1 + 0xe) == (int)*(char *)(param_2 + 0xe)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(param_2 + 0xe) - (int)*(char *)(param_1 + 0xe);
  }
  return iVar1;
}

