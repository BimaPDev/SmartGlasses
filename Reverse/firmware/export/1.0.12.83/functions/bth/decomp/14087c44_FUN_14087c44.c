/* FUN_14087c44 @ 0x14087c44 */

int FUN_14087c44(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = FUN_1407772c(0x401,5,0,param_4,param_4);
  if (iVar2 != 0) {
    puVar3 = (undefined1 *)FUN_14075458(iVar2,5);
    puVar3[1] = (char)((uint)param_1 >> 8);
    puVar3[2] = (char)((uint)param_1 >> 0x10);
    *puVar3 = (char)param_1;
    puVar3[3] = param_2;
    puVar3[4] = param_3;
    cVar1 = FUN_1407780c(iVar2);
    return (int)cVar1;
  }
  return 1;
}

