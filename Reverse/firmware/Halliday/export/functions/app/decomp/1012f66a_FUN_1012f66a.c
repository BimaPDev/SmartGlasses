/* FUN_1012f66a @ 0x1012f66a */

void FUN_1012f66a(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_1012f600(param_2,6,0);
  if (iVar1 != 0) {
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_2 + 2);
    *(undefined1 *)(param_2 + 2) = 5;
  }
  return;
}

