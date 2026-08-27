/* FUN_1406c408 @ 0x1406c408 */

void FUN_1406c408(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  
  uVar1 = *(undefined1 *)(param_1 + 5);
  cVar2 = *(char *)(param_1 + 4);
  uVar3 = *(undefined2 *)(param_1 + 6);
  uVar4 = *(undefined2 *)(param_1 + 8);
  iVar5 = FUN_1406d034(uVar1,*(undefined2 *)(param_1 + 2));
  if ((iVar5 != 0) && (*(char *)(iVar5 + 0x13) == cVar2)) {
    if ((*(char *)(iVar5 + 0x11) == '\x15') || (-1 < (int)((uint)*(byte *)(iVar5 + 0x12) << 0x1a)))
    {
      *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) | 0x20;
      *(undefined2 *)(iVar5 + 0x24) = uVar4;
      *(undefined1 *)(iVar5 + 0x13) = 0xff;
      FUN_1406d210(uVar1,iVar5,6,uVar3);
      return;
    }
  }
  return;
}

