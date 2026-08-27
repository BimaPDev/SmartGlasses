/* FUN_140876c4 @ 0x140876c4 */

int FUN_140876c4(undefined4 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                byte param_5)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = FUN_1407772c(0x42b,9,0,param_4,param_4);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_14075458(iVar3,9);
    *puVar4 = *param_1;
    uVar1 = *(undefined2 *)(param_1 + 1);
    *(undefined1 *)((int)puVar4 + 6) = param_2;
    *(undefined2 *)(puVar4 + 1) = uVar1;
    *(undefined1 *)((int)puVar4 + 7) = param_3;
    *(byte *)(puVar4 + 2) = param_5 & 6 | (byte)param_4;
    cVar2 = FUN_1407780c(iVar3);
    return (int)cVar2;
  }
  return 1;
}

