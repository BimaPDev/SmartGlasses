/* FUN_10133992 @ 0x10133992 */

int FUN_10133992(undefined2 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *local_14;
  
  if ((*(char *)(param_1 + 1) == '\x02') && (*(char *)((int)param_1 + 0xd) == '\a')) {
    local_14 = param_2;
    iVar1 = FUN_100c5d4c(0x809);
    if (iVar1 == 0) {
      iVar1 = -0xc;
    }
    else {
      FUN_101327c8(iVar1 + 8,*param_1);
      iVar1 = FUN_100c5e48(0x809,iVar1,&local_14);
      if (iVar1 == 0) {
        *param_2 = *(undefined1 *)(*(int *)(local_14 + 8) + 3);
        FUN_100c1c90();
      }
    }
  }
  else {
    iVar1 = -5;
  }
  return iVar1;
}

