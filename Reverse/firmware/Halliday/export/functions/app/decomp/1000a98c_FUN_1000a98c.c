/* FUN_1000a98c @ 0x1000a98c */

void FUN_1000a98c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_1000a9fc;
  iVar3 = *DAT_1000a9f8;
  *(undefined1 *)(DAT_1000a9fc + 1) = 1;
  iVar2 = FUN_1000a894();
  if ((iVar2 != 0) && (*(char *)((int)puVar1 + 5) == '\0')) {
    uVar4 = *puVar1;
    *(undefined1 *)((int)puVar1 + 5) = 1;
    FUN_1000a4cc(uVar4,1);
    FUN_1000a5a8(uVar4,1);
  }
  iVar2 = FUN_10009af4();
  if ((iVar2 != 0) && (*(char *)((int)puVar1 + 6) == '\0')) {
    uVar4 = *puVar1;
    *(undefined1 *)((int)puVar1 + 6) = 1;
    FUN_100098b8(uVar4,1);
    FUN_10009990(uVar4,1);
  }
  *(byte *)((int)puVar1 + 10) = *(byte *)((int)puVar1 + 10) & 0xf0 | 6;
  if (*DAT_1000a9f8 != iVar3) {
    FUN_1013cdc0();
  }
  return;
}

