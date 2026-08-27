/* FUN_140cd4fc @ 0x140cd4fc */

undefined4 FUN_140cd4fc(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_140c03c0(DAT_140cd540);
  iVar3 = *(int *)(*param_2 + 0xc);
  if (*(int *)(iVar3 + iVar1 * 4) == 0) {
    uVar2 = FUN_140bff34(0x68);
    FUN_140cc28c(uVar2,0);
    FUN_140cc5f8(uVar2,param_2);
    FUN_140c054c(*param_2,uVar2,iVar1);
  }
  return *(undefined4 *)(iVar3 + iVar1 * 4);
}

