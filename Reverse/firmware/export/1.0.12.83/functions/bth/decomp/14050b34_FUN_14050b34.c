/* FUN_14050b34 @ 0x14050b34 */

void FUN_14050b34(void)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_1404a1b4();
  uVar2 = DAT_14050b6c;
  puVar1 = DAT_14050b64;
  *(undefined4 *)(DAT_14050b64 + 1) = DAT_14050b68;
  uVar4 = *(undefined4 *)(iVar3 + 0x34);
  *(undefined1 *)(puVar1 + 5) = 1;
  *puVar1 = 0x602;
  FUN_14093198(uVar4,1,puVar1,0,1,uVar2);
  return;
}

