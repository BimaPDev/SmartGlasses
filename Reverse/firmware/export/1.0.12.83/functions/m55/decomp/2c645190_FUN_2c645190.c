/* FUN_2c645190 @ 0x2c645190 */

char * FUN_2c645190(char *param_1,int param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  FUN_2c643bcc();
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  if (uVar2 == 0) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = isIRQinterruptsEnabled();
    }
    if (iVar3 == 0) {
      iVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar3 = getBasePriority();
      }
      if (iVar3 == 0) {
        software_interrupt(0);
        return param_1;
      }
    }
  }
  if ((((param_1 != (char *)0x0) && (*param_1 == -6)) && (param_2 != 0)) && (param_4 == 0)) {
    iVar3 = FUN_2c6449e0(param_1);
    if (iVar3 != 0) {
      FUN_2c674668(param_2,iVar3 + 0xc,*(undefined4 *)(param_1 + 0x24));
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = *(undefined1 *)(iVar3 + 3);
      }
      *(char **)(iVar3 + 0xc) = param_1;
      FUN_2c646d24(iVar3);
      FUN_2c643bd8(param_1,param_2);
      return (char *)0x0;
    }
    FUN_2c643bdc(param_1,param_2);
    return (char *)0xfffffffd;
  }
  FUN_2c643ba8(param_1,0xfffffffc);
  return (char *)0xfffffffc;
}

