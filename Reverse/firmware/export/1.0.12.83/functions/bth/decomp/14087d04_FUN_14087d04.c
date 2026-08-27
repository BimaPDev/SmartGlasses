/* FUN_14087d04 @ 0x14087d04 */

int FUN_14087d04(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = FUN_1407772c(*(undefined2 *)(DAT_14087d30 + 2),2,0,param_4,param_4);
  if (iVar2 != 0) {
    puVar3 = (undefined2 *)FUN_14075458(iVar2,2);
    *puVar3 = param_1;
    cVar1 = FUN_1407780c(iVar2);
    return (int)cVar1;
  }
  return 1;
}

