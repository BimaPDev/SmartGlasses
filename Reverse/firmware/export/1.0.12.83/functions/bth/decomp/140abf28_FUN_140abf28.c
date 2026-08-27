/* FUN_140abf28 @ 0x140abf28 */

undefined4 FUN_140abf28(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar6 = *(undefined4 *)(*DAT_140abff4 + 0x98);
  iVar1 = FUN_140a999c(uVar6);
  if (iVar1 != 0) {
    FUN_140a99f4();
    bVar4 = 0;
    while( true ) {
      uVar2 = FUN_140a99c8(uVar6);
      if (uVar2 <= bVar4) break;
      iVar1 = FUN_140a999c(uVar6);
      if (iVar1 == 0) goto LAB_140abfba;
      iVar1 = FUN_140a99f4();
      bVar4 = bVar4 + 1;
      if (*(short *)(iVar1 + 8) == 0) break;
      FUN_140a9a20(uVar6,iVar1);
    }
    iVar1 = FUN_140a999c(uVar6);
    if (iVar1 != 0) {
      iVar1 = FUN_140a99f4();
      if (*(short *)(iVar1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140ac004,*(short *)(iVar1 + 8));
      }
      uVar7 = (uint)*(ushort *)(iVar1 + 10);
      uVar2 = FUN_140a99c8(uVar6);
      if (param_1 <= uVar2 / uVar7) {
        uVar2 = 0;
        if (param_1 != 0) {
          do {
            if (uVar7 != 0) {
              uVar5 = 0;
              do {
                iVar1 = FUN_140a999c(uVar6);
                if (iVar1 == 0) goto LAB_140abfba;
                uVar3 = FUN_140a99f4();
                uVar5 = uVar5 + 1 & 0xff;
                FUN_140a9a20(uVar6,uVar3);
              } while (uVar5 < uVar7);
            }
            uVar2 = uVar2 + 1 & 0xff;
          } while (uVar2 < param_1);
        }
        uVar6 = 0;
        goto LAB_140abfbe;
      }
    }
  }
LAB_140abfba:
  uVar6 = 0xfffffffd;
LAB_140abfbe:
  FUN_1402a6e8(4,0x462,DAT_140ac000,DAT_140abffc,DAT_140abff8,param_1,uVar6);
  return uVar6;
}

