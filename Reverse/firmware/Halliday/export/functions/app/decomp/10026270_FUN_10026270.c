/* FUN_10026270 @ 0x10026270 */

void FUN_10026270(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = DAT_1002638c;
  iVar5 = *DAT_10026388;
  if (*DAT_1002638c == 0) {
    if (*DAT_10026388 == iVar5) {
      return;
    }
  }
  else {
    iVar2 = FUN_100ed61c(2,0x102c,PTR_s_Message_Reorder_10026390);
    if (iVar2 == 0) {
      if (*DAT_10026388 == iVar5) goto LAB_100262a6;
    }
    else {
      iVar6 = 0;
      FUN_1011ea48(iVar2,0,0x102c);
      uVar8 = 0;
      do {
        iVar4 = *piVar1 + iVar6;
        iVar3 = FUN_10025db8(iVar4);
        if (iVar3 == 0) break;
        if (*(char *)(iVar4 + 0x17b) == '\0') {
          iVar3 = uVar8 * 0x19e;
          uVar8 = uVar8 + 1 & 0xff;
          FUN_1011ea40(iVar3 + iVar2,iVar4,0x19e);
        }
        iVar6 = iVar6 + 0x19e;
      } while (iVar6 != 0x102c);
      iVar6 = 0;
      uVar7 = 0;
      do {
        iVar4 = *piVar1 + iVar6;
        iVar3 = FUN_10025db8(iVar4);
        if (iVar3 == 0) break;
        if (*(char *)(iVar4 + 0x17b) != '\0') {
          iVar3 = uVar8 + uVar7;
          uVar7 = uVar7 + 1 & 0xff;
          FUN_1011ea40(iVar3 * 0x19e + iVar2,iVar4,0x19e);
        }
        iVar6 = iVar6 + 0x19e;
      } while (iVar6 != 0x102c);
      FUN_1011ea40(*piVar1,iVar2,0x102c);
      if (*DAT_10026388 == iVar5) {
        FUN_100ed77c(2,iVar2);
        return;
      }
    }
  }
  FUN_1013cdc0();
LAB_100262a6:
  FUN_100a5b78(((int)PTR_DAT_10026398 - (int)PTR_DAT_10026394) * 0x20 & 0xff00U | 0x7a0011,
               PTR_s_Message_Reorder_100263a0,PTR_s_Temporary_list_allocation_failed_1002639c);
  return;
}

