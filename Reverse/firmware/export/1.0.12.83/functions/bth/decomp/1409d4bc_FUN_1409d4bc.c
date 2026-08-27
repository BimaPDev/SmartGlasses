/* FUN_1409d4bc @ 0x1409d4bc */

undefined4 FUN_1409d4bc(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  uVar2 = FUN_140280f4();
  puVar1 = DAT_1409d4e4;
  *DAT_1409d4e4 = uVar2;
  uVar2 = FUN_140280f4();
  puVar1[1] = uVar2;
  uVar2 = FUN_140280f4();
  *DAT_1409d4e8 = uVar2;
  FUN_140ad8cc();
  FUN_140ad8bc(DAT_1409d4ec);
  return 0;
}

