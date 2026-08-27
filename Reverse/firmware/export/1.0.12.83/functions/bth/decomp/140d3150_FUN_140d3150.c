/* FUN_140d3150 @ 0x140d3150 */

undefined4 FUN_140d3150(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_140c03c0(DAT_140d3194);
  iVar3 = *(int *)(*param_1 + 0xc);
  if (*(int *)(iVar3 + iVar1 * 4) == 0) {
    uVar2 = FUN_140bff34(0x70);
    FUN_140d2548(uVar2,0);
    FUN_140d3008(uVar2,param_1);
    FUN_140c054c(*param_1,uVar2,iVar1);
  }
  return *(undefined4 *)(iVar3 + iVar1 * 4);
}

