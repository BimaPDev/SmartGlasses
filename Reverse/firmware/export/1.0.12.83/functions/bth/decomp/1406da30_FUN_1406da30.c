/* FUN_1406da30 @ 0x1406da30 */

void FUN_1406da30(int param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = DAT_1406da5c;
  *(undefined2 *)(param_1 + -2) = param_2;
  *(undefined4 *)(param_1 + -8) = param_3;
  FUN_140739f0(iVar1 + 8,param_1 + -0xc);
  if (*(char *)(iVar1 + 0x19) != '\0') {
    return;
  }
  FUN_14072a44(1,iVar1);
  return;
}

