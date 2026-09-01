/* FUN_10122ab6 @ 0x10122ab6 */

int FUN_10122ab6(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)((int)param_1 + 7) == '\x03') {
    iVar2 = param_1[2];
    iVar4 = param_1[6];
    iVar3 = iVar2;
    do {
      if (iVar3 == iVar2 + iVar4) {
        *(undefined1 *)((int)param_1 + 7) = 0;
        goto LAB_10122ace;
      }
      iVar1 = FUN_101228d0(*param_1,iVar3,iVar3 + 1);
      iVar3 = iVar3 + 1;
    } while (iVar1 == 0);
  }
  else {
LAB_10122ace:
    iVar1 = 0;
  }
  return iVar1;
}

