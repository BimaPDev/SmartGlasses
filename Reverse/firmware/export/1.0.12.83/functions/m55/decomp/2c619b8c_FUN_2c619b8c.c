/* FUN_2c619b8c @ 0x2c619b8c */

void FUN_2c619b8c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_2c602408();
  if (iVar1 == 7) {
    iVar1 = FUN_2c602400(param_1);
    iVar2 = FUN_2c602414(param_1);
    if (iVar1 == *(int *)(iVar2 + 0x34)) {
      *(byte *)(iVar2 + 0x61) = *(byte *)(iVar2 + 0x60);
      if ((*(int *)(iVar2 + 0x48) != iVar1) && (1 < *(byte *)(iVar2 + 0x60))) {
        iVar1 = iVar2 + 0x54;
        uVar3 = FUN_2c62ca10(iVar1);
        puVar4 = (undefined4 *)FUN_2c62ca20(iVar1,uVar3);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_2c62c998(iVar1,uVar3);
          FUN_2c62bea8(uVar3);
          *(char *)(iVar2 + 0x60) = *(char *)(iVar2 + 0x60) + -1;
          FUN_2c62c998(iVar1,puVar4);
          *(char *)(iVar2 + 0x60) = *(char *)(iVar2 + 0x60) + -1;
          FUN_2c619aa4(iVar2,*puVar4);
          FUN_2c62bea8(puVar4);
          return;
        }
      }
    }
    else if (iVar1 == *(int *)(iVar2 + 0x48)) {
      *(undefined1 *)(iVar2 + 0x61) = *(undefined1 *)(iVar2 + 0x60);
      return;
    }
  }
  return;
}

