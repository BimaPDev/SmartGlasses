/* FUN_2c644a2c @ 0x2c644a2c */

void FUN_2c644a2c(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[2] == '\0') {
    iVar4 = *(int *)(param_1 + 8);
    if ((*(int *)(iVar4 + 8) != 0) && (*(char *)(*(int *)(iVar4 + 8) + 1) == -0x7d)) {
      FUN_2c643bc4(iVar4,*(undefined4 *)(param_1 + 4));
      uVar2 = FUN_2c645b54(iVar4);
      FUN_2c64621c(uVar2,0,0);
      iVar3 = FUN_2c645d70(uVar2);
      uVar2 = 0;
      if (*(int *)(iVar3 + 8) != 0) {
        uVar2 = FUN_2c674668(*(int *)(iVar3 + 8),param_1 + 0xc,*(undefined4 *)(iVar4 + 0x24));
      }
      if (*(undefined1 **)(iVar3 + 0xc) != (undefined1 *)0x0) {
        **(undefined1 **)(iVar3 + 0xc) = param_1[3];
      }
      FUN_2c643bd8(iVar4,uVar2);
      *param_1 = 0;
      FUN_2c64749c(iVar4 + 0xc,param_1);
      return;
    }
    FUN_2c643bc4(iVar4,*(undefined4 *)(param_1 + 4));
    FUN_2c644990(iVar4,param_1);
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
  FUN_2c64749c(iVar4 + 0xc,param_1);
  if ((*(int *)(iVar4 + 8) != 0) &&
     (puVar1 = (undefined1 *)FUN_2c6473bc(iVar4 + 0xc), puVar1 != (undefined1 *)0x0)) {
    uVar2 = FUN_2c645b54(iVar4);
    FUN_2c64621c(uVar2,0,0);
    iVar3 = FUN_2c645d70(uVar2);
    uVar2 = *(undefined4 *)(iVar3 + 8);
    FUN_2c674668(puVar1 + 0xc,uVar2,*(undefined4 *)(iVar4 + 0x24));
    puVar1[2] = 0;
    *puVar1 = 0xf9;
    puVar1[3] = (char)*(undefined4 *)(iVar3 + 0xc);
    FUN_2c644990(iVar4,puVar1);
    FUN_2c643bc4(iVar4,uVar2);
    return;
  }
  return;
}

