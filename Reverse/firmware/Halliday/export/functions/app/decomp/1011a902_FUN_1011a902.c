/* FUN_1011a902 @ 0x1011a902 */

void FUN_1011a902(void)

{
  uint uVar1;
  undefined4 in_r3;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1005608c();
  iVar2 = *(int *)((int)uVar3 + 0x4c);
  if (-1 < *(int *)(iVar2 + 0x18) << 5) {
    uVar1 = *(uint *)(iVar2 + 0x18) | 0x4000000;
    *(uint *)(iVar2 + 0x18) = uVar1;
    thunk_FUN_1011598c(300,(int)((ulonglong)uVar3 >> 0x20),uVar1,in_r3);
    return;
  }
  return;
}

