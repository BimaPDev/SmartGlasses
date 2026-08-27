/* FUN_1404a374 @ 0x1404a374 */

void FUN_1404a374(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_1404a4e4;
  iVar5 = param_1 + 0xc;
  if ((*(char *)(DAT_1404a4e4 + 6) != '\0') &&
     (iVar2 = FUN_140db784(iVar5,DAT_1404a4e4,6), iVar2 == 0)) {
    FUN_1402a6e8(4,0xd9b,DAT_1404a4f4,DAT_1404a4f0,DAT_1404a4fc,DAT_1404a4f8);
    *(undefined1 *)(param_1 + 0x12) = 0;
    FUN_140e5718(*(undefined4 *)(param_1 + 0x18));
    FUN_140e5268(param_1);
    return;
  }
  iVar2 = FUN_1409566c();
  if (iVar2 != 0) {
    FUN_1402a6e8(4,0xda2,DAT_1404a4f4,DAT_1404a4f0,DAT_1404a500,DAT_1404a4f8);
    FUN_140e5378(*(undefined4 *)(param_1 + 0x18),5000);
    return;
  }
  iVar2 = FUN_14051668();
  if (iVar2 != 0) {
    FUN_1402a6e8(4,0xda9,DAT_1404a4f4,DAT_1404a4f0,DAT_1404a50c,DAT_1404a4f8);
    FUN_140e5378(*(undefined4 *)(param_1 + 0x18),3000);
    return;
  }
  iVar2 = FUN_1405165c();
  cVar1 = *(char *)(iVar4 + 6);
  if (iVar2 == 0xff) {
joined_r0x1404a456:
    if (cVar1 == '\0') {
      if (*(char *)(DAT_1404a4e8 + 0x15) != '\0') goto LAB_1404a3ac;
      goto LAB_1404a47c;
    }
  }
  else if ((cVar1 == '\0') || (iVar2 = FUN_140db784(iVar5,DAT_1404a4e4,6), iVar2 != 0)) {
    FUN_1402a6e8(4,0xdb2,DAT_1404a4f4,DAT_1404a4f0,DAT_1404a504,DAT_1404a4f8);
    FUN_14033ca8();
    uVar3 = FUN_1405165c();
    FUN_140516e4(1,uVar3);
    cVar1 = *(char *)(iVar4 + 6);
    goto joined_r0x1404a456;
  }
  if (((*(char *)(iVar4 + 0x44) == '\0') || (iVar2 = FUN_140db784(iVar5,DAT_1404a4e4,6), iVar2 != 0)
      ) && (*(char *)(DAT_1404a4e8 + 0x15) != '\0')) {
LAB_1404a3ac:
    FUN_1402a6e8(4,0xdba,DAT_1404a4f4,DAT_1404a4f0,DAT_1404a4ec);
    FUN_1404a2d4(iVar5);
    return;
  }
  if ((*(char *)(iVar4 + 0xde) != '\0') && (iVar4 = FUN_140db784(iVar5,DAT_1404a4e4,6), iVar4 == 0))
  {
    return;
  }
LAB_1404a47c:
  FUN_1402a6e8(4,0xdc0,DAT_1404a4f4,DAT_1404a4f0,DAT_1404a508);
  FUN_14048820(0,iVar5);
  return;
}

