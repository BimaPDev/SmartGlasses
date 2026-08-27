/* FUN_14050b70 @ 0x14050b70 */

void FUN_14050b70(void)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_1404a1b4();
  puVar1 = DAT_14050b9c;
  uVar4 = *(undefined4 *)(iVar3 + 0x34);
  *DAT_14050b9c = 0x400;
  uVar2 = DAT_14050ba4;
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined4 *)(puVar1 + 1) = uVar2;
  FUN_14093198(uVar4);
  return;
}

