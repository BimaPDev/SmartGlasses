/* FUN_1013ba4c @ 0x1013ba4c */

undefined4 FUN_1013ba4c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3 == 0) {
    uVar2 = 1;
  }
  else {
    puVar1 = (undefined4 *)FUN_100f0524(0x20);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 5;
    }
    else {
      FUN_1011ea48(puVar1 + 2,0,0x18);
      uVar2 = 0;
      *(undefined1 *)((int)puVar1 + 9) = 0;
      iVar3 = *(int *)(param_3 + 0x3c);
      *puVar1 = param_1;
      puVar1[6] = 0;
      puVar1[7] = iVar3;
      puVar1[1] = param_2;
      *(undefined4 **)(iVar3 + 0x18) = puVar1;
      *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
      iVar3 = *(int *)(*(int *)(param_3 + 0x5c) + 4);
      *(undefined4 **)(param_3 + 0x3c) = puVar1;
      *(int *)(*(int *)(param_3 + 0x5c) + 4) = iVar3 + 1;
    }
  }
  return uVar2;
}

