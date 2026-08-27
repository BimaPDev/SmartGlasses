/* FUN_2c504c98 @ 0x2c504c98 */

void FUN_2c504c98(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  
  piVar3 = *(int **)(param_1 + 0xc);
  piVar1 = *(int **)(param_1 + 8);
  do {
    if (piVar1 == piVar3) {
      if (*(int **)(param_1 + 0x10) == piVar3) {
        local_c = param_2;
        FUN_2c504bcc(param_1 + 8,piVar3,&local_c);
        return;
      }
      *piVar3 = param_2;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
      return;
    }
    iVar2 = *piVar1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != param_2);
  return;
}

