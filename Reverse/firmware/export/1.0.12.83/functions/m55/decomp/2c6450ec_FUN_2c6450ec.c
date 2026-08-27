/* FUN_2c6450ec @ 0x2c6450ec */

char * FUN_2c6450ec(char *param_1,int param_2,undefined1 param_3,int param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  FUN_2c643bb4();
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1ff;
  }
  if (uVar4 == 0) {
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = isIRQinterruptsEnabled();
    }
    if (iVar5 == 0) {
      iVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar5 = getBasePriority();
      }
      if (iVar5 == 0) {
        software_interrupt(0);
        return param_1;
      }
    }
  }
  if ((((param_1 == (char *)0x0) || (*param_1 != -6)) || (param_2 == 0)) || (param_4 != 0)) {
    FUN_2c643ba8(param_1,0xfffffffc);
    pcVar3 = (char *)0xfffffffc;
  }
  else {
    puVar2 = (undefined1 *)FUN_2c6473bc(param_1 + 0xc);
    if (puVar2 == (undefined1 *)0x0) {
      FUN_2c643bc8(param_1,param_2);
      pcVar3 = (char *)0xfffffffd;
    }
    else {
      FUN_2c674668(puVar2 + 0xc,param_2,*(undefined4 *)(param_1 + 0x24));
      puVar2[3] = param_3;
      *puVar2 = 0xf9;
      puVar2[2] = 0;
      *(int *)(puVar2 + 4) = param_2;
      *(char **)(puVar2 + 8) = param_1;
      FUN_2c646d24(puVar2);
      FUN_2c643bc0(param_1,param_2);
      pcVar3 = (char *)0x0;
    }
  }
  return pcVar3;
}

