/* FUN_140c49c4 @ 0x140c49c4 */

int * FUN_140c49c4(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_2 + -0xc);
  if (iVar4 != 0) {
    iVar2 = *param_1;
    puVar1 = (uint *)(iVar2 + -8);
    uVar3 = *(int *)(iVar2 + -0xc) + iVar4;
    if ((*puVar1 < uVar3) || (iVar2 = *(int *)(iVar2 + -4), 0 < iVar2)) {
      FUN_140c4986(param_1,uVar3,*puVar1,iVar2,param_4);
    }
    FUN_140c456c(*param_1 + *(int *)(*param_1 + -0xc) * 4,*param_2,iVar4);
    FUN_140c4634(*param_1 + -0xc,uVar3);
  }
  return param_1;
}

