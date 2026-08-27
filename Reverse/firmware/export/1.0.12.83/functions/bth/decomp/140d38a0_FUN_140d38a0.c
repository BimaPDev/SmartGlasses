/* FUN_140d38a0 @ 0x140d38a0 */

undefined4 FUN_140d38a0(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_140c03c0(DAT_140d38e8);
  iVar3 = *(int *)(*param_2 + 0xc);
  if (*(int *)(iVar3 + iVar1 * 4) == 0) {
    uVar2 = FUN_140bff34(0x128);
    FUN_140d270c(uVar2,0);
    FUN_140d3198(uVar2,param_2);
    FUN_140c054c(*param_2,uVar2,iVar1);
  }
  return *(undefined4 *)(iVar3 + iVar1 * 4);
}

