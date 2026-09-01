/* FUN_10029d98 @ 0x10029d98 */

void FUN_10029d98(void)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_r8;
  bool bVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  int local_24;
  
  piVar1 = DAT_10029ee8;
  iVar8 = DAT_10029ee0;
  iVar3 = *(int *)(DAT_10029ee0 + 0xf0);
  local_24 = *DAT_10029ee4;
  if ((iVar3 != 0) && (unaff_r8 = piVar1, *(int *)(*DAT_10029ee8 + 0x2c) != 0)) {
    if (*(char *)(iVar3 + 1) == 'd') {
      if (iVar3 == -5) goto LAB_10029e8a;
      uVar4 = FUN_1011ea10();
      puVar2 = PTR_DAT_10029eec;
      if (uVar4 < 2) goto LAB_10029e8a;
      iVar5 = FUN_1011ea10(*(int *)(iVar8 + 0xf0) + 5);
      iVar6 = FUN_1011ea10(*piVar1 + 0x170);
      bVar9 = 0x13f < (uint)(iVar5 + iVar6);
      iVar3 = iVar5;
      if (bVar9) {
        iVar3 = 0x13e - iVar6;
      }
      if (bVar9) {
        iVar3 = iVar3 + 1;
      }
      FUN_100a5b78(((int)puVar2 - (int)PTR_DAT_10029ef0) * 0x20 & 0xff00U | 0xe80034,
                   PTR_s_reminder_timer_handler_10029ef8,
                   PTR_s_content_len__d__len__d__copy_len_10029ef4,iVar6,iVar5,iVar3,
                   *(int *)(iVar8 + 0xf0) + 5);
      if (0 < iVar3) {
        iVar5 = *piVar1;
        FUN_1011ea40(iVar5 + 0x170 + iVar6,*(int *)(iVar8 + 0xf0) + 5,iVar3);
        *(undefined1 *)(iVar3 + iVar5 + iVar6 + 0x170) = 0;
      }
      FUN_1011ea48(*(int *)(iVar8 + 0xf0) + 5,0,0x400);
      uVar7 = *(undefined4 *)(*piVar1 + 0x2c);
      iVar8 = *piVar1 + 0x170;
      goto LAB_10029e6c;
    }
    local_30 = 0;
    uStack_2c = 0;
    local_28 = 0;
    FUN_10118a1c(&local_30,10,PTR_s__d___1015a923_0x11_10029efc);
    FUN_10099ca4(*(undefined4 *)(*piVar1 + 0x2c),&local_30);
    FUN_10124cea(*(undefined4 *)(*piVar1 + 0x38),1);
  }
  while (*DAT_10029ee4 != local_24) {
    FUN_1013cdc0();
LAB_10029e8a:
    iVar8 = FUN_1011ea10(*unaff_r8 + 0x170);
    if (iVar8 == 0) {
      uVar7 = *(undefined4 *)(*unaff_r8 + 0x2c);
      iVar8 = FUN_1004cf14(0x15e);
LAB_10029e6c:
      FUN_10099ca4(uVar7,iVar8);
    }
    FUN_10124c20(*(undefined4 *)(*unaff_r8 + 0x38),1);
  }
  return;
}

