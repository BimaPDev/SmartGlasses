/* FUN_14087648 @ 0x14087648 */

int FUN_14087648(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = FUN_1407772c(0x40d,0x17,0,param_4,param_4);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_14075458(iVar3,0x17);
    *puVar4 = *param_1;
    uVar1 = *(undefined2 *)(param_1 + 1);
    *(char *)((int)puVar4 + 6) = (char)param_3;
    *(undefined2 *)(puVar4 + 1) = uVar1;
    FUN_140e5278((int)puVar4 + 7,param_2,param_3);
    cVar2 = FUN_1407780c(iVar3);
    return (int)cVar2;
  }
  return 1;
}

