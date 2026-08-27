/* FUN_2c13fd4c @ 0x2c13fd4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13fd4c(char *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_1 == (char *)0x0) || (*param_1 != -6)) || (param_2 == 0)) {
    FUN_2c13ef24(param_1,0xfffffffc);
    uVar2 = 0xfffffffc;
  }
  else {
    if ((*(int *)(param_1 + 8) != 0) && (*(char *)(*(int *)(param_1 + 8) + 1) == -0x7d)) {
      FUN_2c13ef40();
      uVar2 = FUN_2c14089c(param_1);
      FUN_2c140ec8(uVar2,0,1);
      iVar3 = FUN_2c140ab4(uVar2);
      uVar2 = FUN_2c13e7f0(*(undefined4 *)(iVar3 + 8),param_2,*(undefined4 *)(param_1 + 0x24));
      if (*(undefined1 **)(iVar3 + 0xc) != (undefined1 *)0x0) {
        **(undefined1 **)(iVar3 + 0xc) = (char)param_3;
      }
      FUN_2c13ef54(param_1,uVar2);
      return 0;
    }
    puVar1 = (undefined1 *)FUN_2c141bd0(param_1 + 0xc);
    if (puVar1 == (undefined1 *)0x0) {
      if (param_4 != 0) {
        func_0x2c13ef34(param_1,param_2,param_4);
        iVar3 = FUN_2c140be8(0x93,param_4);
        if (iVar3 != 0) {
          FUN_2c14086c(param_1,*(undefined4 *)(_DAT_2c13fe44 + 0x14));
          iVar3 = getProcessStackPointer();
          *(int *)(iVar3 + 8) = param_2;
          *(undefined4 *)(iVar3 + 0xc) = param_3;
          return 0xfffffffe;
        }
        func_0x2c13ef38(param_1);
        return 0xfffffffe;
      }
      FUN_2c13ef44(param_1,param_2);
      uVar2 = 0xfffffffd;
    }
    else {
      FUN_2c13e7f0(puVar1 + 0xc,param_2,*(undefined4 *)(param_1 + 0x24));
      puVar1[3] = (char)param_3;
      *puVar1 = 0xf9;
      puVar1[2] = 0;
      FUN_2c13fa30(param_1,puVar1);
      FUN_2c13ef40(param_1,param_2);
      uVar2 = 0;
    }
  }
  return uVar2;
}

