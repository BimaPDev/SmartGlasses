/* FUN_2c13fef4 @ 0x2c13fef4 */

undefined4 FUN_2c13fef4(char *param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_1 == (char *)0x0) || (*param_1 != -6)) || (param_2 == 0)) {
    FUN_2c13ef24(param_1,0xfffffffc);
    return 0xfffffffc;
  }
  puVar1 = (undefined1 *)FUN_2c13fa84();
  if (puVar1 != (undefined1 *)0x0) {
    if (*(int *)(puVar1 + 4) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(puVar1 + 8);
      iVar3 = *(int *)(puVar1 + 8);
    }
    else {
      *(undefined4 *)(*(int *)(puVar1 + 4) + 8) = *(undefined4 *)(puVar1 + 8);
      iVar3 = *(int *)(puVar1 + 8);
    }
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar1 + 4);
    }
    else {
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(puVar1 + 4);
    }
    FUN_2c13e7f0(param_2,puVar1 + 0xc,*(undefined4 *)(param_1 + 0x24));
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = puVar1[3];
    }
    FUN_2c13ef54(param_1,param_2);
    *puVar1 = 0;
    FUN_2c141cb0(param_1 + 0xc,puVar1);
    if ((*(int *)(param_1 + 8) != 0) &&
       (puVar1 = (undefined1 *)FUN_2c141bd0(param_1 + 0xc), puVar1 != (undefined1 *)0x0)) {
      uVar2 = FUN_2c14089c(param_1);
      FUN_2c140ec8(uVar2,0,1);
      iVar3 = FUN_2c140ab4(uVar2);
      uVar2 = *(undefined4 *)(iVar3 + 8);
      FUN_2c13e7f0(puVar1 + 0xc,uVar2,*(undefined4 *)(param_1 + 0x24));
      puVar1[2] = 0;
      *puVar1 = 0xf9;
      puVar1[3] = (char)*(undefined4 *)(iVar3 + 0xc);
      FUN_2c13fa30(param_1,puVar1);
      FUN_2c13ef40(param_1,uVar2);
      return 0;
    }
    return 0;
  }
  if (param_4 == 0) {
    FUN_2c13ef58(param_1,param_2);
    return 0xfffffffd;
  }
  FUN_2c13ef4c(param_1,param_2,param_4);
  iVar3 = FUN_2c140be8(0x83,param_4);
  if (iVar3 != 0) {
    FUN_2c14086c(param_1,*(undefined4 *)(DAT_2c140028 + 0x14));
    iVar3 = getProcessStackPointer();
    *(int *)(iVar3 + 8) = param_2;
    *(undefined1 **)(iVar3 + 0xc) = param_3;
    return 0xfffffffe;
  }
  FUN_2c13ef50(param_1);
  return 0xfffffffe;
}

