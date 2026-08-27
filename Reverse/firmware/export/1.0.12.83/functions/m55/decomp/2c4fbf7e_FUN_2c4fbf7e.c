/* FUN_2c4fbf7e @ 0x2c4fbf7e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4fbf7e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  char in_ZR;
  
  puVar2 = _LAB_2c4fbfec;
  if (in_ZR == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4fbffc,_LAB_2c4fbff8,param_1,param_4,param_4);
  }
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    *_LAB_2c4fbfec = 0x2c4fbf8e;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*_LAB_2c4fbff0 != '\0') {
    if (iVar3 == 0) {
      *_LAB_2c4fbfec = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar3);
    }
    return 0;
  }
  *_LAB_2c4fbff0 = '\x01';
  if (iVar3 == 0) {
    *_LAB_2c4fbfec = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  func_0x2c4ad710();
  func_0x2c4f5bc8(_LAB_2c4fbff4);
  func_0x2c4f6918(2);
  func_0x2c4f68e0(2);
  func_0x2c673ea8();
  return 0;
}

