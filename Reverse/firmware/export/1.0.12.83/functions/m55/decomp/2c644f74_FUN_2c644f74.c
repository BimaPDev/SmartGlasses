/* FUN_2c644f74 @ 0x2c644f74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c644f74(char *param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_1 == (char *)0x0) || (*param_1 != -6)) || (param_2 == 0)) {
    FUN_2c643ba8(param_1,0xfffffffc);
    return 0xfffffffc;
  }
  puVar1 = (undefined1 *)FUN_2c6449e0();
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
    FUN_2c674668(param_2,puVar1 + 0xc,*(undefined4 *)(param_1 + 0x24));
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = puVar1[3];
    }
    FUN_2c643bd8(param_1,param_2);
    *puVar1 = 0;
    FUN_2c64749c(param_1 + 0xc,puVar1);
    if ((*(int *)(param_1 + 8) != 0) &&
       (puVar1 = (undefined1 *)FUN_2c6473bc(param_1 + 0xc), puVar1 != (undefined1 *)0x0)) {
      uVar2 = FUN_2c645b54(param_1);
      FUN_2c64621c(uVar2,0,1);
      iVar3 = FUN_2c645d70(uVar2);
      uVar2 = *(undefined4 *)(iVar3 + 8);
      FUN_2c674668(puVar1 + 0xc,uVar2,*(undefined4 *)(param_1 + 0x24));
      puVar1[2] = 0;
      *puVar1 = 0xf9;
      puVar1[3] = (char)*(undefined4 *)(iVar3 + 0xc);
      FUN_2c644990(param_1,puVar1);
      FUN_2c643bc4(param_1,uVar2);
      return 0;
    }
    return 0;
  }
  if (param_4 == 0) {
    FUN_2c643bdc(param_1,param_2);
    return 0xfffffffd;
  }
  func_0x2c643bd0(param_1,param_2,param_4);
  iVar3 = FUN_2c645ea4(0x83,param_4);
  if (iVar3 != 0) {
    FUN_2c645b24(param_1,*(undefined4 *)(_LAB_2c6450a8 + 0x14));
    iVar3 = getProcessStackPointer();
    *(int *)(iVar3 + 8) = param_2;
    *(undefined1 **)(iVar3 + 0xc) = param_3;
    return 0xfffffffe;
  }
  func_0x2c643bd4(param_1);
  return 0xfffffffe;
}

