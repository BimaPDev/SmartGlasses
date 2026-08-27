/* FUN_2c640370 @ 0x2c640370 */

void FUN_2c640370(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  
  piVar3 = DAT_2c640444;
  pcVar2 = DAT_2c640440;
  if (*DAT_2c640440 == '\0') {
    uVar8 = *(undefined4 *)(*DAT_2c640444 + 4);
    iVar4 = FUN_2c604204(uVar8);
    iVar4 = FUN_2c6041dc(uVar8,iVar4 + -1);
    if (*piVar3 != iVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c640450,0x78,DAT_2c64044c,DAT_2c640448);
    }
  }
  iVar4 = FUN_2c602408(param_1);
  if (iVar4 != 0xd) {
    return;
  }
  uVar5 = FUN_2c602618(param_1);
  if (0xd3 < uVar5) {
    if (uVar5 == 0x1f5) {
      bVar6 = false;
      uVar8 = 5;
    }
    else {
      if (uVar5 != 0x1f6) goto switchD_2c6403ce_caseD_d0;
      bVar6 = false;
      uVar8 = 6;
    }
    goto LAB_2c6403f8;
  }
  switch(uVar5) {
  case 0xce:
    bVar6 = false;
    uVar8 = 2;
    goto LAB_2c6403f8;
  case 0xcf:
    bVar6 = false;
    uVar8 = 1;
LAB_2c6403f8:
    if ((code *)*DAT_2c640454 != (code *)0x0) {
      (*(code *)*DAT_2c640454)(uVar8,bVar6);
      cVar7 = '\x01';
      goto LAB_2c6403da;
    }
    break;
  case 0xd2:
    if (*pcVar2 == '\0') {
      uVar8 = 4;
      bVar1 = *DAT_2c640458;
      *DAT_2c640458 = bVar1 + 1;
      bVar6 = 1 < (byte)(bVar1 + 1);
      goto LAB_2c6403f8;
    }
    break;
  case 0xd3:
    if (*pcVar2 == '\0') {
      uVar8 = 3;
      bVar6 = false;
      goto LAB_2c6403f8;
    }
  }
switchD_2c6403ce_caseD_d0:
  cVar7 = '\0';
LAB_2c6403da:
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xf7 | cVar7 << 3;
  return;
}

