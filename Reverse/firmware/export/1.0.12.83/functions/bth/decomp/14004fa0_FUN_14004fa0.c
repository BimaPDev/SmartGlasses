/* FUN_14004fa0 @ 0x14004fa0 */

undefined4 FUN_14004fa0(char *param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_1 == (char *)0x0) || (*param_1 != -6)) || (param_2 == 0)) {
    FUN_14003d0c(param_1,0xfffffffc);
    return 0xfffffffc;
  }
  puVar1 = (undefined1 *)FUN_14004b04();
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
    FUN_140006a8(param_2,puVar1 + 0xc,*(undefined4 *)(param_1 + 0x24));
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = puVar1[3];
    }
    FUN_14003d3c(param_1,param_2);
    *puVar1 = 0;
    FUN_140073cc(param_1 + 0xc,puVar1);
    if ((*(int *)(param_1 + 8) != 0) &&
       (puVar1 = (undefined1 *)FUN_140072ec(param_1 + 0xc), puVar1 != (undefined1 *)0x0)) {
      uVar2 = FUN_14005b24(param_1);
      FUN_140061ec(uVar2,0,1);
      iVar3 = FUN_14005d3c(uVar2);
      uVar2 = *(undefined4 *)(iVar3 + 8);
      FUN_140006a8(puVar1 + 0xc,uVar2,*(undefined4 *)(param_1 + 0x24));
      puVar1[2] = 0;
      *puVar1 = 0xf9;
      puVar1[3] = (char)*(undefined4 *)(iVar3 + 0xc);
      FUN_14004ab0(param_1,puVar1);
      FUN_14003d28(param_1,uVar2);
      return 0;
    }
    return 0;
  }
  if (param_4 == 0) {
    FUN_14003d40(param_1,param_2);
    return 0xfffffffd;
  }
  FUN_14003d34(param_1,param_2,param_4);
  iVar3 = FUN_14005e70(0x83,param_4);
  if (iVar3 != 0) {
    FUN_14005af4(param_1,*(undefined4 *)(DAT_140050d4 + 0x14));
    iVar3 = getProcessStackPointer();
    *(int *)(iVar3 + 8) = param_2;
    *(undefined1 **)(iVar3 + 0xc) = param_3;
    return 0xfffffffe;
  }
  FUN_14003d38(param_1);
  return 0xfffffffe;
}

