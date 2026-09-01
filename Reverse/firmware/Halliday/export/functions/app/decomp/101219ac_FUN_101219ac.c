/* FUN_101219ac @ 0x101219ac */

undefined4 FUN_101219ac(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)(iVar3 + 0x74) = iVar3 + 0x78;
  if (((*(char *)(iVar3 + 0x7c) == '\0') ||
      (iVar2 = FUN_1007f4f4(param_1,*(undefined1 *)(iVar3 + 0x79)), iVar2 == 1)) &&
     (iVar2 = FUN_1007f384(param_1,param_2), iVar2 == 1)) {
    *(char *)(*(int *)(iVar3 + 0x74) + 1) = (char)param_2;
    puVar5 = *(undefined1 **)(iVar3 + 0x74);
    uVar1 = FUN_10120af8(param_1,param_2);
    *puVar5 = uVar1;
    *(undefined1 *)(*(int *)(iVar3 + 0x74) + 4) = 0;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

