/* FUN_1002ed68 @ 0x1002ed68 */

undefined4 FUN_1002ed68(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *DAT_1002ee10;
  uVar1 = FUN_10088ffc();
  FUN_1012569c(uVar1,0xf0,0x40);
  FUN_10126e82(uVar1,0);
  FUN_10126ea2(uVar1,0xff,0);
  FUN_10126eb6(uVar1,0x3186,0);
  FUN_10126ed6(uVar1,0xff,0);
  FUN_10126ee0(uVar1,2,0);
  FUN_10126f7a(uVar1,0x1e,0);
  FUN_10126e82(uVar1,0x3186,2);
  FUN_10126ea2(uVar1,0xff,2);
  uVar2 = FUN_1002eb34();
  FUN_10126eb6(uVar1,uVar2,2);
  FUN_10126ed6(uVar1,0xff,2);
  FUN_101256e8(uVar1,9,0);
  if (*DAT_1002ee10 != iVar3) {
    FUN_1013cdc0();
  }
  return uVar1;
}

