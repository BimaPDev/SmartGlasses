/* thunk_FUN_1404b318 @ 0x1403ce80 */

undefined4 thunk_FUN_1404b318(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  *DAT_1404b404 = 1;
  iVar2 = FUN_14075658();
  if (iVar2 != 0) {
    FUN_140755e4();
  }
  uVar3 = thunk_FUN_14044e9c();
  FUN_1402a6e8(4,0x11e2,DAT_1404b410,DAT_1404b40c,DAT_1404b408,uVar3);
  iVar4 = FUN_14095748();
  FUN_1402a6e8(4,0x1210,DAT_1404b410,DAT_1404b40c,DAT_1404b414,iVar4);
  iVar2 = DAT_1404b41c;
  if ((iVar4 != 0) && (*(char *)(DAT_1404b418 + 0x14) != '\0')) {
    iVar5 = FUN_14098188(*(undefined4 *)(DAT_1404b41c + 0xd4));
    if (iVar5 == 4) {
      FUN_14048874(*(undefined4 *)(iVar2 + 0xd4));
    }
    cVar1 = FUN_14093064(*(undefined4 *)(*(int *)(iVar2 + 0x34) + 4));
    if ((byte)(cVar1 - 2U) < 2) {
      FUN_140487d4(*(undefined4 *)(*(int *)(iVar2 + 0x34) + 4));
    }
    iVar5 = FUN_14094340(*(undefined4 *)(iVar2 + 0x78));
    if (iVar5 != 0) {
      FUN_14048958(*(undefined4 *)(iVar2 + 0x78),0,DAT_1404b420);
      iVar2 = thunk_FUN_14044e9c();
      goto joined_r0x1404b36c;
    }
  }
  iVar2 = thunk_FUN_14044e9c();
joined_r0x1404b36c:
  if (iVar2 == 0) {
    iVar2 = FUN_14075658();
  }
  else {
    thunk_FUN_14044f6c();
    iVar2 = FUN_14075658();
  }
  if (iVar2 != 0) {
    FUN_1407561c();
  }
  FUN_140e5818(500);
  if (((iVar4 != 0) && (*(char *)(DAT_1404b418 + 0x14) != '\0')) &&
     (*(char *)(DAT_1404b41c + 6) != '\0')) {
    FUN_14048588(*(undefined2 *)(DAT_1404b41c + 8));
    FUN_140e5818(200);
  }
  return 0;
}

