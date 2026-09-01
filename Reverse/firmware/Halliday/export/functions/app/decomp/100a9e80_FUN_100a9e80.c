/* FUN_100a9e80 @ 0x100a9e80 */

void FUN_100a9e80(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_100a9e94;
  iVar2 = FUN_1012d608(*DAT_100a9e94);
  if (iVar2 < 1) {
    *(undefined1 *)((int)puVar1 + 5) = 1;
  }
  return;
}

