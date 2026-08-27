/* FUN_140ae07c @ 0x140ae07c */

void FUN_140ae07c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = DAT_140ae114;
  if (*DAT_140ae114 != 0) {
    FUN_1402a6e8(4,0x1e9,DAT_140ae124,DAT_140ae120,DAT_140ae11c,DAT_140ae118);
    return;
  }
  iVar4 = FUN_140a2e48();
  if (iVar4 == 0) {
    FUN_140a2d2c();
  }
  uVar5 = FUN_140a2e48();
  uVar6 = FUN_140a2e54();
  puVar2 = DAT_140ae128;
  FUN_1402a6e8(4,0x1f1,DAT_140ae124,DAT_140ae120,DAT_140ae12c,DAT_140ae118,uVar5,uVar6);
  FUN_140a2e68(puVar2,0x36000);
  FUN_140e5658(*puVar2,0,0x36000);
  iVar4 = FUN_140ae89c(*puVar2,0x36000);
  piVar3 = DAT_140ae130;
  *piVar1 = iVar4;
  if (*piVar3 == 0) {
    iVar4 = FUN_140e5138(DAT_140ae138);
    *piVar3 = iVar4;
  }
  *DAT_140ae134 = 0x36000;
  return;
}

