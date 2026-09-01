/* FUN_100c9a20 @ 0x100c9a20 */

int FUN_100c9a20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined4 local_30 [8];
  
  iVar2 = 0;
  do {
    iVar1 = FUN_100c5e48(0x2018,0,&local_38);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = *(int *)((int)local_38 + 8);
    local_30[iVar2 * 2] = *(undefined4 *)(iVar1 + 1);
    iVar3 = iVar2 + 1;
    local_30[iVar2 * 2 + 1] = *(undefined4 *)(iVar1 + 5);
    FUN_100c1c90();
    iVar2 = iVar3;
  } while (iVar3 != 4);
  local_38 = thunk_FUN_10115958();
  iVar1 = FUN_1011dabe(DAT_100c9a98,local_30,0x20,&local_38,8);
  iVar2 = 0;
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100c9aa0 - DAT_100c9a9c) * 0x20 & 0xff00U | 0x3b0011,DAT_100c9aa8,DAT_100c9aa4
                );
    iVar2 = -5;
  }
  return iVar2;
}

