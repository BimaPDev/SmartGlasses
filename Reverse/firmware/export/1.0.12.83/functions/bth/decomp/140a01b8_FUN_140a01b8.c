/* FUN_140a01b8 @ 0x140a01b8 */

void FUN_140a01b8(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = DAT_140a020c;
  if (*DAT_140a020c != 0) {
    uVar2 = FUN_140a047c();
    iVar3 = *piVar1;
    *(undefined4 *)(iVar3 + 0x154) = 0;
    *(undefined4 *)(iVar3 + 0x158) = 0;
    *(undefined4 *)(iVar3 + 0x140) = 0;
    *(undefined1 *)(iVar3 + 0x13c) = 0xff;
    *(undefined2 *)(iVar3 + 0x148) = 0;
    *(undefined1 *)(iVar3 + 0x14a) = 0;
    *(undefined2 *)(iVar3 + 0x14e) = 0;
    *(undefined2 *)(iVar3 + 0x150) = 0;
    *(undefined1 *)(iVar3 + 0x15c) = 0;
    *(undefined2 *)(iVar3 + 0x15e) = 0;
    *(undefined4 *)(iVar3 + 0x168) = 0;
    FUN_140a0ebc();
    FUN_140a04dc(uVar2);
    return;
  }
  return;
}

