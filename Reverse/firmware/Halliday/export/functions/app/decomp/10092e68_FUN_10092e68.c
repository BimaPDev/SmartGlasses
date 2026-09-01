/* FUN_10092e68 @ 0x10092e68 */

void FUN_10092e68(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = DAT_10092eec;
  iVar3 = *DAT_10092eec;
  for (piVar2 = (int *)FUN_10093034(0); piVar2 != (int *)0x0; piVar2 = (int *)FUN_10093034(piVar2))
  {
    if (*(int *)(*piVar2 + 0x10) == param_1) {
      *(undefined4 *)(*piVar2 + 0x10) = 0;
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_10127012();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10127012();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  while (*(int *)(param_1 + 0x24) != 0) {
    FUN_10127012(**(undefined4 **)(param_1 + 0xc));
  }
  FUN_1012b018(DAT_10092ef0,param_1);
  FUN_1009413c(param_1 + 600);
  if (*(int *)(param_1 + 4) != 0) {
    FUN_10094ab8();
  }
  FUN_10094268(param_1,DAT_10092ef4);
  if (iVar3 == param_1) {
    iVar3 = FUN_1012b06a(DAT_10092ef0);
    *piVar1 = iVar3;
  }
  return;
}

