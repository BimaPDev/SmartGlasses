/* FUN_14089af8 @ 0x14089af8 */

int FUN_14089af8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_1407772c(0xfc0f,4,0,param_4,param_4);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_14075458(iVar2,4);
    *puVar3 = param_1;
    cVar1 = FUN_1407780c(iVar2);
    return (int)cVar1;
  }
  return 1;
}

