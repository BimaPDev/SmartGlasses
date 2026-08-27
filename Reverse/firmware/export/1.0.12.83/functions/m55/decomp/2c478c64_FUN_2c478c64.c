/* FUN_2c478c64 @ 0x2c478c64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c478c64(void)

{
  ulonglong uVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar9;
  
  piVar3 = _LAB_2c478ce4;
  iVar6 = FUN_2c478b68();
  *piVar3 = iVar6;
  iVar6 = FUN_2c47245c(1,500);
  uVar5 = _LAB_2c478ce8;
  uVar8 = 0;
  pcVar7 = (char *)(iVar6 + -1);
  do {
    uVar1 = (ulonglong)uVar8;
    cVar2 = (char)uVar8;
    uVar8 = uVar8 + 1;
    pcVar7 = pcVar7 + 1;
    *pcVar7 = cVar2 + (char)(uint)(uVar5 * uVar1 >> 0x23) * -10 + '0';
  } while (uVar8 != 500);
  uVar9 = _LAB_2c478cf8;
  (**(code **)(*piVar3 + 0x4c))
            (0xf,iVar6,500,0,_LAB_2c478cf4,_LAB_2c478cec,_LAB_2c478cf8,_LAB_2c478cf0);
  puVar4 = DAT_2c4726d4;
  piVar3 = DAT_2c4726d0;
  if (iVar6 != 0) {
    if (*DAT_2c4726d0 != 0) {
      FUN_2c644044(*DAT_2c4726d4,0xffffffff);
      FUN_2c47231c(*piVar3,DAT_2c4726d8,1,iVar6);
      FUN_2c644080(*puVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x189,DAT_2c4726e8,DAT_2c4726e4,DAT_2c4726e0,DAT_2c4726dc,uVar9,unaff_r4,unaff_r5,
          unaff_r6);
  }
  return;
}

