/* FUN_10124316 @ 0x10124316 */

int FUN_10124316(undefined4 param_1,uint param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uVar2;
  uint local_c;
  
  local_c = param_2;
  iVar1 = FUN_10086ae0(param_1,param_2,&local_c,param_4,param_1);
  if ((iVar1 < 0) || (0xffff < local_c)) {
    uVar2 = 0x3f;
    iVar1 = -0x16;
  }
  else {
    uVar2 = (undefined2)local_c;
  }
  *param_3 = uVar2;
  return iVar1;
}

