/* FUN_14039c40 @ 0x14039c40 */

void FUN_14039c40(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_1402a6e8(4,0x3d,DAT_14039cd4,DAT_14039cd0,DAT_14039ccc,*DAT_14039cc8);
  uVar3 = DAT_14039cdc;
  uVar2 = DAT_14039cd4;
  uVar1 = DAT_14039cd0;
  puVar6 = DAT_14039cd8 + 10;
  puVar5 = DAT_14039cd8;
  do {
    puVar4 = puVar5 + 1;
    FUN_1402a6e8(4,0x40,uVar2,uVar1,uVar3,*puVar5);
    puVar5 = puVar4;
  } while (puVar4 != puVar6);
  FUN_1402a6e8(4,0x43,DAT_14039cd4,DAT_14039cd0,DAT_14039ce4,*DAT_14039ce0);
  uVar2 = DAT_14039cd4;
  uVar1 = DAT_14039cd0;
  puVar6 = DAT_14039ce8 + 10;
  puVar5 = DAT_14039ce8;
  do {
    puVar4 = puVar5 + 1;
    FUN_1402a6e8(4,0x46,uVar2,uVar1,uVar3,*puVar5);
    puVar5 = puVar4;
  } while (puVar4 != puVar6);
  return;
}

