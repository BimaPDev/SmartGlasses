/* FUN_14042c20 @ 0x14042c20 */

void FUN_14042c20(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar9;
  undefined4 unaff_lr;
  undefined4 uVar10;
  int iVar11;
  
  iVar6 = DAT_14042d00;
  if (*(char *)(DAT_14042d00 + 0x442) == '\0') {
    if (*(char *)(DAT_14042d00 + 0x47a) == '\0') goto LAB_14042c3a;
    uVar7 = 1;
    iVar9 = 1;
    iVar8 = DAT_14042d00 + 0x474;
  }
  else {
    uVar7 = 0;
    iVar9 = 0;
    iVar8 = DAT_14042d00 + 0x43c;
  }
  *(undefined2 *)(iVar8 + 6) = 0x100;
  uVar10 = DAT_14042d04;
  iVar8 = iVar9;
  iVar11 = param_1;
  FUN_1402a6e8(4,0x87d,DAT_14042d0c,DAT_14042d10,DAT_14042d08,DAT_14042d04,iVar9,param_1);
  uVar2 = DAT_14042d1c;
  if (param_1 == 0) {
    FUN_140443a8(uVar7,0);
    FUN_1402a6e8(4,0x892,DAT_14042d0c,DAT_14042d10,uVar2,uVar10,iVar8,iVar11);
  }
  else {
    iVar9 = iVar6 + iVar9 * 0x38 + 0x44a;
    iVar6 = FUN_1409f494(iVar9,param_2);
    if (iVar6 == 0) {
      FUN_140443a8(uVar7,0);
      FUN_1402a6e8(4,0x88c,DAT_14042d0c,DAT_14042d10,DAT_14042d20,uVar10,iVar8,iVar11);
    }
    else {
      FUN_1402a6e8(4,0x884,DAT_14042d0c,DAT_14042d10,DAT_14042d14,uVar10,iVar8,iVar11);
      FUN_1402a9fc(DAT_14042d18,1,6,iVar9);
      FUN_140443a8(uVar7,1);
    }
  }
LAB_14042c3a:
  FUN_14074734(3);
  FUN_14074734(0);
  puVar4 = DAT_14043c40;
  pcVar3 = DAT_14043c3c;
  FUN_1402a6e8(4,0x4db,DAT_14043c50,DAT_14043c4c,DAT_14043c48,DAT_14043c44,*DAT_14043c3c,
               *DAT_14043c40,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  iVar6 = FUN_140e5148(*(undefined4 *)(pcVar3 + 0xe42),0xffffffff);
  puVar5 = DAT_14043c54;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x710,DAT_14043c5c);
  }
  if (*pcVar3 != '\0') {
    uVar7 = *(undefined4 *)(pcVar3 + 0xe42);
    uVar1 = *DAT_14043c54;
    pcVar3[0x5f] = '\x01';
    *puVar5 = uVar1 | 2;
    FUN_140e52d8(uVar7);
    return;
  }
  uVar7 = *(undefined4 *)(pcVar3 + 0xe42);
  uVar1 = *DAT_14043c54;
  *pcVar3 = '\x01';
  *puVar5 = uVar1 & 0xfffd;
  *puVar4 = 1;
  FUN_140e52d8(uVar7);
  FUN_14048958(0,0,DAT_14043c58);
  return;
}

