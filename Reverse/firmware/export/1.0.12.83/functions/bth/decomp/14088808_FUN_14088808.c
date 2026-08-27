/* FUN_14088808 @ 0x14088808 */

int FUN_14088808(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined2 param_5,undefined1 param_6,undefined2 param_7)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = FUN_1407772c(0x429,0x15,0,param_4,param_4);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_14075458(iVar3,0x15);
    *puVar4 = *param_1;
    uVar1 = *(undefined2 *)(param_1 + 1);
    *(undefined4 *)((int)puVar4 + 6) = param_2;
    *(undefined2 *)(puVar4 + 1) = uVar1;
    *(undefined4 *)((int)puVar4 + 10) = param_3;
    *(short *)((int)puVar4 + 0xe) = (short)param_4;
    *(undefined2 *)(puVar4 + 4) = param_5;
    *(undefined1 *)((int)puVar4 + 0x12) = param_6;
    *(undefined2 *)((int)puVar4 + 0x13) = param_7;
    cVar2 = FUN_1407780c(iVar3);
    return (int)cVar2;
  }
  return 1;
}

