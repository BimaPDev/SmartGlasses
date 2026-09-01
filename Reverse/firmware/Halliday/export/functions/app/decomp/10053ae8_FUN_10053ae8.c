/* FUN_10053ae8 @ 0x10053ae8 */

int FUN_10053ae8(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = param_1;
  uVar4 = param_4;
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_10119dc2(DAT_10053b48,DAT_10053b44,0x77,*(uint *)(param_1 + 8),param_4);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    iVar2 = 4;
    software_interrupt(2);
  }
  iVar3 = param_1 + param_2 * 8;
  if (*(uint *)(param_1 + 8) < 0x8000) {
    if (param_4 != (param_4 & 0xffff)) {
      FUN_10119dc2(DAT_10053b48,DAT_10053b44,0x80,*(uint *)(param_1 + 8),uVar4);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0);
      }
      iVar2 = 4;
      software_interrupt(2);
    }
    *(short *)(iVar3 + param_3 * 2) = (short)param_4;
  }
  else {
    *(uint *)(iVar3 + param_3 * 4) = param_4;
  }
  return iVar2;
}

