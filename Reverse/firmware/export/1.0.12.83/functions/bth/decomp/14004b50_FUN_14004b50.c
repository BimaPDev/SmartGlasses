/* FUN_14004b50 @ 0x14004b50 */

void FUN_14004b50(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[2] == '\0') {
    iVar4 = *(int *)(param_1 + 8);
    if ((*(int *)(iVar4 + 8) != 0) && (*(char *)(*(int *)(iVar4 + 8) + 1) == -0x7d)) {
      FUN_14003d28(iVar4,*(undefined4 *)(param_1 + 4));
      uVar2 = FUN_14005b24(iVar4);
      FUN_140061ec(uVar2,0,0);
      iVar3 = FUN_14005d3c(uVar2);
      uVar2 = 0;
      if (*(int *)(iVar3 + 8) != 0) {
        uVar2 = FUN_140006a8(*(int *)(iVar3 + 8),param_1 + 0xc,*(undefined4 *)(iVar4 + 0x24));
      }
      if (*(undefined1 **)(iVar3 + 0xc) != (undefined1 *)0x0) {
        **(undefined1 **)(iVar3 + 0xc) = param_1[3];
      }
      FUN_14003d3c(iVar4,uVar2);
      *param_1 = 0;
      FUN_140073cc(iVar4 + 0xc,param_1);
      return;
    }
    FUN_14003d28(iVar4,*(undefined4 *)(param_1 + 4));
    FUN_14004ab0(iVar4,param_1);
    return;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(param_1 + 8);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(param_1 + 4);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
  }
  *param_1 = 0;
  FUN_140073cc(iVar4 + 0xc,param_1);
  if ((*(int *)(iVar4 + 8) != 0) &&
     (puVar1 = (undefined1 *)FUN_140072ec(iVar4 + 0xc), puVar1 != (undefined1 *)0x0)) {
    uVar2 = FUN_14005b24(iVar4);
    FUN_140061ec(uVar2,0,0);
    iVar3 = FUN_14005d3c(uVar2);
    uVar2 = *(undefined4 *)(iVar3 + 8);
    FUN_140006a8(puVar1 + 0xc,uVar2,*(undefined4 *)(iVar4 + 0x24));
    puVar1[2] = 0;
    *puVar1 = 0xf9;
    puVar1[3] = (char)*(undefined4 *)(iVar3 + 0xc);
    FUN_14004ab0(iVar4,puVar1);
    FUN_14003d28(iVar4,uVar2);
    return;
  }
  return;
}

