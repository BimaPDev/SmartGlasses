/* FUN_2c016438 @ 0x2c016438 */

bool FUN_2c016438(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  pcVar1 = DAT_2c0164e0;
  if (*DAT_2c0164e0 == '\0') {
    return false;
  }
  if (*(code **)(DAT_2c0164e0 + 0x4b0) != (code *)0x0) {
    iVar3 = (**(code **)(DAT_2c0164e0 + 0x4b0))();
    if (iVar3 == 0) {
      return false;
    }
    pcVar1[0x4b0] = '\0';
    pcVar1[0x4b1] = '\0';
    pcVar1[0x4b2] = '\0';
    pcVar1[0x4b3] = '\0';
  }
  iVar3 = *(int *)(pcVar1 + 0x4ac);
  if ((iVar3 == 0) && (iVar3 = FUN_2c015f54(), iVar3 == 0)) {
    return false;
  }
  puVar2 = DAT_2c0164e4;
  if (*(char *)(iVar3 + 1) == '\0') {
    iVar4 = 0;
    bVar6 = (bool)isCurrentModePrivileged();
    if (bVar6) {
      iVar4 = isIRQinterruptsEnabled();
    }
    if (-1 < iVar4 << 0x1f) {
      *DAT_2c0164e4 = 0x2c016470;
      puVar2[1] = unaff_lr;
      disableIRQinterrupts();
    }
    *DAT_2c0164e8 = iVar4;
  }
  uVar5 = 0;
  iVar4 = DAT_2c0164ec;
  do {
    bVar6 = iVar3 == iVar4;
    iVar4 = iVar4 + 0x2c;
    if (bVar6) {
      uVar5 = uVar5 & 0xff;
      break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x1b);
  pcVar1[0x4a8] = (char)uVar5;
  *(int *)(pcVar1 + 0x4ac) = iVar3;
  iVar4 = FUN_2c016170(iVar3,0);
  if (iVar4 == 0) {
    pcVar1[0x4ac] = '\0';
    pcVar1[0x4ad] = '\0';
    pcVar1[0x4ae] = '\0';
    pcVar1[0x4af] = '\0';
  }
  else if (*(int *)(pcVar1 + 0x4ac) != 0) {
    bVar6 = true;
    goto LAB_2c0164aa;
  }
  iVar4 = FUN_2c015f54();
  bVar6 = iVar4 != 0;
LAB_2c0164aa:
  if (*(char *)(iVar3 + 1) != '\0') {
    return bVar6;
  }
  if (-1 < *DAT_2c0164e8 << 0x1f) {
    *DAT_2c0164e4 = 0xffffffff;
    enableIRQinterrupts();
    return bVar6;
  }
  return bVar6;
}

