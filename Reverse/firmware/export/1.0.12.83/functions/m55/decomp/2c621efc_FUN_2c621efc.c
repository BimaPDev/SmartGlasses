/* FUN_2c621efc @ 0x2c621efc */

void FUN_2c621efc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = FUN_2c62be98(0x40,0x400);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0) {
      return;
    }
  }
  iVar2 = 0;
  while( true ) {
    *(undefined1 *)(iVar1 + iVar2) = 0;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar2 + 1) = 0;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar2 + 2) = 0;
    iVar1 = *(int *)(param_1 + 8) + iVar2;
    iVar2 = iVar2 + 4;
    *(undefined1 *)(iVar1 + 3) = 0xff;
    if (iVar2 == 0x400) break;
    iVar1 = *(int *)(param_1 + 8);
  }
  return;
}

