/* FUN_2c4bc8d0 @ 0x2c4bc8d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4bc8d0(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined4 unaff_lr;
  
  iVar6 = _LAB_2c4bc9b0;
  bVar1 = *(byte *)(_LAB_2c4bc9b0 + param_1 * 0x70 + 1);
  uVar7 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    iVar10 = 2000;
    pcVar9 = (char *)(param_1 * 0x70 + (param_2 + 1) * 0x30 + _LAB_2c4bc9b0);
    while( true ) {
      puVar5 = _LAB_2c4bc9ac;
      iVar8 = 0;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        iVar8 = getBasePriority();
      }
      if (iVar8 != 0x40) {
        *_LAB_2c4bc9ac = 0x2c4bc922;
        puVar5[1] = unaff_lr;
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(0x40);
      }
      cVar2 = *pcVar9;
      bVar3 = iVar10 == 0;
      if ((cVar2 == '\x02') && (bVar3)) {
        *(undefined4 *)(param_1 * 0x70 + param_2 * 0x30 + iVar6 + 0x38) = 0x10000000;
        FUN_2c4bbb80(param_1,0x40);
        FUN_2c4bc22c(param_1);
      }
      if (iVar8 == 0) {
        *_LAB_2c4bc9ac = 0xffffffff;
      }
      bVar4 = (bool)isCurrentModePrivileged();
      if (bVar4) {
        setBasePriority(iVar8);
      }
      iVar10 = iVar10 + -1;
      if ((cVar2 != '\x02') || (bVar3)) break;
      FUN_2c6444fc(1);
    }
    *(undefined1 *)(iVar6 + param_1 * 0x70 + (param_2 + 1) * 0x30) = 0;
    uVar7 = *(uint *)(param_1 * 0x70 + param_2 * 0x30 + iVar6 + 0x38);
  }
  return uVar7;
}

