/* FUN_140076b8 @ 0x140076b8 */

byte * FUN_140076b8(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 extraout_r2;
  uint uVar3;
  
  FUN_14003ce0();
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1ff;
  }
  if (uVar3 == 0) {
    uVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar3 = isIRQinterruptsEnabled();
    }
    if (uVar3 == 0) {
      uVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar3 = getBasePriority();
      }
      if (uVar3 == 0) {
        software_interrupt(0);
        return param_1;
      }
    }
  }
  if (((param_1 != (byte *)0x0) && (uVar3 = (uint)*param_1, uVar3 == 0xf7)) && (param_2 == 0)) {
    pbVar2 = (byte *)FUN_140072ec(param_1 + 0xc);
    if (pbVar2 == (byte *)0x0) {
      FUN_14003cf0(param_1);
    }
    else {
      FUN_14003cec(param_1,pbVar2);
    }
    return pbVar2;
  }
  FUN_14003cd4(param_1,0xfffffffc,extraout_r2,uVar3,param_4);
  return (byte *)0x0;
}

