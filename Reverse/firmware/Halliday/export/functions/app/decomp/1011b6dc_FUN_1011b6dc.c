/* FUN_1011b6dc @ 0x1011b6dc */

int FUN_1011b6dc(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)((param_2 & 0xfffffffc) + (int)param_1);
  for (; param_1 != piVar1; param_1 = param_1 + 1) {
    iVar2 = iVar2 + *param_1;
  }
  return iVar2;
}

