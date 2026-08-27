/* FUN_140cca60 @ 0x140cca60 */

undefined4 FUN_140cca60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_140c03c0(DAT_140ccaa4);
  iVar3 = *(int *)(*param_1 + 0xc);
  if (*(int *)(iVar3 + iVar1 * 4) == 0) {
    uVar2 = FUN_140bff34(0x44);
    FUN_140cc090(uVar2,0);
    FUN_140cc944(uVar2,param_1);
    FUN_140c054c(*param_1,uVar2,iVar1);
  }
  return *(undefined4 *)(iVar3 + iVar1 * 4);
}

