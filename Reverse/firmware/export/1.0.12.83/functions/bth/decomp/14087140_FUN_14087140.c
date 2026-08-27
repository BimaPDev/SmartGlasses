/* FUN_14087140 @ 0x14087140 */

int FUN_14087140(undefined4 *param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4,
                undefined1 param_5)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = FUN_1407772c(0x405,0xd,0,param_4,param_4);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_14075458(iVar3,0xd);
    *puVar4 = *param_1;
    uVar1 = *(undefined2 *)(param_1 + 1);
    *(undefined2 *)((int)puVar4 + 6) = param_2;
    *(undefined2 *)(puVar4 + 1) = uVar1;
    *(undefined1 *)(puVar4 + 2) = param_3;
    *(undefined1 *)((int)puVar4 + 9) = 0;
    *(short *)((int)puVar4 + 10) = (short)param_4;
    *(undefined1 *)(puVar4 + 3) = param_5;
    cVar2 = FUN_1407780c(iVar3);
    return (int)cVar2;
  }
  return 1;
}

