/* FUN_10053170 @ 0x10053170 */

void FUN_10053170(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  char *unaff_r4;
  uint unaff_r10;
  int unaff_r11;
  int iVar6;
  
  iVar5 = *DAT_1005320c;
  uVar4 = 0;
  iVar6 = param_3;
  if (param_1 != 0) {
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      if (param_5 != 0) {
        unaff_r10 = 0;
        unaff_r4 = (char *)(param_1 + 6);
        unaff_r11 = 0x4c;
        uVar4 = 0;
        goto LAB_1005319c;
      }
      uVar4 = 0;
    }
  }
  while (*DAT_1005320c != iVar5) {
    uVar4 = FUN_1013cdc0(uVar4);
    do {
      if (*(uint *)(param_5 + 8) == 0) {
        bVar3 = true;
      }
      else if (*(uint *)(unaff_r4 + -6) < *(uint *)(param_5 + 8)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((*(uint *)(param_5 + 0xc) != 0) && (*(uint *)(param_5 + 0xc) < *(uint *)(unaff_r4 + -6)))
      {
        bVar3 = false;
      }
      cVar1 = *(char *)(param_5 + 0x10);
      if (((cVar1 == '\0') || (*unaff_r4 == cVar1)) && (bVar3)) {
        iVar2 = unaff_r11 * uVar4;
        uVar4 = uVar4 + 1 & 0xffff;
        FUN_1011ea40(iVar2 + param_3,unaff_r4 + -6,0x4c,cVar1,param_1,iVar5,iVar6);
      }
      unaff_r10 = unaff_r10 + 1;
      unaff_r4 = unaff_r4 + 0x4c;
LAB_1005319c:
    } while (((unaff_r10 & 0xffff) < param_2) && (uVar4 < param_4));
  }
  return;
}

