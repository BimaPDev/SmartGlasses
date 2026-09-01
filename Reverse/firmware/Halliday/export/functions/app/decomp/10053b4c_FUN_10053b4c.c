/* FUN_10053b4c @ 0x10053b4c */

uint FUN_10053b4c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = 0x7fff < *(uint *)(param_1 + 8);
  if (bVar4) {
    iVar1 = 8;
  }
  else {
    iVar1 = 4;
  }
  if (bVar4) {
    uVar2 = 7;
  }
  else {
    uVar2 = 3;
  }
  uVar3 = param_1 + iVar1 + param_2 * 8;
  if ((uVar3 & uVar2) != 0) {
    FUN_10119dc2(DAT_10053b88,DAT_10053b84,0x10);
    bVar4 = (bool)isCurrentModePrivileged();
    if (bVar4) {
      setBasePriority(0);
    }
    software_interrupt(2);
  }
  return uVar3;
}

