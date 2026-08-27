/* FUN_2c607278 @ 0x2c607278 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c607278(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = _LAB_2c6072b0;
  piVar1 = _LAB_2c6072ac;
  iVar3 = *_LAB_2c6072b0;
  iVar4 = *_LAB_2c6072ac + 1;
  *_LAB_2c6072ac = iVar4;
  iVar3 = FUN_2c62bebc(iVar3,iVar4 * 8,param_3,iVar4,param_4);
  iVar4 = *piVar1;
  *piVar2 = iVar3;
  iVar5 = iVar4 + 0x1fffffff;
  *(undefined4 *)(iVar3 + iVar5 * 8) = param_1;
  *(undefined4 *)(*piVar2 + iVar5 * 8 + 4) = param_2;
  return iVar4;
}

