/* FUN_2c4d3564 @ 0x2c4d3564 */

undefined4 FUN_2c4d3564(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  
  cVar1 = *param_1;
  if (cVar1 < '\b') {
    if (cVar1 < '\x06') goto LAB_2c4d3576;
  }
  else if (cVar1 != '\n') goto LAB_2c4d3576;
  if (*(int *)(param_1 + 0x318) != 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
      FUN_2c4d766c(param_1 + 0x44,*(undefined4 *)(param_1 + 0x40));
    }
    else if (*(int *)(param_1 + 0x40) != 0) {
      FUN_2c4d7598(param_1 + 0x44,*(undefined4 *)(param_1 + 0x3c));
    }
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    iVar3 = FUN_2c4d76a8(param_1 + 0x44);
    if (iVar3 < 1) {
      param_1[0x318] = '\0';
      param_1[0x319] = '\0';
      param_1[0x31a] = '\0';
      param_1[0x31b] = '\0';
    }
    uVar2 = FUN_2c4d2320(param_1);
    return uVar2;
  }
  iVar3 = FUN_2c4d4874(param_1 + 0x6c);
  if (iVar3 == 0) goto LAB_2c4d3576;
  uVar4 = FUN_2c4d4880(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_2c4d766c(param_1 + 0x44,*(undefined4 *)(param_1 + 0x40));
  }
  else if (*(int *)(param_1 + 0x40) != 0) {
    FUN_2c4d7598(param_1 + 0x44,*(undefined4 *)(param_1 + 0x3c));
  }
  pcVar8 = param_1 + 0x44;
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  iVar3 = FUN_2c4d76a8(pcVar8);
  if (iVar3 < (int)uVar4) {
    if (*(int *)(param_1 + 0x318) != 0) {
      return 0x101;
    }
    iVar3 = *(int *)(param_1 + 0x30c);
    if (*(int *)(param_1 + 0x60) == 0) {
      FUN_2c4d766c(pcVar8,*(undefined4 *)(param_1 + 0x40));
      iVar5 = *(int *)(param_1 + 0x60);
    }
    else {
      if (*(int *)(param_1 + 0x40) == 0) {
        param_1[0x3c] = '\0';
        param_1[0x3d] = '\0';
        param_1[0x3e] = '\0';
        param_1[0x3f] = '\0';
        goto LAB_2c4d367a;
      }
      FUN_2c4d7598(pcVar8,*(undefined4 *)(param_1 + 0x3c));
      iVar5 = *(int *)(param_1 + 0x60);
    }
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    if (iVar5 == 0) {
      iVar5 = FUN_2c4d76a8(pcVar8);
      FUN_2c4d768c(pcVar8,iVar5 - iVar3 & 7,param_1[0x60]);
      return 0x101;
    }
LAB_2c4d367a:
    iVar5 = FUN_2c4d76a8(pcVar8);
    FUN_2c4d7598(pcVar8,0,iVar3 - iVar5 & 7);
    return 0x101;
  }
  uVar6 = *(uint *)(param_1 + 0x40);
  uVar7 = *(uint *)(param_1 + 0x60);
  if (uVar4 < uVar6) {
    if (uVar7 == 0) {
      *(uint *)(param_1 + 0x40) = uVar6 - uVar4;
      goto LAB_2c4d3576;
    }
LAB_2c4d365a:
    if (uVar6 != 0) {
      FUN_2c4d7598(pcVar8,*(undefined4 *)(param_1 + 0x3c),uVar6);
      uVar7 = *(uint *)(param_1 + 0x60);
    }
  }
  else {
    if (uVar7 != 0) goto LAB_2c4d365a;
    FUN_2c4d766c(pcVar8);
    uVar7 = *(uint *)(param_1 + 0x60);
  }
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  FUN_2c4d768c(pcVar8,uVar4,uVar7 & 0xff);
LAB_2c4d3576:
  uVar2 = FUN_2c4d2320(param_1);
  return uVar2;
}

