/* FUN_2c48ebcc @ 0x2c48ebcc */

/* WARNING: Removing unreachable block (ram,0x2c48d16c) */

undefined4 FUN_2c48ebcc(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint auStack_34 [2];
  undefined4 uStack_2c;
  uint *puStack_28;
  undefined4 uStack_24;
  
  func_0x2c4f8174();
  puVar1 = DAT_2c48d28c;
  uVar4 = 0;
  auStack_34[0] = 0;
  FUN_2c644044(*DAT_2c48d28c,0xffffffff);
  uVar3 = *DAT_2c48d290;
  if (uVar3 < 0x100000) {
    uVar2 = uVar3 + 1;
    uVar4 = uVar3;
  }
  else {
    uVar2 = 1;
  }
  uVar6 = *puVar1;
  *DAT_2c48d290 = uVar2;
  FUN_2c644080(uVar6);
  iVar8 = DAT_2c48d278;
  puStack_28 = auStack_34;
  uStack_2c = CONCAT31(uStack_2c._1_3_,0x47);
  uStack_24 = CONCAT22(uStack_24._2_2_,4);
  iVar7 = 0;
  iVar5 = DAT_2c48d278;
  auStack_34[0] = uVar4;
  do {
    FUN_2c644044(*(undefined4 *)(iVar5 + 4),0xffffffff);
    if (*(char *)(iVar5 + 1) == '\0') {
      iVar9 = iVar8 + iVar7 * 0x14;
      *(undefined1 *)(iVar9 + 1) = 1;
      *(undefined4 *)(iVar9 + 0xc) = 0xf0000000;
      FUN_2c644080(*(undefined4 *)(iVar9 + 4));
      *(undefined1 *)(iVar8 + iVar7 * 0x14) = 0x47;
      *(uint *)(iVar9 + 0xc) = auStack_34[0];
      FUN_2c4f7174(uStack_2c,puStack_28,uStack_24);
      iVar5 = FUN_2c6471b4(*(undefined4 *)(iVar9 + 8),500);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x212,DAT_2c48d288,DAT_2c48d284,DAT_2c48d294,DAT_2c48d27c,iVar5,0x47);
      }
      uVar6 = *(undefined4 *)(iVar9 + 0x10);
      iVar8 = iVar8 + iVar7 * 0x14;
      FUN_2c644044(*(undefined4 *)(iVar8 + 4),0xffffffff);
      *(undefined1 *)(iVar8 + 1) = 0;
      FUN_2c644080(*(undefined4 *)(iVar8 + 4));
      return uVar6;
    }
    iVar7 = iVar7 + 1;
    FUN_2c644080(*(undefined4 *)(iVar5 + 4));
    iVar5 = iVar5 + 0x14;
  } while (iVar7 != 0x10);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x204,DAT_2c48d288,DAT_2c48d284,DAT_2c48d280,DAT_2c48d27c,0x47);
}

