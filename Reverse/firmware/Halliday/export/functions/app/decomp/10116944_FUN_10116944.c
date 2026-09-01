/* FUN_10116944 @ 0x10116944 */

undefined4 FUN_10116944(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_10116d2c();
  if (((*DAT_101169b4 != -1) && (iVar1 = FUN_1000403c(param_1,param_2,param_1,param_2), iVar1 == 0))
     && (iVar1 = FUN_10003fec(param_1,param_2,0,0), iVar1 != 0)) {
    puVar2 = (undefined4 *)thunk_FUN_10112f50();
    *puVar2 = 0x21;
    uVar3 = FUN_10003d5c(0,0);
    return uVar3;
  }
  return uVar3;
}

