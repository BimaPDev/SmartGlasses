/* FUN_10081e24 @ 0x10081e24 */

undefined4 FUN_10081e24(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_1013c70e();
  if ((iVar2 == 0) || (iVar2 = FUN_1005d200(), iVar2 != 0)) {
    uVar3 = 0;
  }
  else {
    FUN_10119dc2(DAT_10081e50);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    software_interrupt(2);
    uVar3 = 1;
  }
  return uVar3;
}

