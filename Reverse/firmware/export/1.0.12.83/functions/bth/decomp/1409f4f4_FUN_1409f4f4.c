/* FUN_1409f4f4 @ 0x1409f4f4 */

void FUN_1409f4f4(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = DAT_1409f670;
  uVar4 = DAT_1409f66c;
  uVar3 = DAT_1409f668;
  uVar2 = DAT_1409f648;
  piVar1 = DAT_1409f644;
  if (*(int *)*DAT_1409f644 != 0) {
    uVar7 = 0;
    do {
      FUN_1402a6e8(4,0x14e,uVar2,uVar4,uVar3);
      FUN_1402a6e8(4,0x14f,uVar2,uVar4,DAT_1409f64c,uVar7);
      FUN_1402a6e8(4,0x150,uVar2,uVar4,DAT_1409f650);
      iVar6 = uVar7 * 0x72;
      FUN_1402a9fc(uVar5,1,6,iVar6 + 0x1a + *piVar1);
      FUN_1402a6e8(4,0x152,uVar2,uVar4,DAT_1409f654,*(undefined1 *)(*piVar1 + uVar7 * 0x72 + 0x20));
      FUN_1402a6e8(4,0x153,uVar2,uVar4,DAT_1409f658);
      FUN_1402a9fc(uVar5,1,6,iVar6 + 0x21 + *piVar1);
      FUN_1402a6e8(4,0x155,uVar2,uVar4,DAT_1409f65c,*(undefined2 *)(*piVar1 + uVar7 * 0x72 + 0x27));
      FUN_1402a9fc(uVar5,1,8,iVar6 + 0x29 + *piVar1);
      FUN_1402a6e8(4,0x157,uVar2,uVar4,DAT_1409f660);
      FUN_1402a9fc(uVar5,1,0x10,iVar6 + 0x31 + *piVar1);
      FUN_1402a6e8(4,0x159,uVar2,uVar4,DAT_1409f664);
      FUN_1402a9fc(uVar5,1,0x10,iVar6 + 0x5b + *piVar1);
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < *(uint *)*piVar1);
  }
  return;
}

