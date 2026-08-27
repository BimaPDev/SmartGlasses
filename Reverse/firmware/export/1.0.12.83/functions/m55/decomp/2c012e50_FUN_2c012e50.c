/* FUN_2c012e50 @ 0x2c012e50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c012e50(uint param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lr;
  ushort uStack_1e;
  int iStack_1c;
  
  pcVar3 = _DAT_2c012f24;
  iStack_1c = *_DAT_2c012f20;
  cVar1 = *_DAT_2c012f24;
  if (cVar1 == '\x02') {
    if (*_DAT_2c012f2c < 2) goto LAB_2c012ee2;
    uVar5 = 0x10a;
    uVar6 = (param_1 & 0x1f) << 3;
    if (0x3b < uVar6) {
      uVar6 = 0x3c;
    }
  }
  else {
    uVar6 = (param_1 & 0x1f) << 3;
    if (0x3b < uVar6) {
      uVar6 = 0x3c;
    }
    if ((cVar1 == '\0') || (cVar1 == '\x03')) {
      uVar5 = 0x69;
    }
    else {
      uVar5 = 0x10a;
    }
  }
  FUN_2c008f74(uVar5,0xffe);
  puVar4 = _DAT_2c012f28;
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    *_DAT_2c012f28 = 0x2c012e90;
    puVar4[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  cVar1 = *pcVar3;
  if ((cVar1 == '\0') || (cVar1 == '\x03')) {
    uVar5 = 0x6b;
  }
  else {
    uVar5 = 0x10c;
  }
  FUN_2c008e4c(uVar5,&uStack_1e);
  cVar1 = *pcVar3;
  uStack_1e = uStack_1e & 0x3ff | (ushort)(uVar6 << 10) | 0x200;
  if ((cVar1 == '\0') || (cVar1 == '\x03')) {
    uVar5 = 0x6b;
  }
  else {
    uVar5 = 0x10c;
  }
  FUN_2c008f74(uVar5);
  if (iVar7 == 0) {
    *_DAT_2c012f28 = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar7);
  }
LAB_2c012ee2:
  if (*_DAT_2c012f20 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return;
}

