/* FUN_1408755c @ 0x1408755c */

int FUN_1408755c(undefined4 *param_1,undefined1 param_2)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = FUN_1407772c(0x40a,7,0);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_14075458(iVar3,7);
    *puVar4 = *param_1;
    uVar1 = *(undefined2 *)(param_1 + 1);
    *(undefined1 *)((int)puVar4 + 6) = param_2;
    *(undefined2 *)(puVar4 + 1) = uVar1;
    cVar2 = FUN_1407780c(iVar3);
    return (int)cVar2;
  }
  return 1;
}

